#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    if (m <= 0 || m > n)
    { 
        cout << 0 << '\n'; return 0;
    }

    deque<long long> a, s, sum, all;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    for (int j = 0; j < m; j++)
    {
        s.push_back(a[j]);
    }

    for (int i = m; i <= n; i++)
    {
        sum.clear();
        sum.resize(m);
        sum[0] = s[0];
        for (int j = 1; j < m; j++)
        {
            sum[j] = s[j] + sum[j - 1];
        }

        if (all.empty())
        {
            all.push_back(sum[m - 1]);
        }
        else if (all[0] > sum[m - 1])
        {
            all.clear();
            all.push_back(sum[m - 1]);
        }

        if (i < n)
        {
            s.pop_front();
            s.push_back(a[i]);
        }
    }

    cout << (all.empty() ? 0 : all[0]) << '\n';
    return 0;
}
