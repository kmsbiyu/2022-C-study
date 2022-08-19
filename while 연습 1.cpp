#include <stdio.h>
main(){
	int n=0;
	while (n<5){
		printf("Hi~\n");
		n++;
	} 
	printf("n=%d",n);
	printf("\n==============================\n");
	
	int i=0;
	while (i<10){
		printf("#");
		i++;
	}
	printf("\n==============================\n");
	
	int num=1;
	while(num<6){
		printf("반복내용 : %d \n",num);
		num++;
	}
	printf("반복문 종료 후 num = %d \n", num);
	printf("\n==============================\n");
	
	int b=30;
	while(b>=10){
		printf("%d ",b);
		b=b-2;
	}
	printf("\n==============================\n");
	
	int c=1,sum=0;
	while (c<=10){
		sum = sum + c;
		c++;
	}
	printf("1 부터 10 까지의 합 : %d",sum);
	printf("\n==============================\n");
}
