// 06_11559 - Event Planning

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    // Input:
    // L1: num participantes (N) - budget (B) - num hotels (H) - num semanas entre los que puede elegir (W)
    // L2: costo por w de un participante
    // L3: H1: disponibilidad camas x w

    int test;
    int N, B, H, W;
    int Blimit = 500000;

    while (cin >> N >> B >> H >> W) // 4 entradas seguidas
    {
        int costo = 0, minimum = Blimit;
        bool disponible = false;
        for (int i = 0; i < H; i++)
        {
            cin >> costo;
            int cama = 0, maxCama = 0;
            for (int j = 0; j < W; j++)
            {
                cin >> cama;
                maxCama = max(cama, maxCama);
            }
            if (maxCama >= N)
            {
                int costoTotal = N * costo;
                if(costoTotal<= B)
                {
                    minimum = min(minimum,costoTotal);
                    disponible = true; 
                }
            }
        }

        if (disponible)
            cout << minimum << "\n";
        else
            cout<<"stay home\n";
    }

    return 0;
}