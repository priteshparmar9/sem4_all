#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll parent[200005];
ll find(ll i){
    if(parent[i]==i)
        return i;
    else{
        ll j=find(parent[i]);
        return parent[i]=j;
    }
}

void set_union(ll x, ll y){
    ll x1=find(x),y1=find(y);
    parent[x1]=y1;
}

int main(){
    ll test_cases;
    cin >> test_cases;
    
    while(test_cases--){
        ll n,m; 
        cin>>n>>m;
        for(ll i=0;i<=n;i++)
            parent[i]=i;
        
        vector<pair<ll,ll>> v[n+1];
        
        vector<pair<ll,pair<ll,ll>>> vp;
        for(ll i=0;i<m;i++){
            ll a,b,c; cin>>a>>b>>c;
            v[a].push_back({b,c});
            v[b].push_back({a,c});
            vp.push_back({c,{b,a}});
        }
        
        priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>, greater<>> pq;
        pq.push({0,{0,0}});
        ll ans=0;
        vector<ll> dist(n+1,1e18);
        while(pq.size()){
            ll cst=pq.top().first,edge=pq.top().second.first,fr=pq.top().second.second;
            pq.pop();
            if(cst>=dist[fr])
                continue;
            dist[fr]=cst;
            ans+=edge;
            for(auto& ch: v[fr]){
                ll tot=cst+ch.second;
                if(dist[ch.first]>=tot)
                    pq.push({tot,{ch.second,ch.first}});
            }
        }
        
        sort(vp.begin(),vp.end());
        ll ans1=0;
        ll cc=n;
        for(auto& it: vp){
            ll a=it.second.first,b=it.second.second,c=it.first;
            if(find(a)!=find(b)){
                ans1+=c;
                set_union(a,b);
                cc--;
            }
        }
        if(ans1==ans && cc==1){ 
            cout<<"YES\n"; 
            
        }else{
            cout<<"NO\n";
            
        }
    }
}