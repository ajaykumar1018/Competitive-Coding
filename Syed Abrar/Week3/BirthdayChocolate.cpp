#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,n,d,m,s[110],sum=0,count=0,j;
cin>>n;
for(i=0;i<n;i++)
{
cin>>s[i] ;
}
cin>>d>>m ;
for(i=0;i<n;i++)
{
sum=s[i];
for(j=i+1;j<m;j++)
{
sum=sum+s[j];
}
if(sum==d)
{
count++ ;
}
m++;
}
cout<<count;
}
