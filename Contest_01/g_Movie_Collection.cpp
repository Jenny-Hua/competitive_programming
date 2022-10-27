// Problem G - Movie collection

#include <iostream>
using namespace std;

const int MAX = 100000;

int movies, requests;
int A [MAX + 1] = {0};
long BITree [MAX + 1] = {0};

// Actualizar el BIT tree (indice 0 es dummy)
void updateBT(int ind, int val)
{
    for(; ind <= movies; ind += ind & -ind)
    {
        cout << ind  << "\t";
        BITree[ind] += val;
        cout << BITree[ind] << "\n";
    }
}

int query(int ind)
{   
    int sum = 0;
    for (; ind > 0; ind -= ind & -ind)
        sum += BITree[ind];
    return sum;
}

// inicializa stack de movies.
// el index es el ID de cada película
// el indice 0 no se considera
void initA(int movies)
{
    for(int i = 1; i<= movies; i++)
    {
        A[i] = i;
        updateBT(i, A[i]);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("in_07.txt", "r", stdin);
        freopen("out_07.txt", "w", stdout);
    #endif
    int cases;
    cin >> cases;
    while ( cases --)
    {
        cin >> movies >> requests;
        initA(movies);
        
        int quitado;
        for (int i = 0; i < requests; i++)
        {
            cin >> quitado;
            cout << "quitado: " << quitado << " ";
        }
        cout << "\n";
    }

    

    
}