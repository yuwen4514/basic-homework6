#include <stdio.h>
#include<stdlib.h>

int main() 
{
	int year;
	
	printf("�п�J�褸�~��:");
	scanf("%d",&year);
	
	if((year % 4==0)&&(year%100 !=0)||(year % 400==0))
	printf("%d�~�O�|�~",year);
	else
	printf("%d�~�O���~",year);
	
	system("pause");
	return 0;
}
