#include <stdio.h>
using namespace std;

void perm(char[], int);

int main(){
    char s[] = "ABC";
    perm(s,0);
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
