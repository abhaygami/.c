

#include<stdio.h>
void input(int*,int*,int*);
void print(int*,int*,int*);
void asort(int*,int*,int*);
void dsort(int*,int*,int*);
int main()
{
	printf("2) Write user defined function to sort 2D array using pointer.");
	int m,n;
	printf("\nEnter no. of row and column : ");
	scanf("%d %d",&m,&n);
	int a[m][n];
	printf("Enter array elments : \n");
//	calling function input
	input(&m,&n,a);
//	displaying array elements
	printf("Entered \n");
	print(&m,&n,a);
//	calling function asort
	asort(&m,&n,a);
	printf("asorted\n");
	print(&m,&n,a);//displaing asorted array
//	calling function dsort
	dsort(&m,&n,a);
	printf("dsorted\n");
	print(&m,&n,a);//displaying dsorted array
	return 0;
}
void input(int *r,int *c,int *x)
{
	int i,j;
	for(i=0;i<*r;i++)
	{
		for(j=0;j<*c;j++)
		{
			printf("Enter [%d][%d] elements : ",i,j);
			scanf("%d",x+i*(*c)+j);
		}
	}
	return;
}
void print(int *r,int *c,int *x)
{
	int i,j;
	for(i=0;i<*r;i++)
	{
		for(j=0;j<*c;j++)
		{
			printf("%d ",*(x+i*(*c)+j));
		}
		printf("\n");
	}
}
void asort(int *r,int *c,int *x)
{
	int i,j,k,l,temp;
	for(i=0;i<*r;i++)
	{
		for(j=0;j<*c;j++)
		{
			for(k=0;k<*r;k++)
			{
				for(l=0;l<*c;l++)
				{
					if(*(x+i*(*c)+j)<*(x+k*(*c)+l))
					{
						temp=*(x+i*(*c)+j);
						*(x+i*(*c)+j)=*(x+k*(*c)+l);
						*(x+k*(*c)+l)=temp;
					}
				}
			}
		}
	}
	return;
}
void dsort(int *r,int *c,int *x)
{
	int i,j,k,l,temp;
	for(i=0;i<*r;i++)
	{
		for(j=0;j<*c;j++)
		{
			for(k=0;k<*r;k++)
			{
				for(l=0;l<*c;l++)
				{
					if(*(x+i*(*c)+j)>*(x+k*(*c)+l))
					{
						temp=*(x+i*(*c)+j);
						*(x+i*(*c)+j)=*(x+k*(*c)+l);
						*(x+k*(*c)+l)=temp;
					}
				}
			}
		}
	}
	return;
}

