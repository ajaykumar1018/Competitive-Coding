#include <iostream>
using namespace std;
int height(int n) {

    int h = 1;
    for(int i = 1; i <= n; i++){
        if(i%2 != 0)
          h*=2;
        if(i%2==0)
          h++;
    }
    return h;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
    return 0;
}
