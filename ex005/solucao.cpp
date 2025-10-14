#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q_days;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());
    cin >> q_days;
    vector<int> days(q_days);

    for (int i = 0; i < q_days; i++)
    {
        cin >> days[i];
    }

    for (int i = 0; i < q_days; i++)
    {
        int temp = days[i];
        auto lb = upper_bound(prices.begin(), prices.end(), temp);
        int result = lb - prices.begin();
        cout << result << endl;
    }
}
