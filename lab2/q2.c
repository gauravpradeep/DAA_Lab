#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* primfacts(int n){

	int* factors=(int*)malloc(100*sizeof(int));
	int t=n;
	int count=0;

	while(n%2==0){
		n=n/2;
		count++;
		factors[0]=count;
		factors[count]=2;
	}
	for(int i=3;i<n;i=i+2)
	{
		while(n%i==0)
		{
			count++;
			factors[count]=i;
			n=n/i;
		}
	}
	if(n>2){
		count++;
		factors[0]=count;
		factors[count]=n;
	}
	return factors;
}
void gcd(int* a, int* b){
	int gcd=1;
	for(int i=1;i<=a[a[0]];i++){
		for(int j=1;j<=b[b[0]];j++){
			if(a[i]==b[j] && b[j]!=-1){
				gcd*=a[i];
				a[i]=-1;
				b[j]=-1;
				break;
			}
		}
	}
	printf("%d \n",gcd);
}

int main(){
	int* a=primfacts(39);
	int* b=primfacts(26);
	gcd(a,b);
	// for(int i=1;i<=a[a[0]];i++){
	// 	printf("%d ",a[i]);
	// }
	// printf("\n");
}
