#include<stdio.h>
#include<time.h>
int main()
{
	int n;
	srand(time(NULL));
	int i;
	printf("20 8\n");
	for(i=0;i<20;i++)
	{
		printf("%d ",rand()%10+1);
	}
	printf("\n");
return 0;
}

