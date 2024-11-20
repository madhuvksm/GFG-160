You are given an array of integers arr[]. Your task is to reverse the given array.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are 1 4 3 2 6 5. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is 5 6 2 3 4 1.
Input: arr = [4, 5, 2]
Output: [2, 5, 4]
Explanation: The elements of the array are 4 5 2. The reversed array will be 2 5 4.
Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.

Approach:1
  
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
         int left=0;
         int right = arr.size()-1;
         while(left < right){
             swap(arr[left], arr[right]);
             left++;
             right--;
         }
    }
};

T.C : O(n)
S.C : O(1)

Approach:2
void reverseArray(vector<int> &arr) {
    int n = arr.size();
    
    // Iterate over the first half and for every index i,
    // swap arr[i] with arr[n - i - 1]
    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
}

T.C : O(n/2) ~=  O(n)
S.C : O(1)
