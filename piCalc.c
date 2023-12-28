#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main( int argc, char *argv[] ){
    int dia =500;
    double x, y;
    double x2, y2;
    double counter=0;
    int max =100000000;
    for(int i =0;i<max;i++){
        x = rand() % (dia+1);
        y = rand() % (dia+1);
        x2 = (x-dia/2)*(x-dia/2);
        y2 = (y-dia/2)*(y-dia/2);

        if(sqrt(x2+y2)<=dia/2){
            counter++;
        }
    }
    printf("Pi = : %f\n",(counter/max)*4);
    
}