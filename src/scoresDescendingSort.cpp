/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/
#include<stdlib.h>
struct student
{
	char name[10];
	int score;
};
void swaping(struct student *p1, struct student *p2){
	struct student temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void* scoresDescendingSort(struct student *students, int len)
{

	int max, x = 0, y = 0, flag=0;
	if (students==NULL || len < 0)
		return NULL;

	for (int i = 0; i < len - 1; i++)
	{
		max = students[i].score;
		for (int j = i + 1; j < len; j++)
		{
			if (max <students[j].score)
			{
				flag = 1;
				max = students[j].score;
				x = j;
			}
		}
		if (flag)
		{
			swaping(&students[i], &students[x]);
			flag = 0;
		}

	}
	return NULL;
}