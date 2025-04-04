// https://codeforces.com/problemset/problem/500/A

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
    
    int n, t;
    cin >> n >> t;
    int arr[n + 1]; arr[0] = 0;
    for(int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    int i = 1;
    while (i < n) {
        int temp = i + arr[i];
        if(temp > t) {
            flag = false;
            break;
        }
        else if(temp == t) {
            flag = true;
            break;
        }
        i = temp;
    }
    if(flag) cout << "YES" << nline;
    else cout << "NO" << nline;



    return 0;
}