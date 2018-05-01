//
//  main.cpp
//  535B-Tavas and SaDDas
//
//  Created by 양종열 on 2018. 5. 1..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    if (n == 4) {
        cout<<1;
        return 0;
    }
    if (n == 7) {
        cout<<2;
        return 0;
    }
    
    int origin = n;
    int digit = log10(n)+1;
    int prev = 0, curr = 0;
    for (int i=1; i<digit; i++) { prev += pow(2, i); }
    
    vector<int> vc;
    for (int i=0; i<digit; i++) {
        vc.push_back(n%10);
        n /= 10;
    }
    
    for (int i=digit-1; i>=0; i--) {
        if (i == 1) {
            switch (origin%100) {
                case 44:
                    curr += 1;
                    break;
                case 47:
                    curr += 2;
                    break;
                case 74:
                    curr += 3;
                    break;
                case 77:
                    curr += 4;
                    break;
            }
            break;
        }
        
        if (vc[i] == 7) {
            curr += pow(2, i);
        }
    }
    
    cout<<curr+prev;
    return 0;
}
