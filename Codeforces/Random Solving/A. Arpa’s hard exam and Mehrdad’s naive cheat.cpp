// https://codeforces.com/problemset/problem/742/A

// less optimized solution
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
    
    int n;
    cin >> n;
    
    if(n == 0) {
        cout << 1 << nline;
        return 0;
    }
    
    while(n > 0) {
        if(n == 1) {
            cout << 8 << nline;
            break;
        }
        else if(n == 2) {
            cout << 4 << nline;
            break;
        }
        else if(n == 3) {
            cout << 2 << nline;
            break;
        }
        else if(n == 4) {
            cout << 6 << nline;
            break;
        }
        n -= 4;
    }


    return 0;
}

