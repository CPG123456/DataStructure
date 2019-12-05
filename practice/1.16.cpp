#include <stdio.h>
/*
题1.16
将3个整数按从大到小顺序输出 
*/
void Alog_1_16(int *x, int *y, int *z);

int main(int argc, char* argv[]){
	int x, y, z;
	x = 2;
	y = 7;
	z = 3;
	printf("作为示范，设定输入为：%d %d %d...\n", x, y, z);
	
	//进行排序 
	Alog_1_16(&x, &y, &z);
	
	printf("将其从大到小排序后为：%d %d %d...\n", x, y, z);
	return 0;
} 
void Alog_1_16(int *x, int *y, int *z){
	int tem;
	//确保x>=y 
	if(*x < *y){
		tem = *x;
		*x = *y;
		*y = tem;
	}
	//确保y>=z 
	if(*y < *z){
		tem = *y;
		*y = *z;
		*z = tem;
		//确保x>=y 
		if(*x < *y){
			tem = *x;
			*x = *y;
			*y = tem;
		}
	}
	
}
