// Problem G - Movie collection

#include <iostream>
#include <vector>
using namespace std;

//Fenwick Tree
struct FenwickTreeMin {
    vector<int> bit;
    int n;
    const int INF = (int)1e9;

    FenwickTreeMin(int n) {
        this->n = n;
        bit.assign(n, INF);
    }

    FenwickTreeMin(vector<int> a) : FenwickTreeMin(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            update(i, a[i]);
    }

    int getmin(int r) {
        int ret = INF;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret = min(ret, bit[r]);
        return ret;
    }

    void update(int idx, int val) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] = min(bit[idx], val);
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int cases, m, r;
    cin >> cases;
    while (cases--)
    {
        cin >> m >> r;
        int quitado;
        for (int i = 0; i<r; i++)
        {
            cin >> quitado;
            // Calcular cuantos tenia antes
            // colocarlo arriba de todos
            cout << r << " - Arriba: "<<" ";
        }
    }

    #ifndef ONLINE_JUDGE
        freopen("in_07.txt", "r", stdin);
        freopen("out_07.txt", "w", stdout);
    #endif

    
}