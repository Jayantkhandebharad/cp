#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}


int main(){
    solve();
}			
class RandomizedCollection {
public:
    map<int,vector<int>> list;
    vector<int> set;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        bool flag = false;
        if(list.find(val)==list.end()){
            flag = true;
        }
        list[val].push_back(set.size());
        set.push_back(val);
        return flag;
    }
    
    bool remove(int val) {
        bool flag = true;
        if(list.find(val)!=list.end()){
            int index_r = list[val][list[val].size()-1];
            list[val].pop_back();
            set[index_r] = set[set.size()-1];
            set.pop_back();
            int index_t;
            for(int i=0;i<list[set[index_r]].size();i++){
                if(list[set[index_r]][i]==set.size()){
                    list[set[index_r]][i]=index_r;
                    break;
                }
            }
            if(list[val].size()==0){
                list.erase(val);
            }
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int j=0;
        int x=rand()%set.size();
        return set[x];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */