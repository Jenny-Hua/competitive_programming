// 11550 - Demanding Dilemma
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2545
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 8;
int matrixI [MAXN][MAXN*(MAXN-1)/2] = {0};

int main()
{
    
    #ifndef ONLINE_JUDGE
        freopen("11550.txt", "r", stdin);
        freopen("11550_o.txt", "w", stdout);
    #endif
    
    int T;                              // NRo de casos
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int M, N;
        cin >> N >> M;                  // N = row - vertexes, M = cols -edges 
        

        int sumCol[M] = {0};            // guarda las sumas de cada columna
        vector <string> E(M+1, "");
        for ( int i = 0; i < N; i++ ) {
            for ( int j = 0; j < M; j++ ) {
                cin>>matrixI[i][j];
                E[j] += to_string(matrixI[i][j]);   // guarda representación de cada edge
                sumCol[j] += matrixI[i][j];         // sumar valores en c/columna j debe ser == 2 
            }
        }

        
        sort(E.begin(), E.end());
        for (auto &e:E) {
            cout << e<<endl;
        }
        bool is = true;                
        for (int i = 0; i < M; i++){
            if(sumCol[i] != 2 || E[i] == E[i+1]) {      // Si es diferente de  2 no es matriz de Incidencia simple
                is = false;
                break;
            }               
        }

        if (is) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}