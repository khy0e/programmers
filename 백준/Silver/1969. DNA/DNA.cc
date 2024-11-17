#include <iostream>
#include <map>

using namespace std;

int main() {
    int n1, n2;
    int totalSum = 0;  
    map<pair<int, char>, int> m; 
    cin >> n1 >> n2;
    char c;


    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> c; 
            m[{j, c}]++;  
        }
    }

    for (int i = 0; i < n2; i++) {
        char maxChar = 'A';  
        int maxCount = 0;
        int sum = 0;  

       
        for (char ch : {'A', 'T', 'C', 'G'}) {
            int count = m[{i, ch}];
            if (count > maxCount || (count == maxCount && ch < maxChar)) {
                maxCount = count;
                maxChar = ch;
            }
        }

        for (char ch : {'A', 'T', 'C', 'G'}) {
            if (ch != maxChar) {
                sum += m[{i, ch}]; 
            }
        }

        totalSum += sum;  
        cout << maxChar; 
    }

    cout << endl << totalSum << endl;  
    return 0;
}
