#include<vector>
#include<algorithm>
#include<iostream>
#include<climits>
#include <cmath>
#include <cstdlib>
#include<utility>
using namespace std;

const int M = 1000000007;

bool solve(long long int n) {
    if(n == 0){
        return false;
    } else if((n & 1) == 1){
        return !solve(n - 1);
    } else{
        if(n % 4 == 0){
            return true;
        }
        else if(n % 2 == 0){
            return !solve(n / 2);
        }
        return true;
    }
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        bool didAliceWin = solve(n);
        if(didAliceWin){
            cout<<"Alice";
        }else{
            cout<<"Bob";
        }
        cout<<endl;
    }
    return 0;
}
