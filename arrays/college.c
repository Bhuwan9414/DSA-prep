#include <stdio.h>
// int main(){
// 	char a;
// 	printf("Enter any char!");
// 	scanf("%c",&a);
// 	a=a-('b'-'B');
// 	printf("%c",a);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     char str[10];
//     scanf("%s", str);
//     printf("%4s",str);
//     return 0;
// }

// int main(){
// 	int i;
// 	for(i=0;i<128;i++)
// 		printf("\n%d = %c",i,i);

// 		return 0;
// }

// #include<stdio.h>
// int main(){
// 	int a=10;
// 	char b='A';
// 	int arr[5]={1,2,3};
// 	float c=3.5;
// 	double d=10.01;
// 	printf("\nSize of int[] is  = %d,sizeof(arr));
// 	printf("\nSize of int is  = %d and value =%d",sizeof(a),a);
// 	printf("\nSize of char is  = %d and value =%c",sizeof(b),b);
// 	printf("\nSize of float is  = %d and value =%f",sizeof(c),c);
// 	printf("\nSize of double is  = %d and value =%lf",sizeof(d),d);
// return 0;
// }

// Operators
// Relational operator
//  int main(){
//  	int a=50,b=6,x;
//  	x=a>b;
//  	printf("\nX = %d ",x);
//  	x=a<b;
//  	printf("\nX = %d ",x);
//  return 0;
//  }

int main()
{
	int i = 040, j = 0x20, k, l, m;
	k = i | j;
	l = i & j;
	m = k ^ l;
	printf("%d, %d	, %d, %d, %d\n", i, j, k, l, m);
	return 0;
}