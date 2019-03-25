#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

island* create(char *name, char *opens, char *closes)
{
	island *i = malloc(sizeof(island));
	i->name = strdup(name);
	i->opens = strdup(opens);
	i->closes = strdup(closes);
	i->next = NULL;
	return i;
}