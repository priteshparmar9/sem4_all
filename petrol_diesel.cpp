#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class fuel{
    private:
    int avg;
    int cost;
    int price;
    int monthly_run;
    int main_cost;
    public:
    fuel(int avg, int cost, int price, int monthly_run, int main_cost){
        this->avg = avg;
        this->cost = cost;
        this->price = price;
        this-> monthly_run = monthly_run;
        this->main_cost = main_cost;
    }

    int effective_cost(){
        return (price + (6*main_cost) + ((6*monthly_run)/avg) * cost);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int avg;
        int cost;
        int price;
        int monthly_run;
        int main_cost;
        cin >> avg >> cost >> price >> monthly_run >>main_cost;
        fuel petrol = fuel(avg,cost,price,monthly_run,main_cost);
        cin >> avg >> cost >> price >> monthly_run >>main_cost;
        fuel diesel = fuel(avg,cost,price,monthly_run,main_cost);
        if(diesel.effective_cost() > petrol.effective_cost()){
            cout << "petrol";
        }
        else{
            cout << "diesel";
        }
    }
    return 0;
}