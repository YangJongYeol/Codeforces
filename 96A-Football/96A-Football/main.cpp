//
//  main.cpp
//  96A-Football
//
//  Created by 양종열 on 2018. 1. 22..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string situation;
    int cur,prev=-1,count=1;
    getline(cin,situation);
    
    for (int i=0; i<situation.length(); i++) {
        cur=situation[i];
        if(cur==prev)
            count++;
        else
            count = 1;
        
        if(count == 7){
            cout<<"YES"<<endl;
            return 0;
        }
        prev = cur;
    }
    
    cout<<"NO"<<endl;
    return 0;
}
