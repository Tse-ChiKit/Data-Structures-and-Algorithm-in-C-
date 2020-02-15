#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}* first = NULL;

void create(int[], int);
void display(struct Node *);
void insert(struct Node *, int);

int main(){
    int arr[] = {1,2,3,4,5};
    create(arr,5);
    display(first);
    
    struct Node *newNode = (struct Node*)malloc(sizeof(Node));
    newNode->data = 20;
    newNode->next = NULL;

    insert(newNode, 2);
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
    printf("\n");

}

void insert(struct Node *p, int index){
    if(index == 0){
        p->next = first;
        first = p;
        printf("%s","called");
    }
    else
    {   
        struct Node *t = first;
        for(int i = 0; i < index -1; i++){
            t = t->next;
        }


        p->next = t->next;
        t->next = p;
    }
    
}

