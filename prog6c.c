/*Write a program to implement Tower of Hanoi Problem.*/

#include<stdio.h>
void TOH(int ,char ,char ,char );
int main()
{
	int n;
	printf("\nEnter the number of disk: ");
	scanf("%d",&n);
	printf("\n\n");
	TOH(n,'A','B','C');
	return 0;
}
void TOH(int n,char source,char intermediate,char destination)
{
	int static count=1;
	if(n==1)
	{
		printf("%d. %c -> %c\n",count,source,destination);
		count++;
	}
	else{
		TOH(n-1,source,destination,intermediate);
	    TOH(1,source,intermediate,destination);
	    TOH(n-1,intermediate,source,destination);
	}
}