/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,f,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n;

    if(n%2==0)
    {
        if(n/2>18)
        {
            cout<<-1;
            return 0;
        }
        for(i=0; i<n/2; i++)
            cout<<8;
    }
    else
    {
        if(n/2+1>18)
        {
            cout<<-1;
            return 0;
        }
        for(i=0; i<n/2; i++)
            cout<<8;
        cout<<4;
    }


    return 0;
}


