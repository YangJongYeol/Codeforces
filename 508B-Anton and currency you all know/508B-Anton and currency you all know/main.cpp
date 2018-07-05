//
//  main.cpp
//  508B-Anton and currency you all know
//
//  Created by 양종열 on 2018. 5. 23..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int num;
vector<int> vc;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    cin>>num;
    
    int copy = num;
    while (copy != 0) {
        vc.push_back(copy%10);
        copy /= 10;
    }
    
    int index = -1;
    int value = 10;
    for (int i=0; i<vc.size(); i++) {
        if (vc[i]%2 == 0) {
            if(value >= vc[i]) {
                value = vc[i];
                index = i;
            }
        }
    }
    
    int tmp = vc[index];
    vc[index] = vc[0];
    vc[0] = tmp;
    
    if (index == -1) {
        cout<<index;
    } else {
        for (int i=(int)vc.size()-1; i>=0; i--) {
            cout<<vc[i];
        }
    }
    return 0;
}
