#include <stdio.h>
main(){
	int i=0, sum=0;
	while(1){
		printf("%d ",i);
		i=i+3;
		
		if(i>100) break;
	}
	printf("sum=%d",sum);
	
	/*int a=0, sum2=0;
	while(1){
		i++;
		if(i/3==0){
			printf("%d ",a);
		}
	}*/
}
