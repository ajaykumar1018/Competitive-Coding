#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main ()
{
  char str1[100];
  cin>>str1;
  int i,j,k,p,q,k1=0;
  i=strlen(str1);
  float m=sqrt(i);
  j=floor(m);
  k=ceil(m);
  if((j*k)<i)
  j+=1;
  char s[j][k];
  for(p=0;p<j;p++)
  {
      for(q=0;q<k;q++)
      {
          s[p][q]=char(str1[k1]);
          if(k1<i)
          k1++;
          else
          break;
    }
  }
  for(q=0;q<k;q++)
  {
      for(p=0;p<j;p++)
      {
          if(isalpha(s[p][q]) || isdigit(s[p][q]))
          cout<<s[p][q];
      }
      cout<<" ";
  }
}

