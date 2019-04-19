#include<stdio.h>
int main(){
	int a,i,j;
	printf("输入三角形行数:");
	scanf("%d",&a);
	for(i=0;i<=a-2;i++){
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<=a-2;i++){
		for(j=1;j<=i+a;j++){
			if(j==a-i){
				printf("/");
			}
			else if(j==a+i){
				printf("\\");				
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=1; i<=2*a-1; i++){
	printf("-");
	}
}

