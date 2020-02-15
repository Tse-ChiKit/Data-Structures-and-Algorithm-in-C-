#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}* first = NULL, *last = NULL;

void create(int[], int);
void display(struct Node*);
void insert(int);
void insert(int, int);

int main(){
    int arr[] = {1,2,3,4,5};
    create(arr,5);
    display(first);

    insert(20, 2);
    display(first);

    insert(100);
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


void insert(int value){

    struct Node *newNode = (struct Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if(first == NULL){
        first = newNode;
        last = newNode;
    }
    else
    {
        last->next = newNode;
        last = newNode;
    }
    

}

void insert(int value, int index){

    struct Node *newNode = (struct Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    

    if(index == 0){
        newNode->next = first;
        first = newNode;
    }
    else
    {   
        struct Node *t = first;
        for(int i = 0; i < index -1; i++){
            t = t->next;
        }


        newNode->next = t->next;
        t->next = newNode;
    }
    
}





