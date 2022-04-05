#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct DisjointSet
{
    vector<int> parent;
    vector<int> size;
    DisjointSet(int maxSize)
    {
        
        parent.resize(maxSize + 1);
        size.resize(maxSize + 1);
        for (int i = 0; i < maxSize + 1; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }

    void print(){
        for(int i = 0; i < parent.size(); i++){
            cout << parent[i] << " ";
        }
        cout << endl;
    }


};

int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        int n, p, t1, t2;
        cin >> n;
        DisjointSet ds = DisjointSet(n);
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        cin >> p;
        vector<pair<int, int>> vect;

        while (p--)
        {
            cin >> t1 >> t2;
            int max = t1, min = t2;
            if (t1 < t2)
            {
                max = t2;
                min = t1;
            }
            vect.push_back(make_pair(min, max));
        }
        int size = sizeof(vect) / sizeof(pair<int, int>);
        sort(vect.begin(), vect.end());
        for (int i = 0; i < (int)vect.size(); i++)
        {
            ds.union_set(vect[i].first, vect[i].second);
        }
        for (int i = 1; i <= n; i++)
        {
            int t = ds.find_set(i);
            if (t != i)
            {
                arr[t] += arr[i];
            }
        }
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if (ans < arr[i])
            {
                ans = arr[i];
            }
        }
        ds.print();
        cout << ans;
    }
    return 0;
}