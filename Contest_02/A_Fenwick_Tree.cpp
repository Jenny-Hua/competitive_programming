// Problem A
// Fenwick Tree
// https://open.kattis.com/contests/fjb3ni/problems/fenwick

#include <iostream>
#include <vector>
using namespace std;

struct FenwickTree {
    vector<long> bit;  // binary indexed tree
    long n;

    FenwickTree(long n) {
        this->n = n+1;
        bit.assign(n+1, 0);
    }

    void printBit()
    {
        for(auto it:bit)
            cout << it << " ";
        cout <<"\n";
    }

    long sum(long r) {
        long ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    long sum(long l, long r) {
        return sum(r) - sum(l - 1);
    }

    void add(long ind, long delta) {
        for (; ind < n; ind = ind | (ind + 1))
            bit[ind] += delta;
    }

    long pointQuery(long ind) {
        long ret = 0;
        for (++ind; ind > 0; ind -= ind & -ind)
            ret += bit[ind];
        return ret;
    }
};



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("in_01.txt", "r", stdin);
        freopen("out_01.txt", "w", stdout);
    #endif

    long N, Q;
    cin >> N >> Q;

    FenwickTree BiTree(N);       // Vector de ceros
    
    while (Q--)
    {
        char op;
        long i, delta;
        cin >> op; 
        if(op =='+')
        {
            cin >> i >> delta;
            BiTree.add(i, delta);
            BiTree.printBit();
        }
        else if (op =='?')
        {
            cin >> i;
            long res = BiTree.sum(1, i);
            cout << res << "\n";
        }
    }
    

    return 0;
}