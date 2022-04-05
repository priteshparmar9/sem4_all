#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        string c, s, t;
        bool flag = 0;
        getline(cin, s);
        getline(cin, c);
        for(int i = 0; i < (int)s.length(); i++){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] += ' ';
                }
            }
        map<char, int> frq_map;
        for (int i = 0; i < (int)s.length(); i++)
        {
            if (frq_map[s[i]] != 1)

            {
                frq_map[s[i]] = 1;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "New language Error";
        }
        else
        {
            map<char, int> word_frq;
            string output_def = "";
            for(int i = 0; i < (int)c.length(); i++){
                if(c[i] >= 'A' && c[i] <= 'Z'){
                    c[i] += ' ';
                }
            }
            for (int i = 0; i <= (int)c.length(); i++)
            {
                if (c[i] != 32)
                {
                    word_frq[c[i]]++;
                }
                else
                {
                    for (int i = 0; i < (int)s.size(); i++)
                    {
                        while (word_frq[s[i]]--)
                        {
                            cout << s[i];
                        }
                    }
                    cout << " ";
                    word_frq.clear();
                }
            }
            for (int i = 0; i < (int)s.size(); i++)
            {
                while (word_frq[s[i]]--)
                {
                    cout << s[i];
                }
            }
        }
    }
    return 0;
}