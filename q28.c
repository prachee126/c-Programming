#include<stdio.h>
void Display(int);
int main()
{
	int iValue=0;
	printf("Enter Number:\t");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iCnt)
		printf("#\t%d\t*\t",iCnt);
	}
	
}
