//
//  main.cpp
//  520A-Pangram
//
//  Created by 양종열 on 2018. 2. 19..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    int alpha[26];
    memset(alpha, 0, 26*sizeof(int));
    for (int i=0; i<n; i++) {
        if ((int)str[i]>=65 && (int)str[i]<=90) { alpha[(int)str[i]-65]++; }
        else if ((int)str[i]>=97 && (int)str[i]<=122) { alpha[(int)str[i]-97]++; }
    }
    
    for (int i=0; i<26; i++) {
        if (alpha[i] == 0) {
            cout<<"NO";
            return 0;
        }
    }
    
    cout<<"YES";
    return 0;
}
