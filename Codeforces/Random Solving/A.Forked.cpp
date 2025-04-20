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
    while (t--) {
        ll a, b, kx, ky, qx, qy;
        cin >> a >> b;
        cin >> kx >> ky;
        cin >> qx >> qy;

        set < pair < int, int >> king = {
            {
                kx + a, ky + b
            },
            {
                kx - a,
                ky - b
            },
            {
                kx - b,
                ky - a
            },
            {
                kx + b,
                ky + a
            },
            {
                kx + a,
                ky - b
            },
            {
                kx - b,
                ky + a
            },
            {
                kx - a,
                ky + b
            },
            {
                kx + b,
                ky - a
            }
        };
        set < pair < int, int >> queen = {
            {
                qx + a, qy + b
            },
            {
                qx - a,
                qy - b
            },
            {
                qx - b,
                qy - a
            },
            {
                qx + b,
                qy + a
            },
            {
                qx + a,
                qy - b
            },
            {
                qx - b,
                qy + a
            },
            {
                qx - a,
                qy + b
            },
            {
                qx + b,
                qy - a
            }
        };
        
        ll ans = 0;
        
        // set<pair<int, int>>s(queen.begin(), queen.end());
        
        for(auto x : king) {
            if(queen.count(x)) ans++;
        }
        
        cout << ans << nline;

    }


    return 0;
}