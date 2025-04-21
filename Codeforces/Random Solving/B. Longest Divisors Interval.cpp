#include<bits/stdc++.h>

#define MAX 1000006
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 1;
        ll cnt = 0;
        
        for(ll i = 1; i <= 50; i++) {
            if(n % i == 0) {
                cnt++;
            }
            else {
                ans = max(ans, cnt);
                cnt = 0;
            }
            
        }
        
        
        cout << ans << nline;
    }

    return 0;
}