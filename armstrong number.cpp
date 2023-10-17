For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371

Example 1:

Input: N = 153
Output: "Yes"
Explanation: 153 is an Armstrong number
since 13 + 53 + 33 = 153.
Hence answer is "Yes".
Example 2:

Input: N = 370
Output: "Yes"
Explanation: 370 is an Armstrong number
since 33 + 73 + 03 = 370.
Hence answer is "Yes".


  solution:

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
          int digit=0;
        int num = n;
        int sum = 0;
        while(n != 0)
        {
            digit = n%10;
            sum = sum + pow(digit,3);
            n = n/10;
        }
        return (sum==num)?"Yes":"No";
    
    }
};
