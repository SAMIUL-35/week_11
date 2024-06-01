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
  
ll q;
cin>>q;



map<ll,ll>d;
while (q--)
{
    ll l,r;
    cin>>l>>r;
   
    d[l]++;
    d[r+1]--;

}

ll sum=0;
bool ok=true;
for (auto x:d)
{
    sum+=x.second;
    if(sum>2)
    {
        ok=false;
        break;
    }
}
if(ok)
{
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
    return 0;
}