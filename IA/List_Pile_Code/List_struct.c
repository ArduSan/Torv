//la lista è una struttura dati, prima rappresentazione che vediamo è quella della lsita con puntato singoli
//quindi ci permette di utilizzare operatori con complessita di ordine di O(1)
//Ogni lista contiene due cose, valore attuale e l'indirizzo del prossimo elemento, quidni un puntatore
//per l'ultimo elemento della lista il puntatore viene forzato ad un valore predefinito "invalido" (un operatore che non //puo essere effettivamente in uso, in C = NULL.
//vediamo ora qualche metodo per le liste
#include <stdio.h>
#include <stdbool.h>
#include <stddef,h>
#include <assert.h>
#include <stdlib.h>


typedef struct node{
	int items; //elemento attuale della lista 
	struct node *next; //dove sta il prossimo 
}Node;

typedef struct list{
	Node *head;
	
}List;

//sono un burlone


bool empty(List *myList){
	return (myList->head)==NULL;
	
}

Node *head(List *myList){
	if(myList==NULL){
		return(NULL);
	}else{
		return (myList->head);
	}
}

Node *next(Node *mynode){
	if(mynode==NULL){
		return(NULL);
	} else {
		return(mynode->next);
	}
}

Node *prev(Node *head, Node *mynode){
	Node *current = head;
	while(current!=NULL){
		if (current -> next== mynode){
			return(current);
		current= current -> next;
		}
	
	}
}

Node *tail(List *myList){
	Node *current= head(myList);
	while(current!=NULL){
		if((current -> next) == NULL){
			return current;
		}else{
			current  = current -> next;
		}
	}
	return(NULL);
}

int remove(List *myList, Node *mynode){
	int value;
	Node *prev,*head;
	head = head(myList);
	if (head == NULL){
		return(-1);
	}else if (head == mynode){
		myList->head=mynode->next;
	}else{
		prev = prev(head,mynode);
		if(prev!=NULL){
			prev->next = mynode->next;
		}else{
			fprintf(stderr,"Node not found\n");
			return(-1);
		}
	}
	value=mynode->item;
	free(mynode);
	return (value);
}

Node *insert(List *myList, Node *pos,int item){
	Node *new,*head; 
	if (myList == NULL){
		return(-1);
	}else{
		head = head(myList);
		new = (Node *) malloc(sizeof(Node));
		new->item=item;
		if(head == NULL){
			assert(pos==NULL);
			new->next=head;
			myList->head=new;
		}else{
			new->next = pos->next;
			pos->next=new;
		}
	}
	return(new);

}


int main(){
	
	return 0;
}
