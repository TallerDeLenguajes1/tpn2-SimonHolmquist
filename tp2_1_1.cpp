#include <iostream>
#include <conio.h>
#define N 4
#define M 5

using namespace std;

int f,c;
double mt[N][M];

int main(){
    for(f = 0;f<N; f++)
    {
        for(f = 0;f<N; f++)
        {
        cprintf("%lf ", mt[f][c]);
        }
        cprintf("\n");
    }
    return 0;
}