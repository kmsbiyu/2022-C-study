#include <stdio.h>
main(){
	/*	int f=1;
	printf("*** 2�� ***\n");
	
	while(f<=9){
		printf("2 * %d = %d\n",f,2*f);
		f++;
	}
	printf("\n==============================\n");
	
		int k=1,dan2;
	printf("�� ��?");
	scanf("%d",&dan2);
	printf("*** %d�� ***\n",dan2);
	
	while(k<=9){
	printf("2 * %d = %d\n",k,2*k);
	k++;
	}
	printf("\n==============================\n");*/
	
	int l=1, dan;
	
	while(1){
		l=1;
		
	printf("�� ��?[0 �Է½� �����մϴ�.]");
	scanf("%d",&dan);
	
	if(dan==0){
		break;
	}
	
	printf("\n *** %d�� ***\n",dan);
	
	while(l <= 9){
		printf("%d * %d = %d\n",dan,l,dan*l);
		l++;
	}
	}
	printf("\n==============================\n");
	
	/*int dan,h=9;
	printf("�� ��? ");
	scanf("%d",&dan);
	
	while(h>=1){
		printf("%d * %d = %d\n",dan,h,dan*h);
		h--;
	}
	printf("\n==============================\n");*/
	
	int count = 1;
	
	while (1){
		printf("%d ",count);
		count++;
		
		if(count > 10) break;
	}
	printf("\n==============================\n");
	
	int i=1,sum=0;
	while (1){
		sum += i;
		i += 2;
		if(i>100) break;
	}
	printf("1���� 100���� Ȧ���� �� = %d\n",sum);
	printf("\n==============================\n");
	
}
