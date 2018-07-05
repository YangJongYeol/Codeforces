//
//  main.cpp
//  일렬 연결망
//
//  Created by 양종열 on 2018. 5. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    vector<int> vc;
    cin>>n;
    
    long long sum = 0, zone = 0;
    for (int i=0; i<n; i++) {
        int tmp;
        cin>>tmp;
        vc.push_back(tmp);
        if (vc[i] == 1) {
            int count = 5;
            int zeroNum = 0, oneNum = 0;
            for (int j=i-1; j>=0; j--) {
                if (vc[j] == 0 && count > 0) {
                    if (zone == 0) {
                        zone++;
                    }
                    count--; sum += i-j;
                    zeroNum++;
                }
                if(vc[j] == 1 && count > 0){
                    oneNum++;
                }
            }
            
            if (zeroNum == 5 && oneNum == 0) {
                zone++;
            }
        }
    }

    cout<<sum<<" "<<zone;
    return 0;
}
