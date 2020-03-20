// https://www.codechef.com/problems/LEPERMUT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,cii=0,cli=0;
	    cin>>n;
	    int a[100];
	    for (int i =0;i<n;i++){
	        cin>>a[i];
	    }
	    
	   for (int i = 0; i<n-1;i++){
	       for (int j = i+1;j<n;j++){
	           if (a[i]>a[j]){
	               cii++;
	           }
	       }
	   }
	   
	    for (int i = 0;i<n-1;i++){
	        if (a[i]>a[i+1]){
	            cli++;
	        }
	    }
	    if (cii==cli){
	        cout<<"YES"<<"\n";
	    }
	    else {
	        cout<<"NO"<<"\n";
	    }
	}
	
	return 0;
}
