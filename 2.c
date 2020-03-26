#include<stdio.h>
#define PI 3.14159265
int main(){
	int n;
	scanf("%d", &n);
	int r;
	int pr = 0;
	double s = 0;
	for(int i = 0; i<n; i++){
		scanf("%d", &r);
		if(i % 2 == 0){
			s = s + PI * (r*r - pr*pr);
		}
		pr = r;
	}
	printf("%0.5lf\n", s);
}
