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
        string s;
        cin >> s;
        int ans = 0, cnt = 1;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == s[i + 1]) {
                cnt++;
            }
            else {
                ans = max(ans, cnt);
                cnt = 1;
                
            }
        }
        
        cout << ans + 1<< nline;
    }
    


    return 0;
}