//
//  main.cpp
//  58A-Chat room
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
    
    int check = 0;
    int i=str.find("h");
    if(i<str.length()){
        for(; i<str.length(); i++){
            if(str[i]=='e'){
                check++;
                i++;
                break;
            }
        }
        for(; i<str.length(); i++){
            if(str[i]=='l'){
                check++;
                i++;
                break;
            }
        }
        for(; i<str.length(); i++){
            if(str[i]=='l'){
                check++;
                i++;
                break;
            }
        }
        for(; i<str.length(); i++){
            if(str[i]=='o'){
                check++;
                i++;
                break;
            }
        }
    }
    
    if(check==4)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}
