#include <stdio.h>
int main(){
	int Student_marks[20]; // declaration
	int i;
	//  Use Of First Loop Input OF Marks From User
	for(i=0;i<=20;i++)
	{
		printf("Enter RollNo %d Student_Marks  :",i+1);
		scanf("%d",&Student_marks[i]);
	}
	// Use second Loop for OutPut of marks 
	for (i=0;i<=20;i++)
	{
		printf("RoLL No: %d     Marks =%d \n",i+1,Student_marks[i]);
	}
	
	
	
	
	return 0;
}
