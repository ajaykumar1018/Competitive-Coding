#include <iostream>
using namespace std;
int main()
{
    int n,m,i,k,c,c1,c2=0;
    cin>>n>>m;
    int a[n],b[m];
    for( i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    int p=a[n-1],q=b[0];
    for(int j=p;j<=q;j++)
    {
        c=1;
        for(i=0;i<n;i++)
        {
            if(j%a[i]!=0)
            c=0;
        }
        if(c==1)
        {
            c1=1;
            for(k=0;k<m;k++)
            {
                if(b[k]%j!=0)
                c1=0;
            }
            if(c1==1)
            c2+=1;
        }
    }
    cout<<c2;
    return 0;
}
