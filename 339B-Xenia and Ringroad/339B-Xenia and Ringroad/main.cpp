//
//  main.cpp
//  339B-Xenia and Ringroad
//
//  Created by 양종열 on 2018. 2. 22..
//  Copyright © 2018년 양종열. All rights reserved.
//

// 3 2 3
// 1 - 2 - 3 - 4 - 1 - 2 - 3 : 6 times move

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    long n,m,tmp = 0;
    long long times = 0;
    long location = 1;
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>tmp;
        if(tmp > location) {
            times = times+tmp-location;
            location = tmp;
        } else if(tmp == location) {
            //times = times+n;
        } else {
            times = times+(n-location)+tmp;
            location = tmp;
        }
    }
    
    cout<<times;
}
