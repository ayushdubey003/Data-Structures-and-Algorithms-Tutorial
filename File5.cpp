#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long 

double px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
double p[3],c[3];
double range(double t)
{
	
	double v1[3],v2[3],v3[3],temp[3];
	temp[0]=qx+dx*t;
	temp[1]=qy+dy*t;
	temp[2]=qz+dz*t;
    for(int i = 0; i < 3; i++)
    {
    	v1[i] = (c[i]-temp[i]);
    	v2[i] = (c[i]-p[i]);
    	v3[i] = (p[i]-temp[i]);
    }
    double ans[3];
    ans[0]=(v1[1] * v2[2] - v1[2] * v2[1]);
    ans[1]=(v1[0] * v2[2] - v1[2] * v2[0]);
    ans[2]=(v1[0] * v2[1] - v1[1] * v2[0]);
    double d1=ans[0]*ans[0] + ans[1]*ans[1] + ans[2]*ans[2];
    double d2=v3[1]*v3[1] + v3[0]*v3[0] + v3[2]*v3[2];
    double dist=(d1/d2);
    if( dist==r*r )
    	return 2;
    if(dist>r*r)
    	return 1;
    else
    	return 0;

}

double getint()
{
	int l=0;
	int r=1000000000;
	while(l<r)
	{
		int mid=(l+r)/2;
		if(range(mid)==2)
			return mid;
		if(range(mid)==1 and range(mid-1)==0)
		{
			// //cerr<<mid;
			return mid;
		}
		else if(range(mid)==1)
		{
			r=mid;
		}
		else
		{
			l=mid+1;
		}
	}
}

double precise(int i)
{
	double l=i-1;
	double r=i;
	double mid;
	if(range(r)==2)
			return r;
	while(l<r)
	{
		mid=(l+r)/2;
		if(range(mid)==2)
			return mid;
		if( range(mid)==1 and range(mid-0.0000001)==0 )
		{
			return mid;
		}
		else if(range(mid)==1)
		{
			r=mid;
		}
		else
		{
			l=mid+0.0000001;
		}
	}
	return mid;

}
int main()
{
	int t;
	ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>px>>py>>pz>>qx>>qy>>qz>>dx>>dy>>dz>>cx>>cy>>cz>>r;
		c[0]=cx;
		c[1]=cy;
		c[2]=cz;
		p[0]=px;
		p[1]=py;
		p[2]=pz;
		int x=getint();
		double ans=precise(x);
		cout<<fixed<<setprecision(7)<<ans<<endl;
	}
}