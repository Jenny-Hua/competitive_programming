// 488 - Triangle Wave
#include <iostream>
using namespace std;

int main ()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int cases;
    int c;
    cin>>cases;
    while (cases--)
    {
        int A, F;
        cin >> A >> F;
        for (int i = 0; i < F; i++)
        {
            // if(i != 0) cout <<"\n";
            for (int j = 1; j <= A; j++)
            {
                for (int k = 0; k < j; k++)
                {
                    cout<<j;
                }
                cout<<"\n"; 
            }
            for (int j = A-1; j>0 ; j--)
            {
                for (int k = j-1; k >= 0; k--)
                {
                    cout<<j;
                }

                if(j != 1) cout <<"\n";
            }
            if(i != F-1) cout <<"\n";

        }
        if(cases) cout <<"\n";
    }
    
    return 0;
}