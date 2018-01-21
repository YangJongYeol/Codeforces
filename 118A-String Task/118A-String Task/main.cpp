//
//  main.cpp
//  118A-String Task
//
//  Created by 양종열 on 2018. 1. 21..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    getline(cin,str);
    
    for (int i=0; i<str.length(); i++) {
        str[i]=tolower(str[i]);
        if( str[i]=='a' || str[i]=='o' || str[i]=='y' || str[i]=='e' || str[i]=='u' || str[i]=='i'){
            str.erase(i,1);
            i--;
        }
        else{
            str.insert(i, ".");
            i++;
        }
    }

    
    cout<<str;
    
    return 0;
}
