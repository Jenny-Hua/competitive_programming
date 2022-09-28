// 12015 - Google is Feeling Lucky
#include <cstdio>

int main ()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test, nPages = 10;          
    
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int vi[nPages];                     // vi: relevancia de una página
        int maxVi = 0;   
        char pages[nPages][100]; 

        for (int j = 0; j < nPages; j++)
        {
           scanf("%s %d", pages[j], &vi[j]);
           if(vi[j] > maxVi) maxVi = vi[j];
        }
                
        // Print cases when vi = maxVi
        printf("Case #%d:\n", i);
        for (int k = 0; k < nPages; k++)
        {
           if(vi[k] == maxVi){
                printf("%s\n", pages[k]);
           }
        }
        
        
    }

    return 0;
}