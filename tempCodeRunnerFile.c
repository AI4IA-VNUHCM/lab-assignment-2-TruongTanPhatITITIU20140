#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n ;
    scanf ("%d",n);
	int result;
	//Your codes here
	//n is odd
	if(n % 2 == 1) {
		for(int i = n; i > 0; i - 2){
			result = result + i;
		}
	}
	//n is even
	else if(n % 2 == 0) {
		for(int j = n; j > 0; j - 2){
			result = result + j;
		}
	}
	printf("%d", result);
	return 0;
}