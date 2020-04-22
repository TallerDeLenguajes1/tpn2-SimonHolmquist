#include <iostream>
#include <conio.h>
#define N 4
#define M 5

using namespace std;

int f,c;
double mt[N][M];

int main(){
    double *p = &mt[0][0];
    double k = 0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            mt[i][j] = k++;
        }
    }
    for(f = 0;f<N*M; f++)
    {
        cout<<*(p++)<<' ';
        if((f+1)%M==0 && f<M*N) cout<<'\n';
    }
    p = &mt[0][0];
    cout<<'\n';
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<*(p+i*M+j)<<' ';
        }
        cout<<'\n';
    }
    return 0;
}