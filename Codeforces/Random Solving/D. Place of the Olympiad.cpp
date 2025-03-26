
#include<bits/stdc++.h>
#define MAX 1000006
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nline "\n"
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("Input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("Output.txt", "w", stdout);

#endif
    FAST;

    ll t;
    cin >> t;
    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;

        ll low = 1, high = m, ans = 0;

        while(low <= high) {
            ll mid = low + (high - low) / 2;
            ll formula = (m / (mid + 1)) * mid + (m % (mid + 1));
            // cout << formula << nline;
            
            if(n * formula >= k) {
                ans = mid;
                high = mid - 1;
            }
            else if(n * formula < k) low = mid + 1;
        }
        cout << ans << nline;
    }
    
    
    return 0;
}