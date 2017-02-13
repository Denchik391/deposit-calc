#include <stdio.h>

int main()
{
	int day, sum;
	printf("input days: ");
	scanf("%d",&day);
	
	if(day<0 || day>365)
	{
		printf("ERROR");
		return 0;
	}
	
	printf("\ninput sum: ");
	scanf("%d",&sum);
	
	if (sum<10000)
	{
		printf("ERROR");
		return 0;
	}
	
}
