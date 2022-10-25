#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const  int TAMMAX = 1024000;
int t[TAMMAX] = {0};

// segment tree
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}
int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}
void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}

// Solve
void mutate()
{}

int main ()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int cases, 
    M,      //pair of lines
    T,      //concatenates T times the next string
    Q;      //num of queries
    string s1, s2; // s2 almacena la cadena concatenada
    cin>>cases;
    while (cases--)
    {
        cin >> M;
        for(int i = 0; i < M; i++ )
        {
            cin >>T;
            cin >> s1;
            
            // Concatenar T veces s1 en s2
            for (int j = 0; j < T; j++)
                s2 += s1;

            cout<<s1<<": "<<s2<< " size: "<< s2.length() << "*\n";
        }

        cin >> Q;
        char q;
        int a, b;
        for (int j = 0; j < Q; j++)
        {
            cin >> q >> a >> b;
            cout<< q <<": "<<a <<" - " << b<<"\n";

            switch (q)
            {
            case 'F':  // to Buccaneer form a to b
                
                break;
            case 'E':  // to Barbary from a to B
                
                break;
            case 'I':  // inverse from a to b
                
                break;
            case 'S':  // God's query how many Buccaneer pirates from a to b
                
                break;
            
            }
        }
        
    }
    
    return 0;
}

























// 
// https://github.com/morris821028/UVa/blob/master/volume114/11402%20-%20Ahoy%2C%20Pirates.cpp