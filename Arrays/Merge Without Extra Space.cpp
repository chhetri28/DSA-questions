#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    OJ;
    FIO;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[0])
        {
            swap(a[i], b[0]);
            sort(b, b + m);
            // int firstele = b[0];
            // int k;
            // for (k = 1; k < m and b[k]<firstele;k++){
            //     b[k - 1] = b[k];
            // }
            // b[k - 1] = firstele;
        }
    }
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto y : b)
    {
        cout << y << " ";
    }
}