#include <iostream>
using namespace std;

int solution(int n) {
    int jump = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            n -= 1;  
            jump++;  
        }
        else {
            n /= 2;
        }
    }
    return jump;
}