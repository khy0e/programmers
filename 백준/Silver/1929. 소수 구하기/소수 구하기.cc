#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    int n1, n2;
    bool flag;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++) {
        if (i < 2) continue; 
        flag = true;
        for (int j = 2; j <= sqrt(i); j++) { 
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << i << "\n";
        }
    }
    return 0;
}
