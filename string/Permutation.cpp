#include <stdio.h>
using namespace std;

void perm(char[], int);
void perm2(char[], int, int);
void swap(char *, char *); 

int main(){
    char s[] = "ABC";
    int a = 0;
    perm2(s,0,2);
    return 0;
}

void perm(char s[], int k){
    static int flag[10] = {0};
    static char res[10];
    int i;

    if(s[k] == '\0'){
        printf("%s ",res);
    }

    for(i = 0; s[i] != '\0'; i++){

        if(flag[i] == 0){
            flag[i] = 1;
            res[k] = s[i];
            perm(s,k + 1);
            flag[i] = 0;

        }
    }
}

void perm2(char s[], int l, int h){

    int i;
    if(l == h){
        printf("%s ", s);
    }
    else
    {
        for(i = l; i <= h; i++){
        swap(s+l,s+i);
        perm2(s, l+1, h);
        swap(s+l,s+i);
    }
    }
    


}

void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 

