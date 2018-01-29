//
//  main.cpp
//  131A-cAPS lOCK
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
    
    //mode 0 : not using caps lock
    //mode 1 : all upper
    //mode 2 : all upper except first word
    int mode = 1;
    if(islower(str[0])){
        mode = 2;
    }
    for(int i=1; i<str.length(); i++){
        if(islower(str[i])){
            mode = 0;
            break;
        }
    }
    
    if(mode==2){
        str[0] = toupper(str[0]);
        for(int i=1; i<str.length(); i++){
            str[i] = tolower(str[i]);
        }
    } else if(mode==1){
        for(int i=0; i<str.length(); i++){
            str[i] = tolower(str[i]);
        }
    }
    
    cout<<str;
}
