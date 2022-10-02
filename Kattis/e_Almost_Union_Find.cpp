// Problem E - Almost Union-Find

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in_04.txt", "r", stdin);
        freopen("out_04.txt", "w", stdout);
    #endif

    int n, o;
    while(cin>>n>>o)
    {
        // Estructura de almacenamiento: 
        // Cada elemento esta emparejado a su padre.
        vector<pair<int,int>> sets(n);
        pair<int, int> p;       // p,e
        for(int i = 1; i <= n; i++)
        {
            p = make_pair(i,i);
            sets.push_back(p);
        }

        // Operaciones
        int op, e1, e2, p1, p2;
        cin>>op;
        for (int j = 0; j<o; j++)
        {
            switch(op)
            {
            case 1:     // unir conj (<-)
                cin>>e1>>e2;
                p1 = 1.first();
                break;
            case 2:     // mover elem -> conj
                /* code */
                break;
            case 3:     // suma y nro de elemtos
                /* code */
                break;
            default:
                break;
            }
        }
    }    
}