// 9. 12364 - In Braille

#include <iostream>
using namespace std;

int main ()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int digits;
    // Raised dots
    
    char code[1]; // S or B
    char cell[1];

    cin>>digits;
    while(digits--)
    {
        cin>>code;
        cout << "code: " <<code << "\n";
        int decimal[digits];
        char fila[3*digits];
        
        if(code[0] == 'S') // Deciaml to Braille
        {
            for(int i = 0; i < digits; i++)
            {
                cin>>decimal[i];
                // cout  << decimal[i]<<"\n";
            }
        }
        
        else if (code[0] == 'B') // Braille to Decimal
        {
            // solo almacenar posicion de raised dots
            for(int j = 0; j < digits*3; j++)  // cada fila contiene 3 espacios por digito
            {
                    
            }
        }
    }
    return 0;
}
