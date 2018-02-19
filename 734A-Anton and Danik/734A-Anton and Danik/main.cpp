//
//  main.cpp
//  734A-Anton and Danik
//
//  Created by 양종열 on 2018. 2. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    string str;
    cin>>str;
    
    int winner=0; // >0 D, <0 A
    for (int i=0; i<n; i++) {
        if (str[i] == 'A') {
            winner++;
        } else {
            winner--;
        }
    }
    
    if (winner > 0) {
        cout<<"Anton";
    } else if (winner < 0) {
        cout<<"Danik";
    } else {
        cout<<"Friendship";
    }
    
    return 0;
}
