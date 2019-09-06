#include <bits/stdc++.h>

using namespace std;

int reverse(int n)
{
    int r = 0;
    while (n > 0)
    {
        r = 10 * r + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int i, j, k;
    cin >> i >> j >> k;
    int cnt = 0;
    for (int l = i; l <= j; l++)
        if (abs(l - reverse(l)) % k == 0)
            cnt ++;
    cout << cnt << endl;
}
