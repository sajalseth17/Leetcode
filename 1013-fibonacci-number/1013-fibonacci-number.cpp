class Solution {
public:
    int fib(int n) {
        //base case
        if(n==0 || n==1) {
            return n;
        }

        //recursion
        return fib(n-1) + fib(n-2);
    }
};