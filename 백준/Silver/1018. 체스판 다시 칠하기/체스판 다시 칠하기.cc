#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char cb[50][50];
    char c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            cb[i][j] = c;
        }
    int nend = n - 8;
    int mend = m - 8;
	int min = 64;
	for (int i = 0; i <= nend; i++) {
		for (int j = 0; j <= mend; j++) {
			int cnt1 = 0, cnt2 = 0;
			int nstart = i;
			int mstart = j;
			for (int k = nstart; k < nstart + 8; k++) {
				for (int l = mstart; l < mstart + 8; l++) {
					if ((k + l - nstart - mstart) % 2 == 0 && cb[k][l] != 'B') 
						cnt1++;
					else if ((k + l - nstart - mstart) % 2 == 1 && cb[k][l] == 'B') 
						cnt1++;
					else if ((k + l - nstart - mstart) % 2 == 0 && cb[k][l] != 'W') 
						cnt2++;
					else if ((k + l - nstart - mstart) % 2 == 1 && cb[k][l] == 'W') 
						cnt2++;
				}
			}
			if (cnt1 < min) 
				min = cnt1;
			if (cnt2 < min)
				min = cnt2;
		}
	}
	cout << min;
 }