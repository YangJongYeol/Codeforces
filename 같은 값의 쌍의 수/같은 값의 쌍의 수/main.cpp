//
//  main.cpp
//  같은 값의 쌍의 수
//
//  Created by 양종열 on 2018. 5. 10..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int num[5001];

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n;
    for (int i=0; i<n; i++) {
        int tmp;
        cin>>tmp;
        num[tmp]++;
    }
    
    long long count = 0;
    for (int i=1; i<=5000; i++) {
        count += num[i]*(num[i]-1)/2;
    }
    
    cout<<count;
    return 0;
}
