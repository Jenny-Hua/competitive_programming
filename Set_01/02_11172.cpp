// 11172 - Relational Operator

#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test;
    cin >> test;
    while(test)
    {
        int a, b;
        cin >> a >> b;
        if(a < b) cout << '<' << '\n';
        else if (a > b) cout << '>' << '\n';
        else cout << '=' << '\n';
        test--;
    }
    
    return 0;
}

