#include<stdio.h>

float getSalary(int year,int hours){

	float salary = 30;
	float overForty = 1;

	if (year >= 5)
	{
		salary = 50;
	}

	if (hours > 40)
	{
		return (hours - 40) * 1.5 * salary + 40 * salary;
	}else
	{
		return hours * salary;
	}



}

int main(){

	int year,hours;

	scanf("%d %d",&year,&hours);

	printf("%.2f\n",getSalary(year,hours) );



	return 0;
}
