/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,d,j,t,f,r,l,t1,t2,c,sum,cnt,x,y,a[sz],rem,mod,mx,mn;
string s,s2;
map<ll,ll>_mp;
set<ll>::iterator it,it1,it2;
vector<pair<ll,ll> >v;
list<ll>v1;
vector<ll>vv[51];
set<ll>st;
int main()
{

  cin>>n>>d;
  for(i=0;i<n;i++)
  {
      cin>>t;
      a[t]=1;
      st.insert(t);
      a[t+d]=0;
      st.insert(t+d);
      a[t-d]=0;
      st.insert(t-d);

  }
  for(it=st.begin();it!=st.end();it++)
  {
      t1=*it;
      it1=it;
      it++;
      t2=*it;
      it2=it;
      //cout<<t1<<' '<<t2<<endl;
      if(t2-t1<d)
      {
          if(a[t1]==0)
            st.erase(it1);
          else
            st.erase(it2);
         it--;
         cout<<st.size()<<' ';
      }

  }

    _mp.clear();
    v1.clear();
    v.clear();
    st.clear();
    memset(a,0,sizeof a);
    sum=0,cnt=0;

    main();


}
