#include <stdio.h>
/*
��1.16
��3���������Ӵ�С˳����� 
*/
void Alog_1_16(int *x, int *y, int *z);

int main(int argc, char* argv[]){
	int x, y, z;
	x = 2;
	y = 7;
	z = 3;
	printf("��Ϊʾ�����趨����Ϊ��%d %d %d...\n", x, y, z);
	
	//�������� 
	Alog_1_16(&x, &y, &z);
	
	printf("����Ӵ�С�����Ϊ��%d %d %d...\n", x, y, z);
	return 0;
} 
void Alog_1_16(int *x, int *y, int *z){
	int tem;
	//ȷ��x>=y 
	if(*x < *y){
		tem = *x;
		*x = *y;
		*y = tem;
	}
	//ȷ��y>=z 
	if(*y < *z){
		tem = *y;
		*y = *z;
		*z = tem;
		//ȷ��x>=y 
		if(*x < *y){
			tem = *x;
			*x = *y;
			*y = tem;
		}
	}
	
}
