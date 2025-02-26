class Solution {
public:
    bool isPalindrome(int x) {
      int y=x;
      long reversed=0; 
while( x>0){
    int rem=x%10;
    reversed=(reversed*10)+rem;
   x=x/10;
}
return y==reversed;
    }
};