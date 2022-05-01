#include <stdio.h>
#include <stdlib.h>
#include<cstdio>
#include <unistd.h> // для Unix систем
#include <ctime>

int main(int argc, char* argv[]) {
    int Noise = 25; // уровень шума (1, 10, 25)

    if (argc!=3){
        return 0;
    }
    srand( time(NULL) );
    int a = atoi(argv[1]);
    float b = atof(argv[2]);
    if (b>=15){
        b=-b;
    }
    if (a==300){
        b*=2;
    }
    a = 100 - a%200;
    if(a<0){
        a*=-1;
    }
    a+=40;
    float ret = rand();
    ret = ret/RAND_MAX;
    ret+=a+b;

    printf("Time:%lf\n",a+b+ret);
    return 0;

 }
