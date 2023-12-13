// sentinel values

#include<stdio.h>
int main ()
{
	int stu_score, count=0, total =0;
	double average;
	printf("Enter a student score:");
	scanf("%d", &stu_score);
	
	
	
	do
	
	{
		++count; // counter for number of students
		total+=stu_score;
		printf("Enter a student score: ");
		scanf("%d", &stu_score);
	} while(stu_score !=-1);
	
	 average = total/count;
	 printf("Total number of students = %d\n", count);
	 printf("Total grades of students = %d\n", total);
	 printf("Average grades of students = %lf\n", average);
	 
	return 0;
}
