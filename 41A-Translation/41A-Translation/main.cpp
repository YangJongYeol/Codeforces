//
//  main.cpp
//  41A-Translation
//
//  Created by 양종열 on 2018. 2. 5..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    string str, ans;
    cin>>str>>ans;
    vector<char> output;
    
    for (int i=(int)(str.length()-1); i>=0; i--) {
        output.push_back(str[i]);
    }
    
    for (int i=0; i<str.length(); i++) {
        if (output[i]!=ans[i]) {
            cout<<"NO";
            return 0;
        }
    }
    
    cout<<"YES";
    return 0;
}
