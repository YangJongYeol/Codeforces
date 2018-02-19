//
//  main.cpp
//  379A-New Year Candles
//
//  Created by 양종열 on 2018. 2. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//
/*
 4/2 -> 2
 2/2 -> 1
 4 + 2 + 1 = 7
 
 totalHour += 4
 4/2 = 2

 totalHour += 2
 2/2 = 1
 
 totalHour += 1
 1/2 = 0
 */

/*
 6/3 -> 2
 6 + 2 = 8
 
 totalHour += 6;
 6/3 = 2;
 
 totalHour += 2;
 2/3 = 0;
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int a, b;
    cin>>a>>b;
    
    int totalHour = a, remain;
    while (a!=0) {
        remain = a%b;
        a = a/b;
        
        totalHour += a;
        if (a != 0) a += remain;
    }
    
    cout<<totalHour;
    
    return 0;
}
