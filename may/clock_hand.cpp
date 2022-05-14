//Angle Between Hands of a Clock

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h = hour*30.0+minutes*0.5;
        double m = minutes*6.0;
        
        double x = h-m;
        
        if(x<0){
            x = x*(-1.0);
        }
        if(x>180){
            x = 360-x;
        }
        return x;
    }
};