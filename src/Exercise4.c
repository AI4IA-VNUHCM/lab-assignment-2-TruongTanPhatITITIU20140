/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0 
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int half = argc / 2;

	//chia làm 2 phần	
	//sắp xếp bên trái
	int temp;
    for(int i = 0; i < half - 1; i++){
        for(int j = i + 1; j < half/2; j++){
            if(test_array[i] > test_array[j]){
                // đổi vị trí
                temp = test_array[i];
                test_array[i] = test_array[j];
                test_array[j] = temp;        
            }
        }
		
    }
	//sắp xếp bên phải
	int temp2;
   for (int i = half ; i < argc - 1; i++)
	{
		for (int j = i + 1; j < argc ; j++)
		{
			if (test_array[i] < test_array[j])
			{
				int temp2 = test_array[i];
				test_array[i] = test_array[j];
				test_array[j] = temp2;
			}
		}
	}
	//gộp mảng
	for(int a=0; a < argc; a++) {
		printf(" %d",test_array[a]);
	}
	return 0;
}
