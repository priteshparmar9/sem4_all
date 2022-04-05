#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        int c, n;
        cin >> c >> n;
        vector<pair<float, vector<int>>> attributes;
        vector<bool> admitted;
        bool flag = false;
        float marks;
        int c1, c2, c3, t;
        vector<int> v;
        string s;
        vector<pair<int, int>> seats(c + 1);
        vector<pair<float,float>> cuttoff(n + 1);
        seats.push_back({0, 0});
       
        for (int i = 1; i <= c; i++)
        {
            cin >> t;
            seats[i].first = t;
            seats[i].second = i;
            cuttoff[i].first = INFINITY;
            cuttoff[i].second = i;
        }

        getline(cin, s);

        for (int i = 0; i < n; i++)
        {
            v.clear();
            scanf("Student-%d,%f,C-%d,C-%d,C-%d", &t, &marks, &c1, &c2, &c3);
            getline(cin, s);
            v.push_back(c1);
            v.push_back(c2);
            v.push_back(c3);
            attributes.push_back(make_pair(marks, v));
            admitted.push_back(false);
            // cout << " ";
        }

        sort(attributes.begin(), attributes.end());

        for (int i = n-1; i >= 0; i--)
        {
            for (int j = 0; j < 3; j++)
            {
                if (seats[attributes[i].second[j]].first)
                {
                    seats[attributes[i].second[j]].first--;
                    cuttoff[attributes[i].second[j]].first = min(cuttoff[attributes[i].second[j]].first, attributes[i].first);
                    admitted[i] = true;
                    break;
                }
            }
            if (admitted[i] == false)
            {
                flag = true;
            }
        }

        if (flag)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if(!admitted[i] ){
                    // for(int i = 0; i <= c; i++ ){
                    //     cout << seats[i].first << " " << seats[i].second << endl;
                    // }
                    // cout << "For " << i << endl;
                    sort(seats.begin(), seats.end());
                    reverse(seats.begin(),seats.end());
                    int j = 0;
                    for(int i = 1;(int) i < seats.size();i++){
                        if(seats[i].first == seats[i-1].first){
                            j = i;
                        }
                        else{
                            break;
                        }
                    }
                    seats[j].first--;
                    admitted[i] = true;
                    cuttoff[seats[0].second].first = min(cuttoff[seats[j].second].first,attributes[i].first);
                }
            }
        }

        sort(cuttoff.begin(), cuttoff.end());
        reverse(cuttoff.begin(),cuttoff.end());
        // cout << cuttoff.size() << endl;
        int n1 = -1;
        for (int i = 0; i <c; i++)
        {
            if (cuttoff[i].first == INFINITY)
            {
                // cout << "C-" << (int)cuttoff[i].second << " n/a" << endl;
                n1 = i;
            }
            else
            {
                cout  << "C-" << (int)cuttoff[i].second <<  " " << cuttoff[i].first << endl;
            }
        }
        for(int i =0 ; i <= n1; i++){
            cout << "C-" << (int)cuttoff[i].second << " n/a" << endl;
        }
    }
    return 0;
}
