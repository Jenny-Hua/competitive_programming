// Problem F- Union-Find

#include <iostream>
#include <string>
using namespace std;

const int NMAX = 100000;

int padre[NMAX] = {0};
int tamano[NMAX] = {0};


void makeSet(int v)
{
    padre[v] = v;
    tamano[v] = 1;
}

int findSet(int v)
{
    if (v == padre[v])
        return v;
    return padre[v] = findSet(padre[v]);
}

void unionSets(int a, int b)
{
    a = findSet(a);
    b = findSet(b);
    if (a != b)
    {
        if (tamano[a] < tamano[b])
            swap(a, b);
        padre[b] = a;
        tamano[a] += tamano[b];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("in_06.txt", "r", stdin);
        freopen("out_06.txt", "w", stdout);
    #endif

    int N, Q;
    cin >> N >> Q;

    for (int i = 0; i < N; i++)
    {
        makeSet(i);
    }

    while (Q--)
    {
        char q;
        int n1, n2; // question, number 1, number 2
        cin >> q >> n1 >> n2;

        switch (q)
        {
        case '?':
            if (findSet(n1) == findSet(n2))
                cout << "yes\n";
            else
                cout << "no\n";
            break;
        default:
            unionSets(n1, n2);
            break;
        }
    }
}