class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        long long div=labs(dividend),dvs=labs(divisor),ans=0;
        int sign=dividend>0 ^divisor>0 ?-1:1;
        while(div>=dvs){
            long temp=dvs,m=1;
            while(temp<<1 <= div){
                temp=temp<<1;
                m=m<<1;
            }
            div=div-temp;
            ans+=m;
        }
        return sign *ans;
    }
};