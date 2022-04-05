#include<iostream>
using namespace std;
int main()
{
	int n, test_cases;
	cin >> test_cases;
	while(test_cases--){
		cin >> n;
		cout << n << " ";
		for(int i = 1; i < n; i++){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}