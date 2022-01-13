/*
690. Employee Importance

You have a data structure of employee information, including the employee's unique ID, importance value, and direct subordinates' IDs.

You are given an array of employees employees where:

employees[i].id is the ID of the ith employee.
employees[i].importance is the importance value of the ith employee.
employees[i].subordinates is a list of the IDs of the direct subordinates of the ith employee.
Given an integer id that represents an employee's ID, return the total importance value of this employee and all their direct and indirect subordinates.


*/

#include <bits/stdc++.h>
using namespace std;

// Definition for Employee.
class Employee
{
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution
{
public:
    int getImportance(vector<Employee *> employees, int id)
    {
        int s = 0;
        for (auto i : employees)
        {
            if (id == i->id)
            {

                for (auto j : i->subordinates)
                {
                    s += getImportance(employees, j);
                }
                s += i->importance;
                return s;
            }
        }
        return s;
    }
};