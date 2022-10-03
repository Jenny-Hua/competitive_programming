// Problem E - Almost Union-Find

#include <iostream>
using namespace std;

#define maxSize 100000

int padre[maxSize]={0};
int rango[maxSize]={0};

// Disjoin union set
int find_set(int v) {
    if (v == padre[v])
        return v;
    return padre[v] = find_set(padre[v]);
}

void make_set(int v) {
    padre[v] = v;
    rango[v] = 0;
}
void move_set(int a, int b) {
    padre[a] = find_set(b);
    // actualizar rank
    // si el padre no tiene mas hijos, se reduce el rank--
    // si no, no cambia el rank
    // https://visualgo.net/en/ufds?slide=1
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rango[a] < rango[b])
            swap(a, b);
        padre[b] = a;
        if (rango[a] == rango[b])
            rango[a]++;
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in_05.txt", "r", stdin);
        freopen("out_05.txt", "w", stdout);
    #endif

    int n, o;
    while(cin>>n>>o)
    {
        // Estructura de almacenamiento:
        // v -> indice = elemento                v=i: 0 1 2 3
        // padre[v]-> Padre representativo       p: 0 1 2 3
        // rango[v]-> Rango de v                 r: 0 0 0 0
        
        for(int v = 1; v <= n; v++)
            make_set(v);            // padre y rango

        // Operaciones
        int op, p, q;
        for (int j = 0; j < o; j++)
        {
            cin>>op;
            switch (op)
            {
            case 1:                             // unir {p..} + {q..} -> {p .., q..}
                cin>>p>>q;
                union_sets(p, q);
                break;
            
            case 2:                             // mover p -> {q,..}
                cin>>p>>q;
                move_set(p, q);
                break;
            case 3:                             // suma y nro de elemtos de p
                cin>>p;
                int counter = 0, suma = 0;
                for(int k = 1; k <= n; k++)     // k = elemento; padre[k] = representativo
                {
                    if(padre[k] == padre[p])
                    {
                        counter++;
                        suma += k;
                    }
                }
                cout << counter <<" "<< suma <<"\n";
                break;
            }
        }
        for(int v = 1; v <= n; v++){
            cout << padre[v] << " - ";
            cout << rango[v] << "\n";
        }
    }   
}