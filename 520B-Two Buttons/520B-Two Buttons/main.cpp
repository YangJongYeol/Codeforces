//
//  main.cpp
//  520B-Two Buttons
//
//  Created by 양종열 on 2018. 3. 19..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m, count=0;
    cin>>n>>m;
    
    if (n>m) {
        cout<<n-m;
        return 0;
    }
    
    while (n<m) {
        if (m%2==0) { m /= 2; }
        else { m++; }
        count++;
    }
    
    cout<<count+n-m;    // 99 100 인 경우 100/2 = 50 인데 매 while문 마다 ++하고 있는 건 비효율적.
    return 0;
}
