#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}* first = NULL, *last = NULL;

void create(int[], int);
void display(struct Node*);
void reverse();
void Rreverse(struct Node*, struct Node*);


int main(){
    int arr[] = {1,2,3};
    create(arr,3);
    display(first);


    Rreverse(NULL,first);
    display(first);
  
    return 0;
}

void create(int A[], int n){
    int i;
    struct Node *t;
    first = (struct Node*)malloc(sizeof(Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t=(struct Node*)malloc(sizeof(Node));
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
    printf("\n");

}

void reverse(){
    struct Node *p, *q, *r;
    
    q = NULL;
    r = NULL;
    p = first;
    
    while(p != NULL){
        r = q;
        q = p;
        p = p ->next;
        q->next = r;

    }

    first = q;
}

void Rreverse(struct Node *q, struct Node *p){

    if(p != NULL){
        Rreverse(p, p->next);
        p->next = q;
    }

    first = q;

}








