#include <iostream>
using namespace std;

// coordenada inicial apunta a , signo , eje de rotacion
bool cambio(char cur, char c1, char c2){
    if(cur == 'x' && c1 == '-') return true;
    if(cur == 'y' && c2 == 'y' && c1 == '+') return true;
    if(cur == 'z' && c2 == 'z' && c1 == '+') return true;
    return false;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int L;
    char d[2];  // decision
    
    while(cin>>L && L!=0){
        --L;
        
        int signo = 1;
        char c = 'x';       // donde apunta coordenada inicial 
        
        for(int i = 0;i < L;++i){
            cin>>d;
            if(d[0] == 'N') continue;
            
            // coordenada inicial apunta a , signo , eje de rotacion
            if(cambio(c, d[0], d[1])) signo = -signo;
            
            if(c == 'x') c = d[1];
            else if(c == 'y' && d[1] == 'y') c = 'x';
            else if(c == 'z' && d[1] == 'z') c = 'x';
        }
        
        cout<< (signo == 1? '+' : '-');
        cout<< c <<"\n";
    }
    
    return 0;
}