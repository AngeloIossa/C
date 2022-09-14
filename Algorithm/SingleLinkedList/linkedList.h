#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

//	---LIST ELEMENT---
typedef struct list_node {
	int data;
	struct list_node* next;
}new_node;

//	---DECLARATIONS---
void init_list (new_node** head);
void print_list (new_node* list);
void append_begin (new_node** head, int data);
void append_end (new_node** head, int data);
void delete_position (new_node** head, int pos);

#endif