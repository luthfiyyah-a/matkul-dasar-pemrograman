#include <stdio.h>

int main(){
	
	int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	
//	printf("arr = %d\n", *arr+1);
//	
//	int *p = arr;
//	printf("p = %d\n", p);
//	printf("*p = %d\n", *p);
//	p++;
//	printf("p = %d\n", p);
//	printf("*p = %d\n", *p);
//	
	int (*ptr)[3] = &arr;
	int i;
	
	for(i=0; i<3; i++){
	printf("ptr[%d] = %d\n", i,(*ptr)[i]);
	}
	
	printf("%d\n", (*ptr)+1);
//	
//	printf("**ptr = %d\n", *ptr);
//	printf("ptr = %d\n", ptr);
//	ptr++;
//	printf("**ptr = %d\n", *ptr);
//	printf("ptr = %d\n", ptr);
	
//	int tes[3];
//	tes[3] = arr;
//	int i;
//	
//	for(i=0; i<3; i++){
//	printf("tes[%d] = %d\n", i, tes[i]);
//	}
	
}
