//
//  main.cpp
//  25A-IQ test
//
//  Created by 양종열 on 2018. 2. 14..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n, evenCount=0, oddCount=0;
    cin>>n;
    
    int num[n];
    for (int i=0; i<n; i++) {
        cin>>num[i];
        
        if (num[i]%2==0) {
            evenCount++;
        } else {
            oddCount++;
        }
        
        if (evenCount >= 2 && oddCount == 1) {
            for (int j=0; j<=i; j++) {
                if (num[j]%2==1) {
                    cout<<j+1;
                    return 0;
                }
            }
        } else if (oddCount >=2 && evenCount == 1) {
            for (int j=0; j<=i; j++) {
                if (num[j]%2==0) {
                    cout<<j+1;
                    return 0;
                }
            }
        }
    }
    
    return 0;
}
