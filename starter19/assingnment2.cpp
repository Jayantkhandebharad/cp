#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <queue>
#include <vector>
#include <iterator>
using namespace std;
//Process Class
class process
{

public:
    //Size & number of process
    size_t size;
    pid_t no;
};
//Memory Class
class memory
{
public:
    size_t size;
    pid_t no;
    queue<process> space_occupied;
    //Function to push process in a block
    void push(const process p)
    {
        if (p.size <= size)
        {
            space_occupied.push(p);
            size -= p.size;
        }
    }
    //Function to pop and return the process from the block process
    process pop()
    {
        process p;
        // If space occupied is empty
        if (!space_occupied.empty())
        {
            p = space_occupied.front();
            space_occupied.pop();
            size += p.size;
            return p;
        }
    }

    //Function to check if block is completely empty
    bool empty()
    {
        return space_occupied.empty();
    }
};
// Function for allocation using First fit
vector<memory> first_fit(vector<memory> memory_blocks,
                         queue<process> processes)
{
    int i = 0;
    bool done, done1;
    memory na;
    na.no = -10;
    while (!processes.empty())
    {
        done = 0;
        for (i = 0; i < memory_blocks.size(); i++)
        {
            done1 = 0;
            if (memory_blocks.at(i).size >= processes.front().size)
            {
                memory_blocks.at(i).push(processes.front());
                done = 1;
                done1 = 1;
                break;
            }
        }
        //If process is done
        if (done == 0 && done1 == 0)
        {
            na.size += processes.front().size;
            na.push(processes.front());
        }
        //pop the process
        processes.pop();
    }
    if (!na.space_occupied.empty())
        memory_blocks.push_back(na);
    //Return the memory
    return memory_blocks;
}
// Function for allocation using Next fit
vector<memory> next_fit(vector<memory> memory_blocks,
                        queue<process> processes)
{
    int i = 0;
    bool done, done1;
    memory na;
    na.no = -10;
    // Loop till process is empty
    while (!processes.empty())
    {
        done1 = 0;
        // Traverse memory_blocks
        for (i = 0; i < memory_blocks.size(); i++)
        {
            done = 0;
            // If process is not empty
            if (!processes.empty() &&
                memory_blocks.at(i).size >= processes.front().size)
            {
                memory_blocks.at(i).push(processes.front());
                done = 1;
                done1 = 1;
                processes.pop();
            }
        }
        if (!processes.empty() && done == 0 && done1 == 0)
        {
            na.size += processes.front().size;
            na.push(processes.front());
            processes.pop();
        }
    }
    //If space is not occupied push the memory_blocks na
    if (!na.space_occupied.empty())
    {
        memory_blocks.push_back(na);
    }
    //Return the memory
    return memory_blocks;
}
// Function for allocation using worst fit
vector<memory> worst_fit(vector<memory> memory_blocks,
                         queue<process> processes)
{
    int i = 0, index = 0, max;
    memory na;
    na.no = -10;
    //Loop till process queue is not empty
    while (!processes.empty())
    {
        max = 0;
        //Traverse the memory_blocks
        for (i = 0; i < memory_blocks.size(); i++)
        {
            if (memory_blocks.at(i).size >=
                    processes.front().size &&
                memory_blocks.at(i).size > max)
            {
                max = memory_blocks.at(i).size;
                index = i;
            }
        }
        if (max != 0)
        {
            memory_blocks.at(index).push(processes.front());
        }
        else
        {
            na.size += processes.front().size;
            na.push(processes.front());
        }
        //Pop the current process
        processes.pop();
    }
    //If space is not occupied
    if (!na.space_occupied.empty())
    {
        memory_blocks.push_back(na);
    }
    //Return the memory
    return memory_blocks;
}
// Function for allocation using Best fit
vector<memory> best_fit(vector<memory> memory_blocks,
                        queue<process> processes)
{
    int i = 0, min, index = 0;
    memory na;
    na.no = -10;
    // Loop till processes is not empty
    while (!processes.empty())
    {
        min = 0;
        // Traverse the memory_blocks
        for (i = 0; i < memory_blocks.size(); i++)
        {
            if (memory_blocks.at(i).size >=
                    processes.front().size &&
                (min == 0 ||
                 memory_blocks.at(i).size < min))
            {
                min = memory_blocks.at(i).size;
                index = i;
            }
        }
        if (min != 0)
        {
            memory_blocks.at(index).push(processes.front());
        }
        else
        {
            na.size += processes.front().size;
            na.push(processes.front());
        }
        // Pop the process
        processes.pop();
    }
    // If space is no occupied then push the current memory na
    if (!na.space_occupied.empty())
    {
        memory_blocks.push_back(na);
    }
    //Return the memory_blocks
    return memory_blocks;
}
//Function to display the allocation of processes
void display(vector<memory> memory_blocks)
{
    int i = 0, temp = 0;
    process p;
    cout << "\n+-------------+--------------+-------------- +" << endl;
    cout << " | Process no. | Process size | Memory block |" << endl;
    cout << "+-------------+--------------+--------------+" << endl; // Traverse memory blocks size
    for (int i = 0; i < memory_blocks.size(); i++)
    {
        // While memory block size is not empty
        while (!memory_blocks.at(i).empty())
        {
            p = memory_blocks.at(i).pop();
            temp = to_string(p.no).length();
            cout << "|" << string(7 - temp / 2 - temp % 2, ' ')
                 << p.no << string(6 - temp / 2, ' ')
                 << "|";
            temp = to_string(p.size).length();
            cout << string(7 - temp / 2 - temp % 2, ' ')
                 << p.size
                 << string(7 - temp / 2, ' ') << "|";
            temp =
                to_string(memory_blocks.at(i).no).length();
            cout << string(7 - temp / 2 - temp % 2, ' ');
            // If memory blocks is assigned
            if (memory_blocks.at(i).no != -10)
            {
                cout << memory_blocks.at(i).no;
            }
            // Else memory blocks is assigned
            else
            {
                cout << "N/A";
            }
            cout << string(7 - temp / 2, ' ')
                 << "|" << endl;
        }
    }
    cout << "+-------------+--------------+--------------+" << endl;
}
//Driver Code
int main()
{ //Declare blocks for all types of allocation techiniques
    vector<memory> first_fit_blocks;
    vector<memory> next_fit_blocks;
    vector<memory> best_fit_blocks;
    vector<memory> worst_fit_blocks;
    cout << "**Program to simulate various types of memory allocation techniques **";
    //Declare memory blocks
    vector<memory> memory_blocks(5);
    //Declare queue of all processes
    queue<process> processes;
    process temp;
    int n1, n2;
    cout << "\n\nEnter number of memory blocks-";
    cin >> n1;
    cout << "\nEnter data for memory blocks-";
    for (int i = 0; i < n1; i++)
    {
        cout << "\n\nMemory block number-";
        cin >> memory_blocks[i].no;
        cout << "Memory block size-";
        cin >> memory_blocks[i].size;
    }
    cout << "\nEnter number of processes-";
    cin >> n2;
    cout << "\nEnter data for processes-";
    for (int i = 0; i < n2; i++)
    {
        cout << "\n\nProcess ID-";
        cin >> temp.no;
        cout << "Process size-";
        cin >> temp.size;
        processes.push(temp);
    }
    int ch1, ch2 = 1;
    while (ch2 != 0)
    {
        cout << "\nMethods of memory allocation-";
        cout << "\n1.First Fit\n2.Next Fit\n3.Best Fit\n4.Worst Fit ";
        cout << "\nChoose Allocation method-";
        cin >> ch1;
        switch (ch1)
        {
        case 1:
            //Get the data
            first_fit_blocks = first_fit(memory_blocks, processes);
            //Display the data
            cout << "\nMemory allocation by First Fit";
            display(first_fit_blocks);
            break;
        case 2:
            next_fit_blocks = next_fit(memory_blocks, processes);
            cout << "\nMemory allocation by Next Fit";
            display(next_fit_blocks);
            break;
        case 3:
            best_fit_blocks = best_fit(memory_blocks, processes);
            cout << "\nMemory allocation by Best Fit";
            display(best_fit_blocks);
            break;
        case 4:
            worst_fit_blocks = worst_fit(memory_blocks, processes);
            cout << "\nMemory allocation by Worst Fit";
            display(worst_fit_blocks);
            break;
        }
        cout << "\nDo you want to continue(Press 0 to stop)-";
        cin >> ch2;
    }
}
