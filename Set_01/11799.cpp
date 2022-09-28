// 11799 - Horror Dash

#include<cstdio>


int main()
{
   
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test;               //nro. tests
    scanf("%d",&test);
    for(int i = 1; i <= test; i++)
    {
        int e, max = 0;
        int n;              // nro. students acting as scary creatures 
        scanf("%d",&n);     
        for(int i = 0; i < n; i++ )
        {
            scanf("%d",&e); // speed of each creature
            if(e > max)
                max = e;
        }    
        printf ("Case %d: %d\n", i, max);
    }
    return 0;
}

