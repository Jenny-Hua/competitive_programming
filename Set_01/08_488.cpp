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
                cout<<"\n"; 
            }
            cout<<"\n"; 
        }
    }
    
    return 0;
}