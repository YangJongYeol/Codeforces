//
//  main.cpp
//  533E-Correcting Mistakes
//
//  Created by 양종열 on 2018. 6. 20..
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
    
    string str1;
    string str1_temp = "";
    string str2;
    cin>>str1>>str2;
    
    for (int i=0; i<n; i++) {
        if (str1[i] != str2[i]) {
            str1.insert(i, 1, str2[i]);
            break;
        }
    }
    
    for (int i=0; i<str1.length(); <#increment#>) {
        <#statements#>
    }
    
    return 0;
}
