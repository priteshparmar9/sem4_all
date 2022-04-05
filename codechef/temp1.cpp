#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long int a[n],ans = 0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=1;i<=n;i++){
	        ans = min((a[n/2]-a[0]),(a[n-1] - a[n/2 - 1]));
	        ans = min(ans,(a[n/2] - a[n/2 - 1]));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
