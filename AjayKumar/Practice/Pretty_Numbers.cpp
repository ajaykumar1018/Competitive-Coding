//https://www.codechef.com/problems/NUM239#

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long int l, r, rem, co =0;
	    cin >> l >>r;
	    for (int i = l; i<=r;i++){
	        rem = i %10;
	        if (rem == 2 || rem == 3 || rem == 9){
	            co++;
	        }
	    }
	    cout<<co<<"\n";
	}
	return 0;
}
