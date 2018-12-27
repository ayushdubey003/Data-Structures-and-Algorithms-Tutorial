#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll i,n,q,x,ind;
   cin>>n>>q;
   ll arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
       if(i>=1)
       arr[i]+=arr[i-1];
   }
    while(q--)
    {
        cin>>x;
        
        ind=lower_bound(arr,arr+n,x)-arr;
        cout<<ind+1<<endl;
    }
}