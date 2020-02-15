#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}* first = NULL;

void create(int[], int);
void display(struct Node *);
void Rdisplay(struct Node *);

int main(){
    int arr[] = {1,2,3,4,5};
    create(arr,5);
    display(first);
    return 0;
}

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t=(struct Node *)malloc(sizeof(Node));
        t->data = A[i];
        t->next = NULL;
        last->next =t;
        last=t;
    }
}

void display(struct Node *p){
    while(p!= NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}

void Rdisplay(struct Node *p){
    if(p != NULL){
        printf("%d ", p->data);
        Rdisplay(p->next);
    }
}