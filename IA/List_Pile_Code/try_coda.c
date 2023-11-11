#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <assert.h>
#include <stdlib.h>

typedef struct node{
	int item;
	struct node *next;
	struct node *prev;
}Node;

typedef struct list{
	Node *head;
	Node *tail;
}List;

bool empty(List *myList){
	return (((myList->head)==NULL)&&((myList->tail)==NULL));
}

Node *head(List *myList){
	if(myList==NULL){
		return(NULL);
	}else{
		return(myList->head);
	}
}

Node *tail(List *myList){
	if(myList==NULL){
		return(NULL);
	}else{
		return(myList->tail);
	}
}

Node *next(Node *mynode){
	if(mynode==NULL){
		return(NULL);
	}else{
		return(mynode->next);
	}
}

