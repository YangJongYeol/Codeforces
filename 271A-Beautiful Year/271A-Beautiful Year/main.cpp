//
//  main.cpp
//  271A-Beautiful Year
//
//  Created by 양종열 on 2018. 2. 4..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int year;
    cin>>year;

    while (true) {
        year++;

        bool flag = false;
        int temp = year;
        int digit[4];
        for (int i=0; i<4; i++) {
            digit[i] = temp%10;
            temp /= 10;
        }

        for (int i=0; i<4; i++) {
            for (int j=i+1; j<4; j++) {
                if (digit[i] == digit[j]) {
                    flag = true;
                }
            }
        }

        if (!flag) {
            cout<<year;
            return 0;
        }
    }
    
    
    return 0;
}
