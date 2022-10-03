// 10071 - Back to High School Physics

#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int v, t;
    while(cin >> v >> t)
    {
        cout << 2*v*t << '\n';
    }
    
    return 0;
}

