#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "linked_list.h"

void display(island *start)
{
	island *i = start;
	for (; i != NULL; i = i->next)
	{
		printf("Name: %s Opens: %s Closes: %s", i->name, i->opens, i->closes);
	}
}
