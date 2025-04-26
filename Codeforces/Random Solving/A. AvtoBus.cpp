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
        ll n;
        cin >> n;
        if (n < 4 || n % 2 != 0) {
            cout << -1 << nline;
        }
        else {
            ll maxi = n / 4;
            ll mini = ceil((double)n / 6);
            cout << mini << ' ' << maxi << nline;
        }
    }


    return 0;
}