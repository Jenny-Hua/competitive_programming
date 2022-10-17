// Problem E - Almost Union-findSet

#include <iostream>
using namespace std;

const int NMAX = 100001;        
int padre[NMAX*2]={0};         // padre representativo
int tam[NMAX*2]={0};           // nro de hijos
long long sum[NMAX*2]={0};            // suma en padre representativo

void makeSet ( int n ) {
    for ( int i = 1, j = n + 1; i <= n; ++i, ++j ) {
        padre[i] = j;  
        padre[j] = j;
        tam[j] = 1;
        sum[j] = i;
    }
}

int findSet ( int a ) {
    if ( padre[a] == a ) return a;
    return padre[a] = findSet(padre[a]);
}

void unionSets ( int a, int b ) {
    a = findSet(a);
    b = findSet(b);
    if ( a != b ) {
        tam[b] += tam[a];
        sum[b] += sum[a];
        padre[a] = b;
    }
}

void moveToSet ( int a, int b ) {
    int parentA = findSet(a);
    int parentB = findSet(b);
    if ( parentA != parentB ) {
        tam[parentB] += 1;
        tam[parentA] -= 1;
        sum[parentB] += a;
        sum[parentA] -= a;
        padre[a] = parentB;
    }
}

int main ( ) 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("in_05.txt", "r", stdin);
        freopen("out_05.txt", "w", stdout);
    #endif

    int N, M, Q, p, q;
    while ( cin >> N >> M ) {
        makeSet(N);
        for ( int i = 0; i < M; ++i ) {
            cin >> Q;
            if ( Q == 1 ) {
                cin >> p >> q;
                unionSets(p, q);
            } else if ( Q == 2 ) {
                cin >> p >> q;
                moveToSet(p, q);
            } else {
                cin >> p;
                cout << tam[findSet(p)] << ' ' << sum[findSet(p)] << '\n';
            }
        }
    }
    return 0;
}