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
    Node head;
    Node tail;
}List;

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
    List l = {a,d};
    return l;
}
/*bool empty(List *mylist){
    return ((mylist->head == NULL)&&(mylist->tail==NULL));
}*/
/*
Node *head(List *mylist){
    if (empty(mylist) ) {
        return NULL;
    }else{
        return mylist->head;
    }
};

Node *tail(List *mylist){
     if (empty(mylist)){
         return NULL;
     }else{
        return mylist->tail;
     }
}
*/

void printList(Node *head) {

    Node *p = head;
    printf("%p\n",head);
    printf("%d\n",head->item);
    printf("%p\n",head->prev);
    printf("%p\n",head->next);

    printf("-----\n");
    printf("%p\n",head->next);
    printf("%d\n",head->next->item);
    printf("%p\n",head->next->prev);
    printf("%p\n",head->next->next);

    printf("LIST: ");
    //while (p != NULL) {
    //    printf("%d ",p->item);
    //    p = p->next;
    //}
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
    List l = buildList();
    printf("%d\n",l.head.item);
    printf("%d\n",l.tail.item);
    printList(&l.head);
    //printListR(&l.tail);
}





