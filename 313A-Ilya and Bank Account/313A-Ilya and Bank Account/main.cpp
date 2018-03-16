//
//  main.cpp
//  313A-Ilya and Bank Account
//
//  Created by 양종열 on 2018. 3. 16..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string n;
    cin>>n;
    
    if (n[0] != '-') {
        cout<<n;
        return 0;
    }
    
    if (n[n.length()-1] >= n[n.length()-2]) { n.erase(n.length()-1,1); }
    else { n.erase(n.length()-2,1); }
    
    if (n == "-" || n == "-0") {
        n = "0";
    }
    
    cout<<n;
    return 0;
}
