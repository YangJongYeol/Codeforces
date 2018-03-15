//
//  main.cpp
//  466A-Cheap Travel
//
//  Created by 양종열 on 2018. 3. 15..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    
    if (m*a > b) {
        int method1 = (n/m)*b+(n%m)*a;
        int method2 = (n/m+1)*b;
        
        cout<<(method1 > method2 ? method2 : method1);
    } else {
        int method = n*a;
        
        cout<< method;
    }
    
    
    return 0;
}
