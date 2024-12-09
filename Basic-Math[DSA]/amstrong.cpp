#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dup = n;
    int digits = log10(n) + 1;
    int sum = 0;
    while (n > 0) {
        int ld = n%10;
        sum = sum + pow(ld, digits);
        n /= 10;
    }
    if (sum == dup) cout << "true";
    else cout << "false";
}