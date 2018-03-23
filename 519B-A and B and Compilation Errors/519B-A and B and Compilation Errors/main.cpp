//
//  main.cpp
//  519B-A and B and Compilation Errors
//
//  Created by 양종열 on 2018. 3. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, temp;
    cin>>n;
    
    vector<int> vc1, vc2, vc3;
    
    for (int i=0; i<n; i++) {
        cin>>temp;
        vc1.push_back(temp);
    }
    sort(vc1.begin(), vc1.end());
    
    for (int i=0; i<n-1; i++) {
        cin>>temp;
        vc2.push_back(temp);
    }
    sort(vc2.begin(), vc2.end());
    
    for (int i=0; i<n-2; i++) {
        cin>>temp;
        vc3.push_back(temp);
    }
    sort(vc3.begin(), vc3.end());
    
    bool flag = false;
    for (int i=0; i<n-1; i++) {
        if (vc1[i]!=vc2[i]) {
            cout<<vc1[i]<<endl;
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout<<vc1[n-1]<<endl;
    }
    
    flag = false;
    for (int i=0; i<n-2; i++) {
        if (vc2[i]!=vc3[i]) {
            cout<<vc2[i]<<endl;
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout<<vc2[n-2]<<endl;
    }
    
    return 0;
}
