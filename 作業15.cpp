#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int j,l;
	printf("請輸入現在幾點");
	scanf("%d",&j);
	printf("請輸入現在幾分");
	scanf("%d",&l);
	if((j==7&&l>=30)||(j>7&&j<17))
	printf("上學時間");
	else
	printf("放學時間");
	system("pause");
	return 0;
}
