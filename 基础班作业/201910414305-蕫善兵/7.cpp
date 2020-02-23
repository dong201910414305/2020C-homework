#include"stdio.h"
#include"stdlib.h"
typedef struct student {
	char name[10];
	char stu_id[15];
	int age;
	struct student* next;
}student;
void shuru(student*);
student* chaxun(student*);
void shuchu(student*);
void dete(student* head)
{
	char c;
	if (head == NULL)
		shuru(head);
	else
	{
		student *i;
		shuchu(head);
		printf("是否要新增（输入y确定）");
		c = getchar();
		if (c == 'y' || c == 'Y')
		{
			i = chaxun(head);
			shuru(i);
		}
	}
}
void shuru(student* head)
{
	char a;
	student *p = NULL, *tmp = NULL;
	while (1)
	{
		fflush(stdin);
		printf("请输入学生id：");
		tmp = (student*)malloc(sizeof(student));
		scanf_s("%s", &tmp->stu_id);
		fflush(stdin);
		printf("请输入学生姓名：");
		scanf_s("%s", &tmp->name);
		fflush(stdin);
		printf("请输入学生年龄:");
		scanf_s("%d",&tmp->age);
		if (head == NULL)
			head = tmp = p;
		else
		{
			tmp->next = p;
			tmp = p;
		}
		fflush(stdin);
		printf("输入a结束\n");
		a = getchar();
		printf("\n");
		if (a == 'a' || a == 'A')
			return;
	}
}
student* chaxun(student* head)
{
	student *p = head, *tmp = NULL;
	while (1)
	{
		if (p != NULL)
		{
			tmp = p;
			p=p->next;
		}
		else
			return tmp;
	}	
}
void shuchu(student* head)
{
	student* p = head;
	do
	{
		printf("%-15s%-15s%-5d", p->stu_id, p->name, p->age);
		p = p->next;
	} while (p != NULL);
}
