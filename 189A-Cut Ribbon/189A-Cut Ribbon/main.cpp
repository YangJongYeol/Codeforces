//
//  main.cpp
//  189A-Cut Ribbon
//
//  Created by 양종열 on 2018. 4. 27..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int first,second,third;

void init(int a, int b, int c) {
    first = max(a, b);
    first = max(first, c);
    
    if (first == a) {
        second = max(b, c);
        if (second == b) {
            third = c;
        } else {
            third = b;
        }
    } else if (first == b) {
        second = max(a,c);
        if (second == a) {
            third = c;
        } else {
            third = a;
        }
    } else {
        second = max(a,b);
        if (second == a) {
            third = b;
        } else {
            third = a;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    init(a, b, c);
    
    int solution = 0;
    for (int i=0; i*first<=n; i++) {
        for (int j=0; j*second+i*first<=n; j++) {
            int k = (n - (j*second+i*first))/third;
            if(i*first + j*second + k*third == n) {
                solution = max(solution, i+j+k);
            }
        }
    }

    cout<<solution;
    return 0;
}
