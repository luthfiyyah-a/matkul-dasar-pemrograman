#include <stdio.h>

int find_sum(int n){
	
	// base case, akan mengembailkan nilai 1 jika n =1
	if(n == 1) return 1; 
	
	// recursive case, jika n belum mencapai nilai 0, program akan memanggil dirinya lagi untuk mengembalikan nilai
	else return (n + find_sum(n-1));
	
}
