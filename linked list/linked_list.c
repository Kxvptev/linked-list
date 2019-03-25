#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	island *i = NULL;
	island *start = NULL;
	island *next = NULL;
	char name[120];
	char opens[50];
	char closes[50];
	
	while ((fgets(name, 120, stdin) != NULL) && (fgets(opens, 50, stdin) != NULL) && (fgets(closes, 50, stdin) != NULL))
	{
		next = create(name, opens, closes);
		if (start == NULL)
			start = next;
		if (i != NULL)
			i->next = next;
		i = next;
	}
	
	display(start);
	release(start);
	
	return 0;
}