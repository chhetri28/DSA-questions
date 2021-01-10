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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    if (a[0] > a[1])
    {
        maxi = a[0];
        mini = a[1];
    }
    else if (a[0] > a[1])
    {
        maxi = a[1];
        mini = a[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
        }
        else if (a[i] < mini)
        {
            mini = a[i];
        }
    }
    cout << maxi << " " << mini;
}