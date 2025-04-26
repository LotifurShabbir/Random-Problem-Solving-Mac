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
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        std::vector<ll>arr(n) ;
        for(auto &x : arr) cin >> x;
        
        ll ans = 0;
        bool flag = false;
        for(int i = n - 1; i >= 1; i--) {
            if(arr[i - 1] >= arr[i]) {
                while(arr[i - 1] >= arr[i]) {
                    if(arr[i - 1] == 0) {
                        flag = true;
                        break;
                    }
                    arr[i - 1] /= 2;
                    ans++;
                }
            }
            else continue;
        }
        if(flag) cout << -1 << nline;
        else cout << ans << nline;
    }

    return 0;
}