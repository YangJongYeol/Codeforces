//
//  main.cpp
//  550A-Two Substrings
//
//  Created by 양종열 on 2018. 3. 19..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string str, tmp;
    cin>>str;
    
    int flag = 0;   //  0: none, 1: AB, 2: BA
    tmp = str;
    for (int i=0; i<str.length()-1; i++) {
        if (tmp[i]=='A' && tmp[i+1]=='B' && flag==0) {
            tmp[i] = '0';
            tmp[i+1] = '0';
            
            flag = 1;
        } else if (tmp[i]=='B' && tmp[i+1]=='A' && flag==1) {
            cout<<"YES";
            return 0;
        }
    }
    
    flag = 0;
    for (int i=0; i<str.length()-1; i++) {
        if (str[i]=='B' && str[i+1]=='A' && flag==0) {
            str[i] = '0';
            str[i+1] = '0';
            
            flag = 2;
        } else if (str[i]=='A' && str[i+1]=='B' && flag==2) {
            cout<<"YES";
            return 0;
        }
    }
    
    cout<<"NO";
    return 0;
}
