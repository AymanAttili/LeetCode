class Solution {
public:
    int ib[31];
    int fib(int n) {
        if(n==0)
            return ib[n]=0;
        if(n==2 || n==1)
            return ib[n]=1;
        if(ib[n]>0)
            return ib[n];
        return ib[n]=fib(n-1)+fib(n-2);
    }
};