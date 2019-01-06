//兰德尔数
#include<stdio.h>
	#include<math.h>
	#define N 9
	int f(int x,int k){
		if(k<1){
		  return 1;
		}else
		  return x*f(x,k-1);}
	int main(){
		int k,j,a[N],b,e,m,n,w;
		for(m=100;m<1000000000;m++){
			n = m;
			for(k=1;k<=N;k++){
				n = n/10;
				if(n==0)
				break;}
			w = m;
			for(j=0;j<k;j++){
				a[j]=w%10;
				w=w/10;}
			for(b=0,e=0;b<k;b++){
				a[b] = f(a[b], k);
				e = e + a[b];}
			if(e==m){
				printf("%d为一个%d位兰德尔数\n",e,k);
			}
		}
	}
