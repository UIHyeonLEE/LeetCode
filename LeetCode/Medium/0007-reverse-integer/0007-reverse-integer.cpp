class Solution {
public:
    int reverse(int x) {
        double total = 0;
        
        while(x){
            total = total * 10 + (x%10);  
            x/=10;
        }
        
        return (total >= (double)INT_MAX || total <= (double) INT_MIN) ? 0 : total;
    }
};