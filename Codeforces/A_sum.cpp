#//  Radhey Radhey

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back

void solve()
{
    ll n;
}
int32_t main()
{
    // THISSSS...............
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        if ((a[0] + a[1]) == a[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
