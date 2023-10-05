#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;

	printf("정수 하나를 입력하시오 : ");
	scanf("%d", &a);

	if(a>0){
		printf("절댓값은 %d입니다.", a);
	}
	else if (a==0){
		printf("0입니다.");
	}
	else{
		printf("절댓값은 %d입니다.", -a);
	}

	return 0;
}
