#include <iostream>
#include <time.h>

#define forn(i,n) for(int i=0;i<n;i++)

using namespace std;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct compu
{
    int velocidad = rand()%3 + 1;//entre 1 y 3 Gherz
    int anio = rand()%8 + 2000;//entre 2000 y 2017
    int cantidad = rand()%4 + 1;//entre 1 y 4
    char *tipo_cpu = tipos[rand()%6];//valores del arreglo tipos
};

int main(){
    srand (time(NULL));
    int n;
    cout<<"Ingrese la cantidad de PC que desea crear\n";
    cin>>n;
    compu PC[n];
    forn(i,n) cout<<PC[i].velocidad<<' '<<PC[i].anio<<' '<<PC[i].cantidad<<' '<<PC[i].tipo_cpu<<'\n';
    return 0;
}

