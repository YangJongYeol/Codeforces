//
//  main.cpp
//  282A-Bit++
//
//  Created by 양종열 on 2018. 1. 22..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,X=0;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        string operation("");
        cin>>operation;
        
        if(!operation.compare("++X"))
            X++;
        else if (!operation.compare("X++")){
            if (i==(n-1)) {
                X++;
                cout<<X;
                return 0;
            } else {
                X++;
            }
        }else if (!operation.compare("--X"))
            X--;
        else{
            if(i==(n-1)) {
                X--;
                cout<<X;
                return 0;
            } else {
                X--;
            }
        }
    }
 
    cout<<X;
    return 0;
}
