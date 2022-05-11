#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v(3,vector<int>(3,0));
    cin>>v[0][0]>>v[0][1]>>v[0][2];
    int x11=v[0][1]+v[0][2];

    cin>>v[1][0]>>v[1][1]>>v[1][2];
    int y11=v[1][0]+v[1][2];

    cin>>v[2][0]>>v[2][1]>>v[2][2];
    int z11=v[2][0]+v[2][1];

    int x1 = v[1][0]+v[2][0];
    int y1 = v[0][1]+v[2][1];
    int z1 = v[0][2]+v[1][2];

    /*
    x11 = x + v01 + v02
    y11 = v10 + y + v12
    z11 = v20 + v21 + z

    but digonal sum = row col sum as given

    x+y+z = x + v01 + v02

    so   y+z = v01+v02
         x+z = v10+v12
         x+y = v20+v21

        so
        2x+2y+2z = v01+v02+v10+v12+v20+v21;
    */
    int xyz = (x11+y11+z11)/2;

    /* 

    (x11 = xyz i.e. x+y+z = x11 
    as given)

    so
    x+y+z = x+v01+v02
    xyz = x+x11
    so
    x = xyz-x11;
    y = xyz-y11;
    z = xyz-z11;
    */
    v[0][0]=xyz-x11;
    v[1][1]=xyz-y11;
    v[2][2]=xyz-z11;
    cout<<v[0][0]<<" "<<v[0][1]<<" "<<v[0][2]<<endl;
    cout<<v[1][0]<<" "<<v[1][1]<<" "<<v[1][2]<<endl;
    cout<<v[2][0]<<" "<<v[2][1]<<" "<<v[2][2]<<endl;
    
    return 0;    
}