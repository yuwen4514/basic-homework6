#include <stdio.h>
#include<stdlib.h>

int main() 
{
	int year;
	
	printf("請輸入西元年數:");
	scanf("%d",&year);
	
	if((year % 4==0)&&(year%100 !=0)||(year % 400==0))
	printf("%d年是閏年",year);
	else
	printf("%d年是平年",year);
	
	system("pause");
	return 0;
}
