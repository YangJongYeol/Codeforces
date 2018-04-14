//
//  main.cpp
//  24A-The ring
//
//  Created by 양종열 on 2018. 4. 7..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int start[101];
int destiny[101];

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, a, b, c, left = 0, right = 0;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>a>>b>>c;
        if(start[a] != 0 || destiny[b] != 0) {
            left += c;
            start[b]++;
            destiny[a]++;
        } else {
            right += c;
            start[a]++;
            destiny[b]++;
        }
    }
    
    cout<<(right > left ? left : right);
    return 0;
}
