#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

//	---FUNCTIONS---

/*	
*	Init head of linked list
*/
void init_list (new_node** head)
{
	*head = NULL;
}

/*	
*	Print all linked list
*/
void print_list (new_node* list)
{
	// Until the end of list 
	while (list != NULL) {
		printf("DATA-> %d\n", list->data);
		//printf("Address now  %p\n", list);
		list = list->next;
		//printf("Address next %p\n", list);
	}
}

/*	
*	Function for add new item in linked list at the beninning
*	Pass the address of pointer head and data of node
*/
void append_begin (new_node** head, int data)
{
	new_node* node;
	node = (new_node*) malloc(sizeof(new_node));	// Alloco memoria nel nuovo nodo
	node->data = data;	// Campo dati
	node->next = *head;	// Il nuovo nodo puntera' alla testa, ovvero l'ultimo nodo creato
	*head = node;		// Ora la testa punta al nuovo nodo
}

/*	
*	Function to add a node at the end of the list
*	Pass the address of pointer head and data of node
*/
void append_end (new_node** head, int data)
{
	new_node* node_ref;
	new_node* node;
	node = (new_node*) malloc(sizeof(new_node));
	node->data = data;
	node->next = NULL;	// New node to null, last of list
	node_ref = *head;	// Start from head
	if(*head == NULL){
		*head = node; 
	}
	else{
		// Until the end of list 
		while (node_ref->next != NULL) {
			node_ref = node_ref->next;
		}
		// Last item to new item
		node_ref->next = node;
	}
}


// Giro la lista
// 
void delete_position (new_node** head, int pos)
{
	new_node* previous = *head;
	new_node* search = *head;
	int count = 2;
	if(*head == NULL){
		printf("List empty");
	}
	// In case of position first position
	else if(pos ==1){
		*head = search->next;
		free(search);
	}
	else{
		while (search != NULL)
		{
			previous = search;			//Previous element
			search = previous->next;	//current element
			if(count == pos){
				// In case of last position 
				if(search->next == NULL){
					previous->next=NULL;
					free(search);
					break;
				}
				// Other position
				else{
					// Next element to next of next element
					previous->next = search->next;
					free(search);
				}
			}
			count++;
		}	
	}
}