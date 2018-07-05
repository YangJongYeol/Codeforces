//
//  main.cpp
//  514B-Han Solo and Lazer Gun
//
//  Created by 양종열 on 2018. 5. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
double n,a,b,x,y;
set<double> s;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>n>>a>>b;
    
    for (int i=0; i<n; i++) {
        cin>>x>>y;
        
        if ((a-x) != 0) {
            s.insert((b-y)/(a-x));
        } else s.insert(1000);
    }
    
    cout<<s.size();
    return 0;
}
