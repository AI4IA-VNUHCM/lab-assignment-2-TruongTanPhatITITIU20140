/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);	
	//Your codes here
	if(testcase ==1) return 0;
	// loop while chia cho 2 đến khi k chia được nữa (in 2 mỗi lần chạy)
	while(testcase % 2 == 0)
	{ 
		printf(" %d *",2);
		testcase = testcase /2;
		
	}
	// loop for chia cho số từ 3 tới căn n (đk check số prime)
	 for (int i = 3; i <= sqrt(testcase); i = i+2)
    {
        // While i divides n, print i and divide n
		// in ra số prime chia hết cho n
        while (testcase % i == 0)
        {
            printf(" %d *", i);
            testcase = testcase / i;			
        }
    }
	//neu n la so prime lon hon 2
	if (testcase > 2)

		printf (" %d ", testcase);
	
	return 0;
}
