//
//  main.cpp
//  136A-Presents
//
//  Created by 양종열 on 2018. 2. 6..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, tmp;
    cin>>n;
    
    int from[n+1];
    
    for (int i=1; i<=n; i++) {
        cin>>tmp;
        from[tmp]=i;
    }
    
    for (int i=1; i<=n; i++) {
        cout<<from[i]<<" ";
    }
    return 0;
}
