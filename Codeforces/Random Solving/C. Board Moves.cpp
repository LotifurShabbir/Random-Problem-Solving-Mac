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
    
    // pattern
    /*
    Total moves hobe -> 
     1×8   =  8
     2×16  = 32
     3×24  = 72
     4×32  = 128
    -------------
             240

    */
    
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        ll boundry = n / 2;
        for(ll i = 1; i <= boundry; i++) {
            ans += i * (i * 8);
        }
        
        cout << ans << nline;
    }



    return 0;
}