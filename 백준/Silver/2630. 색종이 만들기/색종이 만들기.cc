#include <iostream>
using namespace std;

bool color;
bool m[129][129];
int blue;
int white;
int n;

void paper(int x, int y, int size)
{
    bool check = true;
    if (m[y][x] == 1)
        color = 1;
    else
        color = 0;

    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (m[i][j] != color)
            {
                check = false;
                break;
            }
        }
        if (!check)
            break;
    }

    if (check)
    {
        if (color)
            blue++;
        else
            white++;
    }

    else
    {
        int nsize = size / 2;
        paper(x, y, nsize);
        paper(x, y + nsize, nsize);
        paper(x + nsize, y, nsize);
        paper(x + nsize, y + nsize, nsize);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> m[i][j];
    }
    paper(1, 1, n);
    cout << white << '\n';
    cout << blue << '\n';
    return 0;
}
