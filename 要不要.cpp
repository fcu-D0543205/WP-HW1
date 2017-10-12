#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main(){
 	int i, rnd,t;
 	srand(time(NULL));
 	rnd = rand()%100+1;
 	printf("%d\n", rnd);

 	if(rnd%2==0) printf("GO!!!!!!!!!");
 	else printf("No");

 	system("pause");
 	return 0;
 }
