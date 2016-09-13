#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,j,temp;

	int (*p)[3] = (int(*)[3])malloc(3*3*sizeof(int));
	
	printf("Enter the array elements");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",(*(p+i)+j));
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}	printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	if(i==0 && j <=3)
			{
				temp = *(*(p+j)+i);
				*(*(p+j)+i) = *(*(p+i)+j);
				*(*(p+i)+j) = temp;
			}
			else if(i==1 && j==2)
			{
				temp = *(*(p+j)+i);
				*(*(p+j)+i) = *(*(p+i)+j);
				*(*(p+i)+j) = temp;
			}
			
		}
		
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
}
