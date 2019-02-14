//to show the work of each layer
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j,k,n;
	printf("Enter the string of characters: ");
	gets(a);
	printf("\nThe string entered is: ");
	puts(a);
	
	// for application layer
	for(i=strlen(a);i>=0;i--)
	{
		a[i+2]=a[i];
	}
	a[1]='H';
	a[0]='A';
	printf("\nThe string after application layer is: ");
	printf("%s", a);
	
	// for Transport layer
	for(i=strlen(a);i>=0;i--)
	{
		a[i+2]=a[i];
	}
	a[0]='T';
	a[1]='H';
	
	printf("\nThe string after transport layer is: ");
	printf("%s", a);
	
	// for network layer
	for(i=strlen(a);i>=0;i--)
	{
		a[i+2]=a[i];
	}
	a[1]='H';
	a[0]='N';
	printf("\nThe string after network layer is: ");
	printf("%s", a);	
	
	//for data link layer
	char s[10][13];
	n= strlen(a)/10;
	for (j=0;j<=n;j++)
	{
		s[j][0]='D';
		s[j][1]='H';
		s[j][2]='1'+j;
		for(k=3;k<13;k++)
		{
			s[j][k]=a[10*j + k-3];
		}
	}
	printf("\nThe frames after data link layer is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<13;j++)
		{
			printf("%c", s[i][j]);
		}
		printf("\n");
	}
	puts(s[i]);
	
	return 0;
}
