//nth root of a number m 

#include <bits/stdc++.h>
using namespace std;

long long power(long long mid, int n, long long m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= mid;
        if (ans > m) return 2;  // mid^n > m
    }
    if (ans == m) return 1;    // mid^n == m
    return 0;                  // mid^n < m
}

int find_root(int m, int n) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        long long status = power(mid, n, m);

        if (status == 1) return mid;      // exact root found
        else if (status == 2) high = mid - 1; // mid^n > m
        else low = mid + 1;               // mid^n < m
    }
    return -1;  // no integer nth root
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << find_root(m, n);
    return 0;
}