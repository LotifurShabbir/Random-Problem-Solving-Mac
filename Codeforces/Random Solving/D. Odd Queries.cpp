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
    while(t--) {
        ll n, q, cnt = 0;
        cin >> n >> q;
        std::vector<int>odd ;
        odd.pb(0);
        
        for(int i = 1; i <= n; i++) {
            int temp;
            cin >> temp;
            
            if(temp % 2 == 1){
                cnt++;
            }
            odd.pb(cnt);
            
        }
        
        // for(auto v : odd) cout << v << ' ';
        // cout << nline;
        for(int i = 0; i < q; i++) {
            ll temp_cnt = cnt;
            ll l, r, k;
            cin >> l >> r >> k;
            ll ans = temp_cnt;
            ans -= odd[r] - odd[l - 1];
            if(k % 2 == 1) {
                ans += r - l + 1;
            }
            
            if(ans % 2 == 1) cout << "YES" << nline;
            else cout << "NO" << nline;
        }
    }


    return 0;
}