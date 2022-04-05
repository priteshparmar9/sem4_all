#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        ll n, even_at_odd = 0, odd_at_even = 0, even_at_even = 0, odd_at_odd = 0;
        bool non_zero = false;
        vector<int> odd;
        vector<int> even;
        vector<int> all;
        vector<int> ans;
        int temp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp % 2)
            {
                if (i % 2)
                {
                    odd_at_odd++;
                }
                else
                {
                    odd_at_even++;
                }
                odd.push_back(i);
            }
            else
            {
                if (i % 2)
                {
                    even_at_odd++;
                }
                else
                {
                    even_at_even++;
                }
                even.push_back(i);
            }
            if (temp)
            {
                non_zero = true;
            }
            all.push_back(temp);
        }

        
        if (!non_zero)
        {
            if (n == 1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if(!odd.size()){
            cout << -1 << endl;
        }
        else if (even_at_odd + odd_at_even > even_at_even + odd_at_odd)
        {
            // cout << "Inside 10101 pattern\n";
            // 10101 pattern
            for (int i = 0; i < n; i++)
            {
                if (i % 2)
                { // Odd index
                    if (all[i] % 2)
                    { // Odd number
                        ans.push_back(i + 1);
                        int j = 0;
                        bool added = false;
                        while (!added&& j < odd.size())
                        {
                            if (odd[j] != i && odd[j] != -1 )
                            {
                                if(all[odd[j]] % 2){ans.push_back(odd[j] + 1);
                                all[i] = all[i] ^ all[odd[j]];
                                added = true;}
                                j++;
                            }
                            j++;
                        }
                        if(!added){
                            cout << -1 << endl;
                            non_zero = false;
                        }
                        j = 0;
                    }
                }
                else
                { // even index
                    if (all[i] % 2 == 0)
                    { // even number
                        ans.push_back(i + 1);
                        int j = 0;
                        bool added = false;
                        while (j < odd.size())
                        {
                            if (odd[j] != -1)
                            {
                                if(all[odd[j]] % 2){all[i] = all[i] ^ all[odd[j]];
                                ans.push_back(odd[j] + 1);
                                odd.push_back(i);
                                added = true;
                                break;}
                                j++;
                            }
                        }
                        if(!added){
                            cout << -1 << endl;
                            non_zero = false;
                        }
                    }
                }
            }
        }
        else
        {
            // 010101 pattern
            // cout << "Inside 01010 pattern : \n";
            for (int i = 0; i < n; i++)
            {
                // cout << i << " ";
                if (i % 2)
                { // odd index
                    if (all[i] % 2 == 0)
                    { // even number
                // cout << "Solved for i : " << i << endl;
                        ans.push_back(i + 1);
                        bool added = false;
                        int j = 0;
                        // cout << odd.size() << endl; 
                        while(j <int( odd.size())){
                            // cout << ":((";
                            if(odd[j] != -1){
                                if(all[odd[j]] % 2){ans.push_back(odd[j] + 1);
                                all[i] = all[i] ^ all[odd[j]];
                                odd.push_back(i);
                                added = true;
                                break;
                                }
                                j++;
                            }
                            else{
                                j++;
                            }
                        }
                        if(!added){
                            cout << -1 << endl;
                            non_zero = false;
                        }
                    }
                }
                else
                { // even index
                    if (all[i] % 2)
                    { // odd number
                        ans.push_back(i + 1);
                        int j = 0;
                        bool added = false;
                        while(j < odd.size()){
                            if(odd[j] != -1 && odd[j] != i){
                                if(all[odd[j]] % 2){all[i] = all[i] ^ odd[j];
                                ans.push_back(odd[j] + 1);
                                added = true;
                                    break;
                                }
                                j++;
                            }
                            else{
                                j++;
                            }
                        }
                        if(!added){
                            cout << -1 << endl;
                            non_zero = false;
                        }
                    }
                }
            }
        }
        if (non_zero && odd.size() > 0)
        {
            cout << ans.size() / 2 << endl;
            for (int i = 0; i < ans.size(); i+=2)
            {
                cout << ans[i] << " " << ans[i+1] << endl;
            }
        }
    }
    return 0;
}