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
		printf("�ݺ����� : %d \n",num);
		num++;
	}
	printf("�ݺ��� ���� �� num = %d \n", num);
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
	printf("1 ���� 10 ������ �� : %d",sum);
	printf("\n==============================\n");
}
