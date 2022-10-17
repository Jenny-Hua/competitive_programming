// 441 - Lotto
#include <iostream>
#include <vector>
using namespace std;

const int TAM = 1000000;
int S[TAM];
int R[TAM];
int k;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("in_01.txt", "r", stdin);
    freopen("out_01.txt", "w", stdout);
#endif
    bool first = true;
    while (cin >> k)
    {
        if (k == 0)
            break;

        for (int i = 0; i < k; i++)
        {
            cin >> S[i];
        }
        if (!first)
            cout << "\n";
            first = false;
        
        // Un for para cada espacio de 6 < k < 13
        // simular las 6 combinaciones con 6 fors
        for (int a = 0; a < k-5; a++) // fija la pos 1
        {
            for (int b = a+1; b < k-4; b++) // pos 3 a 6
            {
                for (int c = b+1; c < k-3; c++) // pos 4 a 6
                {
                    for (int d = c+1; d < k-2; d++)
                    {
                        for (int e = d + 1; e < k - 1; e++)
                        {
							for (int f = e + 1; f < k; f++)
                            {
                                cout << S[a] << " "
                                    << S[b] << " "
                                    << S[c] << " "
                                    << S[d] << " "
                                    << S[e] << " "
                                    << S[f];
                                cout << "\n";
                            }
                        }
                    }
                    
                }
            }
            
        }
    }
    return 0;
}