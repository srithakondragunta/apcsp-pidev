#include "student.h"

void printStudent(struct Student* student)
{
	printf("The name is %s %s.\n", student -> first, student -> last);
	printf("The age is %d\n", student -> age);
	printf("The student ID is %d\n", student -> stid);
}
