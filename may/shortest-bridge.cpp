//https://leetcode.com/problems/shortest-bridge/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     int n;
    
    vector<pair<int,int>> v={{0,1},{1,0},{-1,0},{0,-1}};
    queue<pair<int,int>> q;
        
    void fill(vector<vector<int>>& grid,int i, int j)
    {
        grid[i][j]=2;
        q.push({i,j});
        for(auto a:v)
        {
            int x=a.first+i;
            int y=a.second+j;
            
            if(x>=0 && y>=0 && x<n && y<n && grid[x][y]==1)
                fill(grid,x,y);
        }
        
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        
        
        n=grid[0].size();
           
        bool done=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                if(grid[i][j]==1)
                {
                    fill(grid,i,j);
                    done=true;
                    break;
                }
            
            if(done)
                break;
        }        
                
        int cost=0;
        while(!q.empty())
        {
            cost++;
            int s=q.size();
            while(s--)
            {
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                for(auto a:v)
                {
                    int x=a.first+i;
                    int y=a.second+j;
                    
                    
                    if(x>=0 && y>=0 && x<n && y<n && grid[x][y]!=2)
                    {
                        if(grid[x][y]==1)
                        return cost-1;

                        grid[x][y]=2;
                        q.push({x,y});
                    }
                }

                
            }
        }
        
        return -1;
        
        
    }
    
    
};