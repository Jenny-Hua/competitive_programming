#include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in_03.txt", "r", stdin);
        freopen("out_03.txt", "w", stdout);
    #endif

    int N, M;     // Jack y Jill
    while (cin>>N>>M && N !=0 && M!=0)
    {
        // Comparar hasta encontrar la primera coincidencia o llegar al final de uno de los arreglos.
        // Resulta màs sencillo desde que los datos estàn ordenados, 
        // por lo que no se necesita comparar todo el conjunto de datos cada vez.
        
        // Alamcenando los cd de Jack
        int cdN[N];
        for (int i = 0; i < N; i++)
        {
            cin>>cdN[i];
        }
        // Alamcenando los cd de Jill
        int cdM[M];
        for (int j = 0; j < M; j++)
        {
            cin>>cdM[j];
        }
        
        // Comparando las listas de CDs
        int counter = 0;
        for (int i = 0, j = 0; i < N && j < M; )
        {
            // cout <<cdN[i] << "-" << cdM[j]<<"\n";
            if(cdN[i] == cdM[j])
            {   
                counter++;
                i++;
                j++;
            }    
            else if (cdN[i] < cdM[j])
                i++;
            else
                j++;
        }
        cout<<counter<<"\n";
    }
    return 0;
}