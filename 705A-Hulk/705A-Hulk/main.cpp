//
//  main.cpp
//  705A-Hulk
//
//  Created by 양종열 on 2018. 3. 15..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    string feeling = "I hate ";
    bool flag = true;
    while (--n) {
        if (flag) {
            feeling += "that I love ";
            flag = false;
        } else {
            feeling += "that I hate ";
            flag = true;
        }
    }
    
    cout<<feeling<<"it";
    
    return 0;
}
