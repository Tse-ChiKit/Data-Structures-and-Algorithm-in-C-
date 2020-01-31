#include <stdio.h>

void TOH(int,int,int,int);

int main(){
    TOH(3,1,2,3);
    return 0;
}


void TOH(int n, int a, int b, int c){
    
    if(n > 0)
    {
        TOH(n - 1, a, c, b);
        printf("(%d,%d) \n", a, c);
        TOH(n-1, b, a, c);
    }

    /*
    *   when n = 1
    *   move from A to C by B (1)
    * 
    *   when n = 2 
    *   move from A to B by C  (2)
    *   move from A to C by B  (1)
    *   move from B to C by A  (2)
    *   
    * 
    *   when n = 3 
    *   move from A to B by C  (2)
    *   move from A to C by B  (1)
    *   move from B to C by A  (2)
    *   
    */