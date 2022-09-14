#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


//	---MAIN---
int main(int argc, char *argv[]) {
	int pos;
	new_node *head;	// Head of list
	init_list(&head);
	for (int i=1; i<20; i++) 
	{
		append_end(&head, i);
	}
	print_list(head);
	printf("\n");
	printf("Position: ");
	scanf("%d", &pos);
	delete_position(&head, pos);
	print_list(head);
	return 0;
}

