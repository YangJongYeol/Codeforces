//
//  main.cpp
//  200B-Drinks
//
//  Created by 양종열 on 2018. 3. 15..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    double n;
    cin>>n;
    
    double tmp, sum = 0;
    for (int i=0; i<n; i++) {
        cin>>tmp;
        sum += tmp;
    }
    
    cout.precision(12);
    cout<<fixed<<sum/n;
    
    return 0;
}
