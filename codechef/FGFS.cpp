#include <bits/stdc++.h>
using namespace std;

bool camp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    return (p1.second < p2.second);
}

int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int n, k, s, f, p;
        cin >> n >> k;
        map<int, vector<pair<int, int>>> timings;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> f >> p;
            timings[p].push_back(make_pair(s, f));
        }
        int temp = 0;
        for (auto i : timings)
        {
            sort(i.second.begin(), i.second.end(), camp);
            int k = 0;
            temp++;
            for (int j = 1; j < i.second.size(); j++)
            {
                if (i.second[j].first >= i.second[k].second)
                {
                    temp++;
                    k = j;
                }
            }
        }
        cout << temp << endl;
    }
    return 0;
}