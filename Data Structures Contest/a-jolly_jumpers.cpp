// Jolly Jumpers

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
    int cases;
    while(cin>>cases)
    {
        int N[cases], R[cases-1], JJ[cases-1];
        for (int i = 0; i < cases; i++)
            cin>>N[i];

        // Encontrar las diferencias en R e inicializar JJ en 0s
        for (int j = 0; j < cases-1; j++)
        {
            R[j] = abs(N[j] - N[j + 1]);
            JJ[j] = 0;
        }

        // Marcar como +1 si R[i] se encuentre en 1..cases-1
        for (int j = 0; j < cases-1; j++){
            for(int n = 1; n <= cases; n++){
                if(n == R[j])
                    JJ[n-1] +=1;
            }
        }
        
        bool isJJ = true;
        // Recorrer JJ. Si la marca != 1, no es JJ
        for (int l = 0; l < cases-1; l++)
        {
            // cout << JJ[l] << "\n";
            if(JJ[l] != 1)
                isJJ = false;
        }

        if(isJJ == true)
            cout<<"Jolly\n";
        else
            cout<<"Not jolly\n";
    }


    return 0;
}