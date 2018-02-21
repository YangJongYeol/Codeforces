//
//  main.cpp
//  141A-Amusing Joke
//
//  Created by 양종열 on 2018. 2. 21..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string host, guest, str;
    
    cin>>host>>guest>>str;
    host += guest;
    
    bool flag = false;
    for (int i=0; i<str.length(); i++) {
        flag = false;
        if (host.length() != str.length()) {
            cout<<"NO";
            return 0;
        }
        
        for (int j=0; j<host.length(); j++) {
            if (str[i] == host[j]) {
                host[j] = '0';
                flag = true;
                break;
            }
        }
        
        if (!flag) {
            cout<<"NO";
            return 0;
        }
    }
    
    cout<<"YES";
    return 0;
}
