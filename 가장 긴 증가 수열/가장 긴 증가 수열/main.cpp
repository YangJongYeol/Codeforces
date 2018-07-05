//
//  main.cpp
//  가장 긴 증가 수열
//
//  Created by 양종열 on 2018. 5. 10..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, temp, count=0;
    vector<int> trains;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>temp;
        if (trains.size()==0) {
            trains.push_back(temp);
            count++;
        } else if(trains.back()<temp) {
            trains.push_back(temp);
            count++;
        } else {
            auto it = lower_bound(trains.begin(), trains.end(), temp);
            *it = temp;
        }
    }
    
    cout<<count;
    
    return 0;
}
