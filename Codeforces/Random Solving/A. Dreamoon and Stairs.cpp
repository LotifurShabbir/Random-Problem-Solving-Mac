#include <bits/stdc++.h>

#define nline "\n"
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

    int n, m;
    cin >> n >> m;

    int left = (n + 1) / 2;

    bool flag = false;
    int ans = -1;
    for(int i = left; i <= n; i++) {
        if(i % m == 0) {
            flag = true;
            ans = i;
            break;
        }
    }

    cout << ans << nline;
    return 0;
}
