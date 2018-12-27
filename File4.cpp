#include <bits/stdc++.h>
using namespace std;

vector< bool >isp(1000001, 1);
vector< long >prime;
vector< long >product;
void pre()
{
    for(int i=2; i<=1000000; i++)
    {
        if(isp[i])
        {
            prime.push_back(i);
            product.push_back(1LL*i*i*i);
            if(i < 1001)
            for(int j=i*i; j<=1000000; j+=i)
            {
                isp[j] = 0;
            }
        }
    }
}

int main()
{
    pre();
    long long n;
    cin>>n;
    assert(n >= 1 && n <= 1000000000000000000);
    
    int a = 1, b = 2, c = -1,d;
    n -= 9;
    for(int i=0; i<product.size(); i++)
    {
        if(binary_search(product.begin(), product.end(), n - product[i]) )
        {
            c = prime[i];
            d = prime[distance(product.begin(), lower_bound(product.begin(), product.end(), n - product[i]))];
            break;
        }
    }
    if(c != -1)
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
    }
    else cout<<-1;
}