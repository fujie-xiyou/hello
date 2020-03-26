#include<stdio.h>
int main(){

	int a, b = 0;
	int arr[10];
	int flag = 1;
	scanf("%d", &a);
	flag = a > 0 ? 1 : -1;
	for(int i=1; i <=9; i++){
		scanf("%d", &arr[i]);
	}
	int t = a * flag;
	int n = 1; 
	while(t > n){
		n = n * 10;
	}
	n = n / 10; 

	while(n > 0){
		b = b + arr[t/n] * n;
		t = t - t/n * n;
		n = n / 10; 
	}
	printf("%d\n", b * flag);
}
