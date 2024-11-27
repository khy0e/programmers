#include <iostream>
using namespace std;

int main()
{
    int num;
    int ans = 0;
    cin >> num;

    while (num >= 0)
    {
        if (num % 5 == 0)
        {
            ans += num / 5;
            cout << ans << endl;
            break; 
        }
        num -= 3;
        ans++;
    }

    if (num < 0)
    {
        cout << -1 << endl;
    }
    return 0;
}
