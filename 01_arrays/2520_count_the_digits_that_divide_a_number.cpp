class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int original=num;
        while(num>0){
            int digits=num%10;
            if(original%digits==0) count++;
            num=num/10;
        
      }
      return(count);
        
    }
};
