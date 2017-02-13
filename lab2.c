#include <stdio.h>

int main()
{
	int day, sum, income;
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
	
	if (day<=30)
	{
		if (sum <100000)
		{
			income=(sum/100)*90;
		}
		else
		{
			income=(sum/100)*90;
		}	
	}
	
	if (day>=31 || day<=120)
	{
		if (sum <100000)
        {
            income=(sum/100)*102;
        }
        else
        {
            income=(sum/100)*103;
        }

	}
	
	if (day>=121 || day<=240)
    {
        if (sum <100000)
        {
            income=(sum/100)*106;
        }
        else
        {
            income=(sum/100)*108;
        }
     
    }
    
    if (day>=241 || day<=365)
    {
        if (sum <100000)
        {
            income=(sum/100)*112;
        }
        else
        {
            income=(sum/100)*115;
        }
     
    }

	return 0;
	
}
