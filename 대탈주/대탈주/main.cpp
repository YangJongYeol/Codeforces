//
//  main.cpp
//  대탈주
//
//  Created by 양종열 on 2018. 5. 11..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m,totalCar = 0;
    cin>>n>>m;
    
    int toll[n+1];
    int car[m+1];
    int copy[m+1];
    vector<int> vc;
    
    
    for (int i=1; i<=m; i++) {
        cin>>car[i];
        if (car[i] > 0) {
            vc.push_back(i);
            totalCar += car[i];
        }
    }
    for (int i=1; i<=n; i++) { cin>>toll[i]; }
    
    for (int i=1; i<=n; i++) {
        for (int i=1; i<=m; i++) { copy[i] = car[i]; }
        int index = i; bool flag = false;
        int count = 0;
        for (int j=0; j<vc.size(); j++) {
            if (toll[i] == vc[j]) {
                if (copy[vc[j]] > 0) {
                    copy[vc[j]]--;
                    i++; j = -1; count++;
                    
                    if (count == totalCar) {
                        flag = true;
                        break;
                    }
                } else
                    break;
            }
        }
        
        if (flag) {
            cout<<index;
            return 0;
        } else {
            i = index;
        }
    }
    
    cout<<0;
    return 0;
}
