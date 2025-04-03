// https://codeforces.com/problemset/problem/1342/A
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
        long long int x, y;
        cin >> x >> y;
        long long int a, b;
        cin >> a >> b;
        long long int diff = min(x - 0, y - 0);
        // cout << diff << nline;
        
        long long int ans1 = diff * b;
        ans1 += max(x - diff, y - diff) * a;
        
        long long int ans2 = (x * a) + (y * a);
        // long long int ans3 = (x * )
        cout << min(ans1, ans2) << nline;
        
        
        
    }



    return 0;
}