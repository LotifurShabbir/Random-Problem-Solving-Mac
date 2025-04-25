#include <bits/stdc++.h>

#define MAX 1000006
#define nline "\n"
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        bool all_zero = true;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] != 0) all_zero = false;
        }

        if (all_zero) {
            cout << 0 << nline;
            continue;
        }

        int count = 0;
        for (int i = 0; i < n;) {
            if (a[i] != 0) {
                count++;
                while (i < n && a[i] != 0) i++;
            } else {
                i++;
            }
        }

        cout << min(count, 2) << nline;
    }

    return 0;
}
