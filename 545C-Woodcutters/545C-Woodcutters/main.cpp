//
//  main.cpp
//  545C-Woodcutters
//
//  Created by 양종열 on 2018. 5. 6..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    if (n == 1) {
        cout<<1;
        return 0;
    }
    
    int x[n], h[n], count = 2;
    
    for (int i=0; i<n; i++) {
        cin>>x[i]>>h[i];
    }
    
    int flag = 0; // left : 0, right : 1, none : 2
    for (int i=1; i<n-1; i++) {
        if (flag == 2 || flag == 0) {
            if (x[i]-h[i] > x[i-1]) {
                flag = 0;
                count++;
            } else if (x[i]+h[i] < x[i+1]) {
                flag = 1;
                count++;
            } else flag = 2;
        } else if (flag == 1) {
            if (x[i]-h[i] > x[i-1]+h[i-1]) {
                flag = 0;
                count++;
            } else if (x[i]+h[i] < x[i+1]) {
                flag = 1;
                count++;
            } else flag = 2;
        }
    }
    
    cout<<count;
    return 0;
}
