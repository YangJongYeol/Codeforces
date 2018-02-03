//
//  main.cpp
//  110A-Nearly Lucky Number
//
//  Created by 양종열 on 2018. 2. 3..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str;
    cin>>str;
    
    int count = 0;
    bool hasFour = false;
    bool hasSeven = false;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='4') {
            count++;
            hasFour = true;
        } else if(str[i]=='7') {
            count++;
            hasSeven = true;
        }
    }
    
    if((hasFour || hasSeven) && (count==4 || count==7))
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}
