/*
    Time Complexity: O(N + M)
    Space Complexity: O(N)

    Where N is the number of nodes
    and M is the number of edges in the given graph.
*/

#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

class graphNode
{
public:
    int data;
    vector<graphNode *> neighbours;
    graphNode()
    {
        data = 0;
        neighbours = vector<graphNode *>();
    }

    graphNode(int val)
    {
        data = val;
        neighbours = vector<graphNode *>();
    }

    graphNode(int val, vector<graphNode *> neighbours)
    {
        data = val;
        this->neighbours = neighbours;
    }
};

graphNode *cloneGraphHelper(graphNode *node, unordered_map<graphNode *, graphNode *> &copies)
{
    if (node == NULL)
    {
        return NULL;
    }

    // Create a graph node which denotes the node of the cloned graph.
    graphNode *copy = new graphNode(node->data);

    // Update the HashMap.
    copies[node] = copy;

    // Queue used for the BFS.
    queue<graphNode *> level;

    // Push source node.
    level.push(node);

    while (!level.empty())
    {
        // Take the the front element from the queue.
        graphNode *cur = level.front();
        level.pop();

        // Go through all the neighbours.
        for (graphNode *neighbor : cur->neighbours)
        {
            // If it is not present in the HashMap.
            if (copies.find(neighbor) == copies.end())
            {
                copies[neighbor] = new graphNode(neighbor->data, {});
                level.push(neighbor);
            }

            copies[cur]->neighbours.push_back(copies[neighbor]);
        }
    }

    return copy;
}

graphNode *cloneGraph(graphNode *node)
{
    // Create a HashMap.
    unordered_map<graphNode *, graphNode *> copies;

    // Return the source node of cloned graph.
    return cloneGraphHelper(node, copies);
}