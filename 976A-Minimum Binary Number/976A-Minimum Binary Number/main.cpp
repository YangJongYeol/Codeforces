//
//  main.cpp
//  976A-Minimum Binary Number
//
//  Created by 양종열 on 2018. 5. 8..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
int n;
string binary;

int main(int argc, const char * argv[]) {
    // insert code here...

    cin>>n;
    cin>>binary;
    
    int first1location = (int)binary.find('1');
    for (int i=first1location+1; i<n; i++) {
        if (binary[i] == '1') {
            binary.erase(i,1);
            i--;
        }
    }
    
    cout<<binary;
    return 0;
}
