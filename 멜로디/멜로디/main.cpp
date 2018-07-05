//
//  main.cpp
//  멜로디
//
//  Created by 양종열 on 2018. 5. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    string str = "";
    string str_com = "";
    for (int i=0; i<n; i++) {
        string tmp;
        cin>>tmp;
        if (tmp == "10") {
            tmp = "a";
        } else if (tmp == "11") {
            tmp = "b";
        } else if (tmp == "12") {
            tmp = "c";
        }
        str += tmp;
    }
    
    int max = 0;
    int value = 0;
    for (int i=1; i<=n; i++) {
        str_com += str[i-1];
        int num = 0;
        num = (int)str.find(str_com);
        int count = 0;
        while (num != -1) {
            count++;
            num = (int)str.find(str_com, num+1);
        }
        if (count >= max) {
            max = count;
            if ((int)str_com.length() > value) {
                value = (int)str_com.length();
            }
        }
    }
    
    cout<<value;
    return 0;
}
