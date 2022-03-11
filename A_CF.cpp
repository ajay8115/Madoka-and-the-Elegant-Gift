// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

void aj()
{
    int n, m;
    cin >> n >> m;

    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    if (n == 1 or m == 1)
    {
        cout << "YES" << kk;
        return;
    }

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < n - 1 and j < m - 1 and a[i][j] == '0' and a[i + 1][j] == '1' and a[i][j + 1] == '1' and a[i + 1][j + 1] == '1')
            {
                f = 1;
            }
            else if (i < n - 1 and j < m - 1 and a[i][j] == '1' and a[i][j + 1] == '0' and a[i + 1][j] == '1' and a[i + 1][j + 1] == '1')
            {
                f = 1;
            }
            else if (i < n - 1 and j < m - 1 and a[i][j] == '1' and a[i][j + 1] == '1' and a[i + 1][j] == '0' and a[i + 1][j + 1] == '1')
            {
                f = 1;
            }
            else if (i < n - 1 and j < m - 1 and a[i][j] == '1' and a[i][j + 1] == '1' and a[i + 1][j] == '1' and a[i + 1][j + 1] == '0')
            {
                f = 1;
            }
        }
    }

    if (f == 1)
    {
        cout << "NO" << kk;
    }
    else
    {
        cout << "YES" << kk;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        aj();
    }
    return 0;
}
