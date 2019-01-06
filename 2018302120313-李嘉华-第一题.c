#include<stdio.h>
#define N 10
void insert(int a[N],int b[N],int n){
	b[n] = a[n];}
void sort(int a[N], int b[N]) {
	int n,k,m,t;
	for (n = 0; n < N; n++) {
		insert(a, b, n);
		if (n == 0)
			continue;
		for (k = n; k > 0; k--) {
			for (t = 0; t < k; t++) {
				if (b[t + 1] < b[t]) {
					m = b[t];
					b[t] = b[t + 1];
					b[t + 1] = m;}
			}
		}
	}
}
void inputArray(int a[N]) {
	int n;
    for (n = 0; n < N; n++) {
		scanf("%d",&a[n]);}
}
void outputArray(int b[N]) {
	int n;
	printf("这个数组的正确排序：\n");
	for (n = 0; n < N; n++) {
		printf("%d\n", b[n]);}
}
int main() {
	int n, a[N] = {0}, b[N] = {0};
	printf("输入十个正数：\n");
	inputArray(a);
	sort(a,b);
	outputArray(b);}
