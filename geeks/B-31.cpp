
//Sequences of given length where every element is more than or equal to twice of previous
#include <stdio.h> 

/*
推动态规划之前的递归，如果某个状态往下有多条支路，那么一般可以优化，合并支路。 
比如：m=10, n=4 
一开始的想法： 
m=10, n=4; m=9, n=4; m=8, n=4 最后一个数分别选10, 9, 8 
按照这个逻辑，m=9, n=4 再拆分，会再拆出来 m=8, n=4，和上面的就重复了。 
所以优化一下，最后一个数选10，最后一个数不选10。 
最后一个数选10，那就是 m=5，n=3支路。 
最后一个不选10，那就是 m=9，n=4支路。然后递归下去。elegant
*/
int getTotalNumberOfSequences(int m, int n) 
{ 
		// define T and build in bottom manner to store 
		// number of special sequences of length n and 
		// maximum value m 
		int T[m+1][n+1]; 
		for (int i=0; i<m+1; i++) 
		{ 
			for (int j=0; j<n+1; j++) 
			{ 
				// Base case : If length of sequence is 0 
				// or maximum value is 0, there cannot 
				// exist any special sequence 
				if (i == 0 || j == 0) 
					T[i][j] = 0; 

				// if length of sequence is more than 
				// the maximum value, special sequence 
				// cannot exist 
				else if (i < j) 
					T[i][j] = 0; 

				// If length of sequence is 1 then the 
				// number of special sequences is equal 
				// to the maximum value 
				// For example with maximum value 2 and 
				// length 1, there can be 2 special 
				// sequences {1}, {2} 
				else if (j == 1) 
					T[i][j] = i; 

				// otherwise calculate 
				else
					T[i][j] = T[i-1][j] + T[i/2][j-1]; 
			} 
		} 
		return T[m][n]; 
} 

// Driver Code 
int main() 
{ 
	int m = 10; 
	int n = 4; 
	printf("Total number of possible sequences %d", 
				getTotalNumberOfSequences(m, n)); 
	return 0; 
} 
