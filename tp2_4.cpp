#include <iostream>
#include <time.h>
#include <string.h>

#define forn(i,n) for(int i=0;i<n;i++)

using namespace std;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

void mostrarPCs(compu *p, int n){
    cout<<"Características de la PC:\n";
    printf("%15s %15s %15s %15s\n","Velocidad de procesamiento [GHz]","Año de fabricación","Tipo de procesador","Cantidad de núcleos");
    forn(i,n)
    {
        printf("%15d %25d %20s %15d\n", (*p).velocidad, (*p).anio, (*p).tipo_cpu, (*p).cantidad);
        p++;
    }
    cout<<'\n';
}

void cargarPC(compu *p, int n){
    forn(i,n)
    {
        (*p).velocidad = rand()%3 + 1;
        (*p).anio = rand()%8 + 2000;
        (*p).cantidad = rand()%4 + 1;
        (*p).tipo_cpu = tipos[rand()%6];
        p++;
    }
}

void PCvieja(compu *p, int n){
    int masVieja = 2008;
    compu *ans = p;
    forn(i,n)
    {
        if((*p).anio<masVieja)
        {
            masVieja = (*p).anio;
            ans = p;
        }
        p++;
    }
    cout<<"La PC más vieja es:\n";
    mostrarPCs(ans, 1);
}

void PCrapida(compu *p, int n){
    int masRapida = 0;
    compu *ans = p;
    forn(i,n)
    {
        if((*p).velocidad>masRapida)
        {
            masRapida = (*p).velocidad;
            ans = p;
        }
        p++;
    }
    cout<<"La PC más rápida es:\n";
    mostrarPCs(ans, 1);
}

int main(){
    srand (time(NULL));
    int n;
    cout<<"Ingrese la cantidad de PC que desea crear\n";
    cin>>n;
    compu PC[n];
    cargarPC(PC, n);
    mostrarPCs(PC, n);
    PCvieja(PC, n);
    PCrapida(PC, n);
    return 0;
}

