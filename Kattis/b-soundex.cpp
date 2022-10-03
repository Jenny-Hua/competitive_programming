// Soundex

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("in_02.txt", "r", stdin);
    freopen("out_02.txt", "w", stdout);
#endif

    // Tabla de códigos
    // i+1 de las filas como código 
    char soundex[6][8] = {
        {'B', 'F', 'P', 'V', '0', '0', '0', '0'},   //1
        {'C', 'G', 'J', 'K', 'Q', 'S', 'X', 'Z'},
        {'D', 'T', '0', '0', '0', '0', '0', '0'},
        {'L', '0', '0', '0', '0', '0', '0', '0'},
        {'M', 'N', '0', '0', '0', '0', '0', '0'},
        {'R', '0', '0', '0', '0', '0', '0', '0'},   //6
    };

    string word;
    while (cin >> word)
    {
        // Por cada caracter almacenar su código soundex
        int len = word.length();
        int wcode[len];
        for (int c = 0; c < len; c++)
        {
            bool encontrado = false;
            // busqueda en la tabla
            for (int i = 0; i < 6; i++)             // i+1 = code
            {
                for (int j = 0; j < 8; j++)
                {
                    if (soundex[i][j] == '0')
                        break;
                    if (word[c] == soundex[i][j]){
                        wcode[c] = i + 1;
                        encontrado = true;
                        break;
                    }
                }
            }
            if(!encontrado) wcode[c] = 0;
            // cout<<wcode[c] <<"\t";
        }

        // Busqueda de duplicados hacia ->
        // tachar los duplicados (= 0)
        for (int i = 0; i < len - 1; i++)
        {
            if(wcode[i] == wcode[i+1])
                wcode[i] = 0;
        }

        // Imprimir Respuesta
        for (int j = 0; j < len; j++)
        {
            if(wcode[j] != 0)
                cout<<wcode[j];
        }
        cout<<"\n";
        
        
    }

    return 0;
}