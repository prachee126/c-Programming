#include<stdio.h>
void Display(int,int);

int main()
{
	int iRow=0,iCols=0;
	printf("Enter rows & cols:\t");
	scanf("%d%d",&iRow,&iCols);
	Display(iRow,iCols);
	return 0;
}
void Display(int iRow,int iCols)
{
	register int i=0,j=0,t=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=1,t=1;j<=iCols;j++,t++)
		{
			
			 if(i==1 || j==1 || i==j || i==iRow || j==iCols)
			 {
				 printf("%d\t",t);
			 }
			else 
				printf("\t");
			
		}
		printf("\n");
	}
}