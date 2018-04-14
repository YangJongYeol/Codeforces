//
//  main.cpp
//  550C-Divisibility by Eight
//
//  Created by 양종열 on 2018. 4. 2..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string num;
    cin>>num;
    
    num = "00"+num;
    for (int i=0; i<num.length(); i++) {
        for (int j=i+1; j<num.length(); j++) {
            if(num.length() != 2) {
                for(int k=j+1; k<num.length(); k++) {
                    int tmp = (num[i]-'0')*100+(num[j]-'0')*10+(num[k]-'0');
                    if (tmp % 8 == 0) {
                        cout<<"YES\n"<<tmp;
                        return 0;
                    }
                }
            }
        }
    }
    
    cout<<"NO";
    return 0;
}
