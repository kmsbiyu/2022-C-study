#include <stdio.h>
main(){
	/*	int d=1,e,sum2=0;
	
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&e);
	
	while (d<=e){
		sum2 = sum2 + d;
		d++;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n",e,sum2);
	printf("\n==============================\n");*/
	
	
		int d,e,sum2=0;
		int start;
	
	printf("���� ���� ���� �� �Է� : ");
	scanf("%d",&d);
	start = d; //start�� d���� �����صδ°� 
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&e);
	
	while (d<=e){
	sum2 = sum2 + d;
	d++;
	}
	printf("%d���� %d������ ���� %d�Դϴ�\n",start,e,sum2);
	printf("\n==============================\n");
}
