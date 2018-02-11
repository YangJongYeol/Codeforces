//
//  main.cpp
//  208A-Dubstep
//
//  Created by 양종열 on 2018. 2. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    
    bool flag = false;
    while(str.length()!=0) {
        if(str[0]=='W' && str[1]=='U' && str[2]=='B'){
            if(!flag)
                str.erase(0,3);
            else {
                str.erase(0,3);
                cout<<" ";
                flag = false;
            }
        } else {
            flag = true;
            cout<<str[0];
            str.erase(0,1);
        }
    }
    
    return 0;
}
