//
//  main.cpp
//  266A-Stones on the Table
//
//  Created by 양종열 on 2018. 1. 24..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, count=0;
    string color;
    cin>>n;
    cin>>color;
    
    for (int i=0; i<color.length(); i++) {
        if(color[i-1]==color[i])
            count++;
    }

    cout<<count;
    
    return 0;
}
