#include<bits/stdc++.h>
using namespace std;

// approach 1
int count(int n) {
    int cnt = 0;
    while(n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

// approach 2
int count(int n) {
    int cnt = (int) (log10(n) + 1);
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << count(n);
    return 0;
}

