typedef struct island
{
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;

void release(island *start);
island* create(char *name, char *opens, char *closes);
void display(island *start);