#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num;
    cin >> n;

    vector<pair<int, int>> v(41, { 0, 0 });  

    v[0] = { 1, 0 }; 
    v[1] = { 0, 1 }; 

    for (int i = 2; i <= 40; i++) {
        v[i].first = v[i - 1].first + v[i - 2].first;  
        v[i].second = v[i - 1].second + v[i - 2].second;  
    }

    for(int i= 0;i<n;i++) {

        cin >> num;
        cout << v[num].first << " " << v[num].second << endl;
    }


    return 0;
}


