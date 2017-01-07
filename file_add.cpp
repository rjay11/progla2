#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	FILE *fp;
	fp = fopen("sample.txt","r");
	
	int i; int sum = 0;
	int numberArray [5];
	
	for ( i = 0; i <5 ; i++) 
	{
		fscanf(fp, "%d", &numberArray[i]);
	}
	for ( i = 0; i <5 ; i++) 
	{
		printf("No. %d\n\n", numberArray[i]);
    }
    for ( i = 0; i <5 ; i++)
    {
    	sum += numberArray[i];
	}
	cout << "All of the sum numbers is:" << sum;
	
	return 0;
}
