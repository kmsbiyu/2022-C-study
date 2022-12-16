#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define STD_FILE "C:\\Users\\user\\Desktop\\test1.txt"
noStruct(){
	int id1, id2;
	char name1[10], name2[10];
	int score1, score2;
	
	id1=10601;
	id2=10502;
	strcpy(name1,"A");
	strcpy(name2,"X");
	strcat(name1,"님");
	strcat(name2,"님"); 
	
	score1=90;
	score2=100;
	
	printf("%d %s %d\n",id1,name1,score1);
	printf("%d %s %d\n",id2,name2,score2);
}

useStruct(){
	struct student{
		int id;
		char name[10];
		int score;
	};
	
	struct student s1 = {7,"A",100};
	struct student s2 = {8,"X",80};
	
	printf("%d %s %d\n",s1.id,s1.name,s1.score);
	printf("%d %s %d\n",s2.id,s2.name,s2.score);
}

useStructArray(){
	struct student{
		int id;
		char name[10];
		int score;
	}robot[100];
	
	int i;
	char temp[5];
	srand(time(NULL));
	FILE *fp =fopen( STD_FILE , "w");//write
	
	for(i=0;i<100;i++){
		robot[i].id=10301+i;
		strcpy(robot[i].name,"A");
		char temp[5];
		itoa(i+1,temp,10);
		strcat(robot[i].name,temp); //int 를 ascii :itoa
		srand(time(NULL));
		robot[i].score=rand()%100+1;
	}
	
	for(i=0;i<100;i++){
		printf("%d %s %d\n",robot[i].id,robot[i].name,robot[i].score);
		fprintf(fp,"%d %s %d\n",robot[i].id,robot[i].name,robot[i].score);
	}
	fclose(fp);
}

filetest(){
	//파일 쓰기 
	FILE *fp =fopen("C:\\Users\\user\\Desktop\\test1.txt", "w");//write
	
	fprintf( fp, "%s %d", "김민성", 100);
	
	fclose(fp); 
	//파일 읽기 
	fp =fopen("C:\\Users\\user\\Desktop\\test1.txt", "r");//write
	char name[10];
	int score;
	fscanf(fp,"%s %d",name,&score);
	fclose(fp);
	
	printf("%s %d\n",name,score);
}

readfile(){
	struct student{
		int id;
		char name[10];
		int score;
	}robot;
	
	FILE *fp = fopen(STD_FILE,"r");
	while( !feof(fp)){//end of file
		fscanf(fp,"%d %s %d",&robot.id,robot.name,&robot.score );
		printf("[%s] %5d %5d\n",robot.name,robot.id,robot.score);
		}
	fclose(fp);
}




main(){
	//구조체가 없을 때 
	//noStruct();
	//구조체 활용 
	//useStruct();
	//구조체 배열 활용 
	useStructArray();
	
	//filetest();
	readfile();
}
