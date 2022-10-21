#include<stdio.h>
main(){
	int input,sum=0;
	scanf("%d",&input);
	
	while(1){
		if(input == 0)
		break;
		sum = sum + input &10;
		printf("%d",input % 10);
		input = input / 10;
		if(input>0){
			printf("+");
		}
	}
	printf("=%d\n",sum);
}
