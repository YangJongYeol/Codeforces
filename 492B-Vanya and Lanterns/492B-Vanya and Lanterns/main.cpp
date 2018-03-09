//
//  main.cpp
//  492B-Vanya and Lanterns
//
//  Created by 양종열 on 2018. 3. 9..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    double l, d = 0.0, tmp;
    
    cin>>n>>l;
    vector<double> vc;
    
    for (int i=0; i<n; i++) {
        cin>>tmp;
        vc.push_back(tmp);
    }
    
    sort(vc.begin(), vc.end());
    
    for (int i=0; i<n; i++) {
        if (i==0) {
            if (n == 1) d = max(vc[i], l-vc[i]);
            else d = max(vc[i], (vc[i+1]-vc[i])/2.0);
        } else if (i<n-1) {
            tmp = max((vc[i]-vc[i-1])/2.0, (vc[i+1]-vc[i])/2.0);
            d = max(d, tmp);
        } else {
            tmp = max((vc[i]-vc[i-1])/2.0, l-vc[i]);
            d = max(d, tmp);
        }
    }
    
    cout.precision(9);
    cout<<fixed<<d;
    return 0;
}
