#include<bits/stdc++.h>
using namespace std;
const int N=100004;
int a[N];
int main()
{
    int n,q;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    scanf("%d",&q);
    while(q--)
    {   int num;
        scanf("%d",&num);
        int ans=-1;
        int l=1;
        int r=n;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]<num){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        if(ans==-1) printf("0\n");
        else printf("%d\n",ans);
    }
    return 0;
}