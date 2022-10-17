#include <iostream>
using namespace std;

const  int TAMMAX = 1024000;

// segment tree
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}
int main ()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int T;
    cin>>T;
    while (T--)
    {
        /* code */
    }
    
    return 0;
}

























// 
// https://github.com/morris821028/UVa/blob/master/volume114/11402%20-%20Ahoy%2C%20Pirates.cpp