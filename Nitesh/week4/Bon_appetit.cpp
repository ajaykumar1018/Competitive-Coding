#include <iostream>
using namespace std;
int main()
{
    
    int n,k,s=0,m;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=k)
        s+=a[i];
    }
    s=s/2;
    cin>>m;
    if(m==s)
    cout<<"Bon Appetit";
    else
    cout<<m-s;
}

