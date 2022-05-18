#include<bits/stdc++.h>
using namespace std;


void print(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return;
}

void selectionsort(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        int min_1=i;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[min_1]){
                min_1 = j;
            }
        }
        swap(nums[i],nums[min_1]);
    }
    return;
}


int main(){
    int n;
    cout<<"enter number of element in list : "<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter space seperated unsorted elements of list : "<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    selectionsort(v);
    cout<<"sorted array is : "<<endl;
    print(v);
    return 0;
}