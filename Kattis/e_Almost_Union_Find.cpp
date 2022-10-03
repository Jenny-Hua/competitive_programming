// Problem E - Almost Union-Find

#include <iostream>

using namespace std;

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
        // Indice -> elemento                       i: 0 1 2 3
        // S[indice]-> Almacena al representativo   r: 0 1 2 3
        int S[n+1];
        for(int i = 1; i <= n; i++)
            S[i] = i;

        // Operaciones
        int op, p, q;
        for (int j = 0; j < o; j++)
        {
            cin>>op;
            switch (op)
            {
            case 1:                             // unir {p..} + {q..} -> {p .., q..}
                cin>>p>>q;
                for(int k = 1; k <= n; k++)     // k = elemento; S[k] = representativo
                    if (S[k] == S[q])
                        S[k] = S[p];
                break;
            
            case 2:                             // mover p -> {q,..}
                cin>>p>>q;
                S[p] = S[q];
                break;
            case 3:                             // suma y nro de elemtos de p
                cin>>p;
                int counter = 0, suma = 0;
                for(int k = 1; k <= n; k++)     // k = elemento; S[k] = representativo
                {
                    if(S[k] == S[p])
                    {
                        counter++;
                        suma += k;
                    }
                }
                cout << counter <<" "<< suma <<"\n";
                break;
            }
        }
    }
}