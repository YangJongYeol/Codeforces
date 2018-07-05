//
//  main.cpp
//  string_function
//
//  Created by 양종열 on 2018. 6. 22..
//  Copyright © 2018년 양종열. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    string s1, s2, s3;
    s1.assign("ABCD");  // s1 = "ABCDEFG"
    s2.assign(3, 'a');  // s2 = "aaa"
    s3.assign(s1, 2, 4);// s3 = "CDEF"
    
    string s4, s5;
    s4.append("ABCEDF");// s4 = "ABCDEF"
    s4.append(3, 'x');  // s4 = "ABCEDFxxx"
    s5.append(s4, 2, 4);// s5 = "CDEF"
    s5 += "x";          // s5 = "CEDFx"
    
    s1.clear();         // 문자열의 내용을 모두 삭제
    
    s1.compare(s2);     // s1 == s2 이면 0, s1 < s2 이면 음수, s1 > s2이면 양수를 변환
    
    s1.empty();         // 문자열이 비었는지 확인
    
    string s = "ABCDEF";
    s.erase(0, 3);      // s = "DEF"
    
    string s6 = "abcd";
    string s7 = "b";
    int location = (int)s6.find(s7);
    
    string s8 = "abc_def";
    s8.replace(4, 3, "zzz");    // s="abc_zzz"
    
    string s9 = "ABCEDF";
    s9.insert(2, "xx"); // s = "ABxxCEDF"
    
    return 0;
}
