#include <stdio.h>

int main(){
	int a,i;
	int sum =0;
	scanf("%d",&a);
	
	for(i=0;i<=a; i+=2){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
	
}
