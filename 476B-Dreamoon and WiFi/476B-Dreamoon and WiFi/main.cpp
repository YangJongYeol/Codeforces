//
//  main.cpp
//  476B-Dreamoon and WiFi
//
//  Created by 양종열 on 2018. 3. 28..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    if(n == 1) return 1;
    else return n * factorial(n - 1);
}

int combination(int m, int n) {
    return factorial(m)/(factorial(n)*factorial(m-n));
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    
    string dreamoon, drazil;
    int dreamoonPos=0, drazilPos=0, questionCount=0;
    double possibleCount=0.0, totalCount=0.0;
    
    cin>>dreamoon>>drazil;
    
    for (int i=0; i<dreamoon.length(); i++) {
        if (dreamoon[i] == '+') { dreamoonPos++; }
        else if (dreamoon[i] == '-') { dreamoonPos--; }
    }
    
    for (int i=0; i<drazil.length(); i++) {
        if (drazil[i] == '+') { drazilPos++; }
        else if (drazil[i] == '-') { drazilPos--; }
        else if (drazil[i] == '?') { questionCount++; }
    }
    
    int sub = dreamoonPos - drazilPos;
    cout<<fixed;
    cout.precision(12);
    if (abs(sub) > questionCount) {
        cout<<0.000000000000;
        return 0;
    } else {
        for (int i=0; i<=questionCount; i++) {
            int plusCount = i;
            int minusCount = questionCount - i;
            
            int count;
            if (plusCount == 0 || plusCount == questionCount)count = 1;
            else count = combination(questionCount, plusCount);
            if (plusCount-minusCount == sub) {
                possibleCount += count;
            }
            
            totalCount += count;
        }
    }
    
    cout<<(double)possibleCount/(double)totalCount;
    return 0;
}
