//
//  main.cpp
//  510A-Fox And Snake
//
//  Created by 양종열 on 2018. 2. 18..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    
    bool flag = false;
    for (int i=1; i<=n; i++) {
        if (i%2==1) {
            for (int j=1; j<=m; j++) {
                cout<<"#";
            }
        } else {
            if (!flag) {
                for (int j=1; j<=m; j++) {
                    if (j==m) { cout<<"#"; }
                    else { cout<<"."; }
                }
                flag = true;
            } else {
                for (int j=1; j<=m; j++) {
                    if (j==1) { cout<<"#"; }
                    else { cout<<"."; }
                }
                flag = false;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
