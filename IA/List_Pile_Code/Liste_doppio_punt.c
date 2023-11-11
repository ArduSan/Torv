#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <assert.h>
#include <stdlib.h>

typedef struct node{
    struct node *next;
    int item;
    struct node *prev;
}Node;

typedef struct list{
    Node *head;
    Node *tail;
}List;
/*
List buildList() {
    Node a = {NULL,1,NULL};
    Node b = {NULL,2,NULL};
    Node c = {NULL,3,NULL};
    Node d = {NULL,4,NULL};
    a.next = &b;
    b.prev = &a;
    b.next = &c;
    c.prev = &b;
    c.next = &d;
    d.prev = &c;
    List l = {&a,&d};
    return l;
}*/
bool empty(List *l){
    return ((l->head == NULL)&&(l->tail==NULL));
}

Node *insert(Node *pos,int item,List *l ){
    Node *new = malloc(sizeof(Node));

    if (empty(l)){
        return NULL;
    }else{
        if ((pos->prev == NULL)&&(pos->next!=NULL) ){

        }
        new->item = item;
        new->next = pos->next;
        new->prev = pos;
        pos->next = new;
        new->next->prev= new;

    }
    return new;

}

void printList(Node *head) {
    Node *p = head;
    printf("LIST: ");
    while (p != NULL) {
        printf("%d ",p->item);
        p = p->next;
    }
    printf("\n");
}

void printListR(Node *tail) {
    Node *p = tail;
    printf("LIST_R: ");
    while (p != NULL) {
        printf("%d ",p->item);
        p = p->prev;
    }
    printf("\n");
}


int main() {
    //List l = buildList();

    /*Node a = {NULL,1,NULL};
    Node b = {NULL,2,NULL};
    Node c = {NULL,3,NULL};
    Node d = {NULL,4,NULL};
    a.next = &b;
    b.prev = &a;
    b.next = &c;
    c.prev = &b;
    c.next = &d;
    d.prev = &c;
    List l = {&a,&d};

    printList(l.head);
    printListR(l.tail);*/

    Node *a = malloc(sizeof(Node));
    Node *b = malloc(sizeof(Node));
    Node *c = malloc(sizeof(Node));
    Node *d = malloc(sizeof(Node));
    a->next = b;
    a->item = 1;
    b->prev = a;
    b->item = 2;
    b->next = c;
    c->prev = b;
    c->item = 3;
    c->next = d;
    d->prev = c;
    d->item = 4;
    d->next = NULL;
    a->prev = NULL;
    List *l = malloc(sizeof(List));
    l->head = a;
    l->tail = d;


    printList(l->head);
    printListR(l->tail);


}





