/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define  pi    acos(-1.0)
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define MAX 10000
#define MIN -1
#define INF 10000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define sfi(n) scanf("%lld",&n)
#define sfii(n,m) scanf("%lld%lld",&n,&m)
#define pfi(n) printf("%lld",n)
#define pfii(n,m) scanf("%lld%lld",n,m)
#define pfn   printf("\n")
#define pfs  printf(" ")


using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j=1,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn, a[MAX],vagfol;
string str,str2;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    cin>>n;
    vagfol=n/3;
    rem=n%3;
    if(rem>0)
    {
      cout<<vagfol*2+1<<endl;
    }
    else
    cout<<vagfol*2<<endl;


    return 0;

}
