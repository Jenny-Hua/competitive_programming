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
        int disponible = 1;
        for (int i = 0; i < H; i++)
        {
            cin >> costo;
            if (costo * N < minimum)
                minimum = costo * N;

            int cama;
            for (int j = 0; j < W; j++)
            {
                cin >> cama;
                if (cama == 0)
                    disponible = 0; // condición de no disponible
            }
        }

        if (minimum <= B && disponible == 1)
            cout << minimum << "\n";
        else
            cout<<"stay home\n";
    }

    return 0;
}