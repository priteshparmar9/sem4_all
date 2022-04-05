#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int comn(vector<int> v1, vector<int> v2, int n, int m)
{
    int i = 0, j = 0;
    // cout << n << " " <<  m << " ";
    while (i <= n && j <= m)
    {
        // cout << i << " " << j << endl;
        if (v1[i] == v2[j])
        {
            return v1[i];
        }
        else if (v1[i] > v2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    // cout << endl;
    return -1;
}

void print(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        ll r1, r2, s1, s2, t, d;
        long double t1, t2;
        cin >> r1 >> r2 >> s1 >> s2 >> t >> d;
        cout << fixed << setprecision(15);
        long double PI = 3.141592653589793;

        if (r1 && r2 && t)
        {
            vector<int> m1_E, m2_E, m1_F, m2_F;

            long double y = (((long double)d * d) + (r1 * r1) - (r2 * r2)) / (2 * d);
            long double theta1 = acos((long double)y / r1) * 2;
            // long double x = (((long double)d * d) + (r2 * r2) - (r1 * r1)) / (2 * d);
            long double theta2 = acos((long double)(d - y) / r2) * 2;

            bool dir_m1, dir_m2;
            if (s1 > 0)
            {
                dir_m1 = true;
            }
            else
            {
                dir_m1 = false;
            }
            if (s2 > 0)
            {
                dir_m2 = true;
            }
            else
            {
                dir_m2 = false;
            }

            if (s1 && s2)
            {
                t1 = ((long double)2 * PI * r1) / abs(s1);
                t2 = ((long double)2 * PI * r2) / abs(s2);

                // cout << t1 << " " << t2 << " " << theta1 << " " << theta2;

                long double current_time = t1;

                while (current_time <= t)
                {
                    // cout << current_time << " ";
                    m1_E.push_back(current_time);
                    current_time += t1;
                }

                current_time = t2;
                while (current_time <= t)
                {
                    m2_F.push_back(current_time);
                    current_time += t2;
                }

                if (dir_m1)
                {
                    current_time = (theta1 * r1) / abs(s1);
                }
                else
                {
                    current_time = t1 - ((theta1 * r1) / abs(s1));
                }
                while (current_time <= t)
                {
                    m1_F.push_back(current_time);
                    current_time += t1;
                }

                if (dir_m2)
                {
                    current_time = (theta2 * r2) / abs(s2);
                }
                else
                {
                    current_time = t2 - ((theta2 * r2) / abs(s2));
                }
                while (current_time <= t)
                {
                    m2_E.push_back(current_time);
                    current_time += t2;
                }
                // cout << endl;

                // cout << "m1_E ";
                // print(m1_E, m1_E.size());
                // cout << "m2_E ";
                // print(m2_E, m2_E.size());
                // cout << "m1_F ";
                // print(m1_F, m1_F.size());
                // cout << "m2_F ";
                // print(m2_F, m2_F.size());
                int ans1 = comn(m1_E, m2_E, m1_E.size(), m2_E.size());
                int ans2 = comn(m1_F, m2_F, m1_F.size(), m2_F.size());
                if (ans1 == ans2)
                {
                    if (ans1 == -1)
                    {
                        cout << "no crash";
                    }
                    else
                    {
                        cout << ans1 << " E&F";
                    }
                }
                else
                {
                    if (ans1 == -1)
                    {
                        cout << ans2 << " F";
                    }
                    else if (ans2 == -1)
                    {
                        cout << ans1 << " E";
                    }
                    else if (ans1 > ans2)
                    {
                        cout << ans1 << " E";
                    }
                    else
                    {
                        cout << ans2 << " F";
                    }
                }
            }
            else
            {
                if (s1 == s2)
                {
                    cout << "no crash";
                }
                else
                {
                    if (s1)
                    {
                        int current_time;
                        if (dir_m1)
                        {
                            current_time = (theta1 * r1) / abs(s1);
                        }
                        else
                        {
                            current_time = t1 - ((theta1 * r1) / abs(s1));
                        }
                        cout << current_time << " F";
                    }
                    else
                    {
                        int current_time;
                        if (dir_m2)
                        {
                            current_time = (theta2 * r2) / abs(s2);
                        }
                        else
                        {
                            current_time = t2 - ((theta2 * r2) / abs(s2));
                        }
                        cout << current_time << " E";
                    }
                }
            }
        }
        else
        {
            cout << "no crash";
        }
    }
    return 0;
}