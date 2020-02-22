#include"stdio.h"
#include"stdlib.h"
#include"string.h"
typedef struct  student{
	char name[10];
	char stu_id[15];
	int age;
	char sex[5];
}student;
student* find_id(char id[], student stus[], int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if (strcmp(stus[i].stu_id, id) == 0)
			return &stus[i];
		else
			return NULL;
	}
}