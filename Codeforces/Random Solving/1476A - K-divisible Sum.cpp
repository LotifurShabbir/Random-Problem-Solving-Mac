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
    // Took Help -> https://tinyurl.com/4ddhvr85
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
        int n, k;
        cin >> n >> k;

        // case 1 -> n == k 
        if(n == k) cout << 1 << nline;
        
        // case 2 -> n > k
        // case 2.1
        else if(n > k) {
            if(n % k == 0) cout << 1 << nline;
            // case 2.2 
            else if(n % k != 0) cout << 2 << nline;
        }
        // case 3 -> n < k then ceil(n / k)
        else
        {
            long long int temp = k / n;
            if (k % n)
                temp++;
            cout << temp << nline;
        }
    }


    return 0;
}