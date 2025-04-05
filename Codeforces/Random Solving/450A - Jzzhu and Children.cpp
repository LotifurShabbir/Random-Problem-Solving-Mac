#include<bits/stdc++.h>

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

    int n, m;
    cin >> n >> m;

    deque < pair < int, int >> d;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        d.push_back({
            i + 1,
            temp
        });
    }

    int lastChild = -1;

    while (!d.empty()) {
        auto front = d.front(); // eita pair store korse 
        d.pop_front();

        front.second -= m;

        if (front.second > 0) {
            d.push_back(front);
        } else {
            lastChild = front.first;
        }
    }

    cout << lastChild << nline;

    return 0;
}