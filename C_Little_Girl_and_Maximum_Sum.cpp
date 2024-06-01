#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


int main ()

{
op();
  
ll n,q;
cin>>n>>q;
vector<ll>v(n);
for (ll i = 0; i < n; i++)
{
    cin>>v[i];
    // cout<<v[i]<<" ";
}
cout<<endl;
vector<ll>d(n+1);
while (q--)
{
    ll l,r;
    cin>>l>>r;
    l--,r--;
    d[l]++;
    d[r+1]--;

}

for (ll i = 1; i <= n; i++)
{
    d[i]=d[i-1]+d[i];
}

sort(v.rbegin(),v.rend());
sort(d.rbegin(),d.rend());
ll sum=0;
for (ll i = 0; i < n; i++)
{
    sum+=d[i]*v[i];
}
cout<<sum<<endl;
    return 0;
}