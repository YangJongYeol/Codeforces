//
//  main.cpp
//  61A-Ultra-Fast Mathematician
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string num1, num2;
    
    cin>>num1>>num2;
    
    int result[num1.length()];
    
    for (int i=0; i<num1.length(); i++) {
        if(num1[i]==num2[i])
            result[i] = 0;
        else
            result[i] = 1;
    }
    
    for(int i=0; i<num1.length(); i++)
        cout<<result[i];
    
    return 0;
}
