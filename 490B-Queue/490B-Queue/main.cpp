//
//  main.cpp
//  490B-Queue
//
//  Created by 양종열 on 2018. 3. 30..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int n, x, y, a, b[2000001], c[2000001];
//c : 어디서 시작할지 찾는 놈
//b : 2칸씩 뛰어가면서 다음 value 저장하는 배열

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>x>>y;
        b[x] = y;
        c[x]++;
        c[y]--;
    }
    
    for (; c[a]!=1; a++);
    x = a;
    y = b[0];
    
    while (x && y) {
        cout<<x<<" "<<y<<" ";
        x = b[x]; y = b[y];
    }
    if (x) {
        cout<<x;
    }
    
    return 0;
}
