//
//  main.cpp
//  281A-Word Capitalization
//
//  Created by 양종열 on 2018. 1. 24..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    cin>>str;
    str[0] = toupper(str[0]);
    
    cout<<str<<endl;
    
    return 0;
}
