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
        ll a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            ll x = a;
            ll y = a * b - a;
            ll z = a * b;
            if (x == y)
            {
                cout << x << " " << 2 * z - x << " " << 2 * z << endl;
            }
            else
            {
                cout << x << " " << y << " " << z << endl;
            }
        }
    }


    return 0;
}