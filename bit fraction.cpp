#include<stdio.h>
#include<string.h>
int main()
{
	int a[100],n,i,x,z[5],c=0;
	printf("Enter number of binary numbers: ");
	scanf("%d", &n);
	
	printf("\n Enter the Stream of binary numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x!=1&& x!=0)
		{
			printf("Wrong Value printed. Please Enter agian.......\n");
			i--;
			continue;
		}
		a[i]=x;
		
	}
	printf("\nYou Entered: ");
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
	
	//Converting 6'th 1 to 0
	int count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			count++;
		}
		if(a[i]==0)
		{
			count=0;
		}
		if(count==6)
		{
			a[i]=0;
			z[c]=i;
			c++;
			count=0;
		}
	}
	printf("\nThe binary sequence is: ");
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
	
	//Entering the bit fraction at end
	a[n]=a[n+7]=0;
	a[n+1]=a[n+2]=a[n+3]=a[n+4]=a[n+5]=a[n+6]=1;
	
	//Entering the bit fraction from the start
	for(i=n+7;i>=0;i--)
	{
		a[i+8]=a[i];
	}
	a[0]=a[7]=0;
	a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=1;
	
	printf("\nThe bit sequence during transfer is: ");
	for(i=0;i<n+16;i++)
	{
		printf("%d", a[i]);
	}
	
	int s[50];
	printf("\nThe bit sequence after recieving is: ");
	for(i=0;i<n;i++)
	{
		s[i]=a[i+8];
	}
	
	for(i=0;i<c;i++)
	{
		count=z[i];
		s[count]=1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d", s[i]);
	}
	
	
	return 0;
}
