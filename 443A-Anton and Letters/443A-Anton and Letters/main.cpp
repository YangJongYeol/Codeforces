//
//  main.cpp
//  443A-Anton and Letters
//
//  Created by 양종열 on 2018. 2. 14..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string str;
    bool checkAlpha[26];
    getline(cin, str);
    memset(checkAlpha, 0, 26);
    
    for (int i=0; i<str.length(); i++) {
        if ((int)str[i]>=97 && (int)str[i]<=122) {
            checkAlpha[(int)str[i]-97] = 1;
        }
    }
    
    int count = 0;
    for (int i=0; i<26; i++) {
        if (checkAlpha[i]) {
            count++;
        }
    }
    
    cout<<count;
    
    return 0;
}
