#include <stdio.h>
#include <math.h>

int count1=0;
int count2=0;
int opcount=0;
void gcd(int m,int n){
	// printf("int gcd function");
	int fac1[100];
	int fac2[100];
	while(m%2==0){
		m=m/2;
		fac1[count1]=2;
		count1=count1+1;
	}

	for(int i=3;i<sqrt(m);i=i+2)
	{
		printf("%d",m);
		while(m%i==0)
		{
			fac1[count1]=i;
			count1=count1+1;
			m=m/i;
		}
	}
	if(m>2)
		fac1[count1++]=m;



	while(n%2==0){
		n=n/2;
		fac2[count2]=2;
		count2=count2+1;
	}

	for(int i=3;i<sqrt(n);i=i+2)
	{
		while(n%i==0)
		{
			fac2[count2]=i;
			count2=count2+1;
			n=n/i;
		}
	}
	if(n>2)
		fac2[count2++]=n;

	
	for(int i=0;i<count1;i++)
	{
		printf("%d ",fac1[i]);
	}
	printf("\n");
	// for(int i=0;i<count2;i++)
	// {
	// 	printf("%d ",fac2[i]);
	// }

	int i=0;
	int j=0;
	// int min=count1<count2?count1:count2;
	int p=1;
	for(int i=0;i<count1;i++)
	{
		for(j=0;j<count2;j++)
		{
			if(fac1[i]==fac2[j] && fac1[i]!=-1)
			{
				p=p*fac1[i];
				fac1[i]=-1;
			}

		}
	}
	printf("opcount: %d",opcount);
	printf("Gcd: %d",p);
}

int main(){
	int m,n;
	printf("Enter 2 nos");
	scanf("%d%d",&m,&n);
	gcd(m,n);
}