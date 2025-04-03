// https://codeforces.com/contest/2091/problem/E
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nline "\n"
#define ll long long int
using namespace std;

vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

vector<int> prime_prefix;
void preprocess(int max_n) {
    vector<bool> is_prime(max_n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max_n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    prime_prefix.resize(max_n + 1, 0);
    for (int i = 1; i <= max_n; ++i) {
        prime_prefix[i] = prime_prefix[i - 1] + is_prime[i];
    }
}


int main() {
    FAST;
    int max_n = 10000000; 
    preprocess(max_n);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n / 2; ++i) {
            int limit = n / i;
            ans += prime_prefix[limit];
        }
        
        cout << ans << nline;
    }
    return 0;
}