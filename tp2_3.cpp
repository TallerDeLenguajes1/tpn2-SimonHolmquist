#include <iostream>
#include <vector>
#include <time.h>

#define forn(i,n) for(int i=0;i<n;i++)
#define FILAS 15

using namespace std;

int main(){
    srand (time(NULL));
    const int COLUMNAS = rand()%11 + 5;
    int MATRIZ[FILAS][COLUMNAS], pares;
    int *p = &MATRIZ[0][0];
    vector<int> v_pares;

    forn(i,FILAS*COLUMNAS) *(p++) = rand()%900 + 100;
    p = &MATRIZ[0][0];
    forn(i,FILAS)
    {
        forn(j,COLUMNAS)
        {
            cout<<*(p+i*COLUMNAS+j)<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
    forn(i,FILAS)
    {
        pares=0;
        forn(j,COLUMNAS)
        {
            if(MATRIZ[i][j]%2==0) pares++;
        }
        v_pares.push_back(pares);
        cout<<"En la fila "<<i<<" hay "<<pares<<" números pares\n";
    }
    cout<<'\n';
    for(auto i:v_pares) cout<<i<<' ';
    return 0;
}