#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island* create(char *name)
{
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

void display(island *start)
{
    island *i = start;
    for (; i; i = i->next)
        printf("Island name: %s\nOpens: %s-%s\n", i->name, i->opens, i->closes);
}

int main()
{
    char name[80];
    scanf("%79s", name);
    island *p_island0 = create(name);
    
    scanf("%79s", name);
    island *p_island1 = create(name);
    p_island0->next = p_island1;

    display(p_island0);
    return 0;
}