					BINARY SEARCH :

					KEY POINTS :

-> The binary search algorithm is based on the divide and conquer approach.
-> The Divide and Conquer paradigm is generally applicable on problems which
   can be divided into smaller "disjoint" subproblems.
-> Divide and Conquer Approach:

   * Divide the problem into smaller subproblems.
   * Solve them Recursively.
   * Merge them.

-> Some common instances where divide and conquer approach is applicable are
   binary search, merge sort and quick sort.

-> Pre-requisites for  BINARY-SEARCH to work are as follows:
	* Array must be sorted. (In the following algorithm it is assumed that the
	  array is sorted in non-decreasing order).

->  ALGORITHM :

  (1) int BINARY-SEARCH ( int A[], int key )
  (2) 		int lb = 1              // Point to the start of the array
  (3) 		int ub = A.size()       // Assumed we have an attribute to store array size
  (4) 		int ind = -1            // Index to return to calling function
  (5) 								// ind is initialized -1 for further checking to see if element was found or not
  (6) 		while lb < = ub
  (7)			int mid = floor((lb+ub)/2)    // For even better time complexity we could have used right shift operator
  (8) 			if A[mid] = key
  (9) 				ind = mid
  (10) 				break                    // A typical jump statement to avoid further iterations
  (11)			else if A[mid] < key
  (12)				lb = mid + 1
  (13)			else if A[mid] > key
  (14)				ub = mid - 1
  (15)		return ind 				// ind returns -1 if element was not found otherwise it returns corresponding index


->  WORKING:

   Let us take an example:
   Suppose we have a sorted array {1,4,5,7,11,13,17}
   							Index= 1,2,3,4,5 ,6 ,7
   and key = 4
   Then by line 1,2 and 3 we have:
   						lb = 1 ,
   						ub = 7 ,
   						ind = -1
   The condition for line 6 is true ,since 1 < = 7
   			so we enter the loop
   			and mid = (1+7)/2 = 4
   			and A[mid] = A[4] = 7 and 7!=4;
   			Since conditon on line 13 is true,
   			so we have ub = 3,
   Again condition on line 6 is true ,since 1 < = 3
   			so we enter the loop
   			and mid = (1+3)/2 = 2
   			and A[mid] = A[2] = 4 = key
   			hence element is found
   			and ind = mid = 2
   			and line 10 terminates the while loop
   Finally line 15 is executed which returns the value of ind to the calling function.

->  ANALYSIS:
	
   Time Complexity = O(log N) , where N is the size of input

-> Recommended Practice Problems : 
  	1) https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-soap-mystery/
  	2) https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/stones-love/
  	3) https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/
  	4) https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/problem-1-103/
  	5) https://www.codechef.com/JUNE18A/problems/VSN