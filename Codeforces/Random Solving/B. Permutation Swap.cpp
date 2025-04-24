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
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; ++i){
            cin >> p[i];
        }
        int g = 0;
        for (int i = 0; i < n; ++i) {
            if (p[i] != i + 1) {
                g = gcd(g, abs(p[i] - (i + 1)));
            }
        }


        cout << g << nline;
    }


    return 0;
}