/*             Print first n Fibonacci Numbers
               Level: Basic 

Link: https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/0


Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:

Input:
N = 5
Output: 1 1 2 3 5
Example 2:

Input:
N = 7
Output: 1 1 2 3 5 8 13
Your Task:
Your task is to complete printFibb() which takes single argument N and returns a list of first N Fibonacci numbers.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Note: This space is used to store and return the answer for printing purpose.*/

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long>k(n);
        k[0]=1;k[1]=1;
    for(int i=2;i<n;i++)
    {
    k[i]=k[i-1]+k[i-2];
    }
    return k;
        //code here
    }
};