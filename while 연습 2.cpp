#include <stdio.h>
main(){
	/*	int d=1,e,sum2=0;
	
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d",&e);
	
	while (d<=e){
		sum2 = sum2 + d;
		d++;
	}
	printf("1부터 %d까지의 합은 %d입니다\n",e,sum2);
	printf("\n==============================\n");*/
	
	
		int d,e,sum2=0;
		int start;
	
	printf("합을 구할 시작 수 입력 : ");
	scanf("%d",&d);
	start = d; //start에 d값을 저장해두는것 
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d",&e);
	
	while (d<=e){
	sum2 = sum2 + d;
	d++;
	}
	printf("%d부터 %d까지의 합은 %d입니다\n",start,e,sum2);
	printf("\n==============================\n");
}
