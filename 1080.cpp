#include <stdio.h>

int main(){
	int i,n;
	int sum = 0;
	
	scanf("%d",&n);
	for(i=1;;i++){
		sum+=i;
		if(sum>=n) break;
	}
	printf("%d",i);
	
	return 0;
	
}
