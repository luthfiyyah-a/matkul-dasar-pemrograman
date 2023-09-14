#include <stdio.h>

int fast_fib(int n){
	
	if(n == 1) return 1, 1;
	
	else return ((fast_fib(n-1) + fast_fib(n)), fast_fib(n));
	
}
