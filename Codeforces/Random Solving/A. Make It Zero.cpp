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
        bool flag = true;
        int zero_pos = -1;
        
        int arr[n] = {0};
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp; arr[i] = temp;
            if(temp != 0) flag = false;
            if(temp == 0) zero_pos = i;
        }
        if(flag) cout << 0 << nline;
        else {
            if(n % 2 == 0) {
                cout << 2 << nline;
                cout << 1 << " " << n << nline;
                cout << 1 << " " << n << nline;
            }
            else {
                cout << 4 << nline;
                cout << 1 << " " << 2 << nline;
                cout << 1 << " " << 2 << nline;
                cout << 2 << " " << n << nline;
                cout << 2 << " " << n << nline;
                

            }
        }
        
    }


    return 0;
}