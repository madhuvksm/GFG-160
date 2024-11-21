Given an unsorted array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

Note: Consider the array as circular.

Examples :

Input: arr[] = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
Explanation: when rotated by 3 elements, it becomes 8 10 12 14 16 18 20 2 4 6.
Input: arr[] = [7, 3, 9, 1], d = 9
Output: [3, 9, 1, 7]
Explanation: when we rotate 9 times, we'll get 3 9 1 7 as resultant array.

Approach 1:
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        for(int i=0; i<d; i++){
            int first=arr[0];
            for(int j=0; j<arr.size(); j++){
                arr[j] = arr[j+1];
            }
            
            arr[arr.size()-1] = first;
        }
 }

};

T.C : O(d*n)
S.C : O(1)

Approach 2:
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
    int n = arr.size();

    // Handle case when d > n
    d %= n;
  
    // Storing rotated version of array
    vector<int> temp(n);

    // Copy last n - d elements to the front of temp
    for (int i = 0; i < n - d; i++)
        temp[i] = arr[d + i];

    // Copy the first d elements to the back of temp
    for (int i = 0; i < d; i++)
        temp[n - d + i] = arr[i];

    // Copying the elements of temp in arr
    // to get the final rotated vector
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
 }

};

T.C : O(n)
S.C : O(n)
