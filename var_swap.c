#include <stdio.h>

int swap(int *a, int *b);
int main() {
	int m = 15;
	int n = 16;
	printf("Before swapping a:%d,b:%d\n",m,n);
	swap(&m,&n);
	printf("After swapping a:%d,b:%d\n",m,n);
}

int swap(int *a,int *b){
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}