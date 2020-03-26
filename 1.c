#include<stdio.h>
int main(){

	long long a, b = 0;
	int arr[10];
	int flag = 1;
	scanf("%lld", &a);
	flag = a > 0 ? 1 : -1;
	for(int i=1; i <=9; i++){
		scanf("%d", &arr[i]);
	}
	//printf("a = %lld\n", a);
	long long t = a * flag;
	long long n = 1; 
	while(t > n){
		n = n * 10;
	}
	//printf("n = %d\n", n);
	n = n / 10; 

	while(n > 0){
		//printf("b = %lld, t = %lld, n = %d\n", b , t, n);
		b = b + arr[t/n] * n;
		t = t - t/n * n;
		n = n / 10; 
	}
	printf("%lld\n", b * flag);
}
