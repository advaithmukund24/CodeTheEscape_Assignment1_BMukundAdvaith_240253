# CodeTheEscape_Assignment1_BMukundAdvaith_240253

Move Zeroes to End
Problem statement
Given an unsorted array of integers, you have to move the array elements in a way such that all the zeroes are transferred to the end, and all the non-zero elements are moved to the front. The non-zero elements must be ordered in their order of appearance.

For example, if the input array is: [0, 1, -2, 3, 4, 0, 5, -27, 9, 0], then the output array must be:

[1, -2, 3, 4, 5, -27, 9, 0, 0, 0].

Expected Complexity: Try doing it in O(n) time complexity and O(1) space complexity. Here, ‘n’ is the size of the array.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
2
7
2 0 4 1 3 0 28
5
0 0 0 0 1
Sample Output 1:
2 4 1 3 28 0 0
1 0 0 0 0
The explanation for Sample Output 1 :
In the first testcase, All the zeros are moved towards the end of the array, and the non-zero elements are pushed towards the left, maintaining their order with respect to the original array.

In the second testcase, All zero are moved towards the end, hence the only non-zero element i.e 1 is in the starting of the array 
Sample Input 2:
2
5
0 3 0 2 0
4
0 0 0 0
Sample Output 2:
3 2 0 0 0
0 0 0 0
C++ (g++ 5.4)
123456789101112131415161718
void pushZerosAtEnd(vector<int> &arr) 
{
	int len = arr.size();
	int x=0;
	for (int i=0; i<len; i++){
		if (arr[i]==0){
			continue;
		}
		else{
			arr[x]=arr[i];
			x++;
		}
	}
	while (x< len){
		arr[x] = 0;
		x++;
	}
}
