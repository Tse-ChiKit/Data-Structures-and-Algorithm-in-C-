#include <stdio.h>

int iterfib(int);
int rmfib(int); //recurrsion with memorization

int F[10];

int main()
{
    //init array
    int i;
    for(i=0; i < 10; i++){
        F[i] = -1;
    }

    printf("%d \n",rmfib(5)); 
    printf("%d \n",iterfib(5)); 

    return 0;
}

int iterfib(int n){
    int t0 = 0, t1 = 1, s = 0;
    int i = 1;

    if (n <= 1){
        return n;
    }

    while(i < n){
        s= t0 + t1;
        t0 = t1;
        t1 = s;

        i++;
    }

    return s;
}

int rmfib(int n){
    if(n <= 1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-1] == -1){
            F[n-1] = rmfib(n-1);
        }
        if(F[n-2] == -1){
            F[n-2] = rmfib(n-2);
        }

        return F[n-1] + F[n-2];
    }
}