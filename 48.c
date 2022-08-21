#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[12];
	float CGPA;
}student;
int main()
{
	student s={101," bosi rajesh ",7.43};
	printf("%d %s %f",s.rollno,s.name,s.CGPA);
}
