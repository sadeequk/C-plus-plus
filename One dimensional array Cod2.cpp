#include <stdio.h>
main()
{
	int a;              //Variable declare for loops
	int s;             // declaring variavle s for size of array
	float array[s];   // linear dimensional array
	printf("Enter The Size Of Array ");
	scanf("%d",&s);
	for(a=0;a<s;a++)         /// loop for Entering array elements
	{
		printf("enter Your Values |%d| ",(a+1));// a+1 for Tracking loop 
		scanf("%f",&array[a]);
	}
	
	for(a=1;a<s;a++) /// loop for finding Largest Value in array
	{
		if(array[0]<array[a])
		{
			array[0]=array[a];
		}
	}
	printf("Largest Number in array is : %.2f",array[0]);

	return 0;
}
