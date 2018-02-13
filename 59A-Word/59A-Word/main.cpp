//
//  main.cpp
//  59A-Word
//
//  Created by 양종열 on 2018. 2. 13..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string str;
    cin>>str;
    
    int count = 0;
    
    for(int i=0; i<str.length(); i++) {
        if (isupper(str[i])) count++;
    }
    
    if (count > str.length()-count) {
        for (int i=0; i<str.length(); i++)
            str[i] = toupper(str[i]);
    } else {
        for (int i=0;i<str.length(); i++) {
            str[i] = tolower(str[i]);
        }
    }
    
    cout<<str;
    
    return 0;
}
