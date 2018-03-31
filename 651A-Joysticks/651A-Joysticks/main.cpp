//
//  main.cpp
//  651A-Joysticks
//
//  Created by 양종열 on 2018. 3. 27..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int a1, a2;
    cin>>a1>>a2;
    
    if (a1==1 && a2==1) {
        cout<<0;
        return 0;
    }
    
    int usedMin, totalUsedMin=0;
    while (a1>0 && a2>0) {
        usedMin = 0;
        if (a1 >= a2) {
            if(a1%2!=0 || (a1%2==0 && a1==2))
                usedMin = a1/2;
            else if(a1%2==0 && a1>2)
                usedMin = (a1/2)-1;
            
            a1 = a1 - usedMin*2;
            a2 += usedMin;
        } else {
            if(a2%2!=0 || (a2%2==0 && a2==2))
                usedMin = a2/2;
            else if(a2%2==0 && a2>2)
                usedMin = (a2/2)-1;
            
            a2 = a2 - usedMin*2;
            a1 += usedMin;
        }
        
        totalUsedMin += usedMin;
    }
    
    cout<<totalUsedMin;
    
    return 0;
}
