#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> a;
    int x;
    int l = 0;
    unordered_map<int,int> aa;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(a[x]>i-l){
            l++;
            a[x] =i; 
        }
        
    }
}

int main()
{
    int t, n;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        solve(n);
    }
}