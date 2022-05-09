#include <bits/stdc++.h>
using namespace std;


void solve(int a,int b,int c,int x,int y,int z) {
    int aa = 0;
    int p = 240;
    if(x/a>=y/b and x/a>=z/c){
        if(y/b>z/c){
            for(int i = 0;i<20;i++){
                if(p-a<=0){
                    break;
                }
                aa += x;
                p -= a;
            }
            for(int i = 0;i<20;i++){
                if(p-b<=0){
                    break;
                }
                aa += y;
                p -= b;
            }
            for(int i = 0;i<20;i++){
                if(p-c<=0){
                    break;
                }
                aa += z;
                p -= c;
            }

        }
        else{
            for(int i = 0;i<20;i++){
                if(p-a<=0){
                    break;
                }
                aa += x;
                p -= a;
            }
            for(int i = 0;i<20;i++){
                if(p-c<=0){
                    break;
                }
                aa += z;
                p -= c;
            }
            for(int i = 0;i<20;i++){
                if(p-b<=0){
                    break;
                }
                aa += y;
                p -= b;
            }

        }
    }
    else if(x/a<=y/b and y/b>=z/c){
        if(x/a>z/c){
            for(int i = 0;i<20;i++){
                if(p-b<=0){
                    break;
                }
                aa += y;
                p -= b;
            }
            for(int i = 0;i<20;i++){
                if(p-a<=0){
                    break;
                }
                aa += x;
                p -= a;
            }
            for(int i = 0;i<20;i++){
                if(p-c<=0){
                    break;
                }
                aa += z;
                p -= c;
            }

        }
        else{
            for(int i = 0;i<20;i++){
                if(p-b<=0){
                    break;
                }
                aa += y;
                p -= b;
            }
            for(int i = 0;i<20;i++){
                if(p-c<=0){
                    break;
                }
                aa += z;
                p -= c;
            }
            for(int i = 0;i<20;i++){
                if(p-a<=0){
                    break;
                }
                aa += x;
                p -= a;
            }

        }
    }
    else if(x/a<=z/c and y/b<=z/c){
        if(y/b>x/a){
            for(int i = 0;i<20;i++){
                if(p-c<=0){
                    break;
                }
                aa += z;
                p -= c;
            }
            for(int i = 0;i<20;i++){
                if(p-b<=0){
                    break;
                }
                aa += y;
                p -= b;
                }

            for(int i = 0;i<20;i++){
                if(p-a<=0){
                    break;
                }
                aa += x;
                p -= a;
            }
        }
        else{
            for(int i = 0;i<20;i++){
                if(p-c<=0){
                    break;
                }
                aa += z;
                p -= c;
            }
            for(int i = 0;i<20;i++){
                if(p-a<=0){
                    break;
                }
                aa += x;
                p -= a;
            }
            for(int i = 0;i<20;i++){
                if(p-b<=0){
                    break;
                }
                aa += y;
                p -= b;
            }

        }
    }

    cout<<aa<<endl;

    return;

}
int main()
{

  int t;
  int a,b,c,x,y,z;
  cin>>t;
  while(t--)
  {

        cin>>a>>b>>c;
        cin>>x>>y>>z;
        solve(a,b,c,x,y,z);


  }
  return 0;
}
