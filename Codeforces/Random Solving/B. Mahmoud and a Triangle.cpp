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

    ll n;
    cin >> n;
    std::vector < ll > v;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.pb(temp);
    }

    sort(v.begin(), v.end());
    // 1 5 3 2 4
    
    bool flag = false;
    for (int i = 0; i < n - 2; i++) {
        ll a = v[i], b = v[i + 1], c = v[i + 2];
        if (a + b > c) {
            flag = true;
            break;
        }
    }


    if (!flag) cout << "NO" << nline;
    else cout << "YES" << nline;



    return 0;
}