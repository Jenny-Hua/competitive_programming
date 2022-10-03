// 12503 - Robot Instructions
#include <cstdio>
#include <string.h>


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int test;
    int nInstr;             // nro. instrucciones
    char instr[12];         // instruccion [longitud maxima]
    int lineInstr;          // nro. de instr previa


    scanf("%d", &test);
    while(test)
    {
        int posicion = 0;
        int I[nInstr];       // array I almacena n instr
        int i;

        scanf("%d", &nInstr);
        // Almacenar en I[] las instrucciones de c/linea
        for( i = 0; i < nInstr; i++ )
        {
            scanf("%s", instr);
            if( !strcmp(instr, "LEFT"))         // strcmp return 0 if both are =
                I[i] = -1;
            else if( !strcmp(instr, "RIGHT"))
                I[i] = 1;
            else 
            {
                scanf("%s", instr);
                scanf("%d", &lineInstr);
                I[i] = I[lineInstr-1];
            }
        }
        // Desarrollar c/instruccion partiendo del origen 0
        for ( i = 0; i < nInstr; i++)
        {
            posicion = posicion + I[i];
        }
        printf("%d\n", posicion);

        test --;
    }
    return 0;
}