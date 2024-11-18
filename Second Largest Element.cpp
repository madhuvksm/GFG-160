Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.


class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) {
            return -1;  // Return -1, since there's no second largest element
        }

        int largest = INT_MIN;
        int second_largest = INT_MIN;
        
        for( int i=0; i<arr.size(); i++){
            if(arr[i] > largest){
                second_largest=largest;
                largest = arr[i];
            }
            else if (arr[i] > second_largest && arr[i] < largest){
                second_largest = arr[i];
            }
        }
        
        if(second_largest == INT_MIN ){
            return -1;
        }
        else{
            return second_largest;
        }
    
    }
};
