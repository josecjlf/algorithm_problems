#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int j;
        cin >> j;

        if (j == 0)
        {
            cout << 0 << endl;
            continue;
        }

        vector<long long> vec(j);

        for (int i = 0; i < j; i++) cin >> vec[i];

        long long best, current;

        best = vec[0];
        current = vec[0];

        for (int i = 1; i < j; i++)
        {
            if ((abs(vec[i]) % 2) != (abs(vec[i - 1]) % 2))
            {
                current = max(current + vec[i], vec[i]);
            }

            else
            {
                current = vec[i];
            }
            best = max(best, current);
        }

        cout << best << endl;
    }

    return 0;
}