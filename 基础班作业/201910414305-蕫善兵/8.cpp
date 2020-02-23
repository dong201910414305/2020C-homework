#include"stdlib.h"
#include"stdio.h"
struct LinkNode
{
	int val;
	struct LinkNode* next;
};
struct LinkNote* resevelist(struct ListNote* head)
{
	struct LinkNote* current;
	current =	head->next;
	if (head == NULL)
		printf("NULL!\n");
	if (current != NULL)
		struct LinkNote* resevelist(current);
	printf("%d ", head->val);
}
