// 12503 - Robot Instructions
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int test;
    scanf("%d", &test);
    string instr, instr2;   

    while(test--)
    {
        int nInstr;             // nro. instrucciones
        scanf("%d", &nInstr);
        
        int I[nInstr + 1]; 
        I[0] = 0;       // array I almacena n instr
        int posicion = 0, line;
        int i;

        // Almacenar en I[] las instrucciones de c/linea
        for( i = 1; i <= nInstr; i++ )
        {
            cin>>instr;
            if( instr.compare("LEFT") == 0)
            {
                I[i] = -1;
                posicion = posicion + I[i];
            }        
            else if( instr.compare("RIGHT") == 0)
            {
                I[i] = 1;
                posicion = posicion + I[i];
            }
            else if (instr.compare("SAME") == 0)
            {
                cin>>instr2>>line;
                I[i] = I[line];
                posicion = posicion + I[i];
            }
        }
        
        printf("%d\n", posicion);
    }
    return 0;
}