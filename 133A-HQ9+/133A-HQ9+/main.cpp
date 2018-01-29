//
//  main.cpp
//  133A-HQ9+
//
//  Created by 양종열 on 2018. 1. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    
    if(str.find("H")<str.length() || str.find("Q")<str.length() || str.find("9")<str.length())
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}
