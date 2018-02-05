//
//  main.cpp
//  580A- Kefa and First Steps
//
//  Created by 양종열 on 2018. 2. 5..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, tmp, maxNum=0;
    
    cin>>n;
    vector<int> vt;
    
    for (int i=0; i<n; i++) {
        cin>>tmp;
        
        if (vt.empty()) {
            vt.push_back(tmp);
        } else {
            if (vt.back() <= tmp) {
                vt.push_back(tmp);
            } else {
                maxNum = max(maxNum, (int)vt.size());
                vt.clear();
                vt.push_back(tmp);
            }
        }
    }
    
    maxNum = max(maxNum, (int)vt.size());
    
    cout<<maxNum;
    return 0;
}
