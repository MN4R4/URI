#include <iostream>
using namespace std;

int UNDEFINED = 1 << 28;

int main() {

    int s, c, i, j, k, u, v, t;
    int tsala[1000], tfinal[1000][1000];
    
    cin >> s >> c;
    
    for (i = 0; i < s; i++) {
        cin >> tsala[i];
        
        for (j = 0; j < s; j++)
            tfinal[i][j] = UNDEFINED;
    }  
    
    for (i = 0; i < c; i++) {
        cin >> u >> v >> t;
        u--; v--;
        // adiciona o peso do v�rtice em cada aresta de entrada
        tfinal[u][v] = t + tsala[v];
    }
    
    for (k = 0; k < s; k++)
        for (i = 0; i < s; i++)
            for (j = 0; j < s; j++)
                tfinal[i][j] = min(tfinal[i][j], tfinal[i][k] + tfinal[k][j]);
                
    // algoritmo lindo, prova f�cil por contradi��o
    // deixo a demonstra��o como exerc�cio, risos
    int m = UNDEFINED;
    for (i = 0; i < s; i++)
        for (j = 0; j < s; j++)
            m = min(m, tfinal[i][j] + tfinal[j][i]);
               
    cout << m;

    return 0;
}
