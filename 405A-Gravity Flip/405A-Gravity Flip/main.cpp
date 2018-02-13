//
//  main.cpp
//  405A-Gravity Flip
//
//  Created by 양종열 on 2018. 2. 13..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    vector<int> vc;
    int tmp;
    for (int i=0; i<n; i++) {
        cin>>tmp;
        vc.push_back(tmp);
    }
    
    sort(vc.begin(), vc.end());
    
    for (int i=0; i<n; i++) {
        cout<<vc[i]<<" ";
    }
    
    return 0;
}
