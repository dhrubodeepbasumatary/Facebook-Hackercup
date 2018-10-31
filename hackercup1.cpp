#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{  
  freopen("tourist.txt", "rt", stdin);
  freopen("tourist.out", "wt", stdout);
  long long int i,j,k,t,n,v,mod,steps;
  cin>>t;
  for(j=1;j<=t;j++)
  {
  	cin>>n>>k>>v;string s;
    vector<string>v1(n);
    for(i=0;i<n;i++)
    {
      cin>>s;
      v1[i]=s;
    }
    steps=k*v;
    mod=steps%n;
    if(mod==0)
    {
      for(i=n-k;i<n;i++)
      {
   
       if(i==n-k)
       {
        cout <<"Case #"<<j<<": "<<v1[i]<<" ";
       }
       else
       {
       	cout<<v1[i]<<" ";
       }
      }
      cout<<endl;
    }
    else if(mod==k)
    {
       for(i=0;i<mod;i++)
      {
   
       if(i==0)
       {
        cout << "Case #"<<j<<": "<<v1[i]<<" ";
       }
       else
       {
       	cout<<v1[i]<<" ";
       }
      }
      cout<<endl;

    }
    else if(mod>k)
    {
      for(i=mod-k;i<mod;i++)
      {
   
       if(i==mod-k)
       {
        cout<<"Case #"<<j<<": "<<v1[i]<<" ";
       }
       else
       {
       	cout<<v1[i]<<" ";
       }
      }
      cout<<endl;
    }
    else if(k>mod)
    {
      for(i=0;i<mod;i++)
      {
   
       if(i==0)
       {
        cout << "Case #"<<j<<": "<<v1[i]<<" ";
       }
       else
       {
       	cout<<v1[i]<<" ";
       }
      }
    
    int rem=k-mod;int start=n-rem;
    for(i=start;i<start+rem;i++)
    {
    	cout<<v1[i]<<" ";
    }
    cout<<endl;
   }
   v1.clear();
 }

  return 0;
}