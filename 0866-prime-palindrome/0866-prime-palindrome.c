bool isPrime(int n){
 if(n<2) return false;
  for(int i=2;i*i<=n;i+=1){
    if(n%i==0){
        return false;
    }
  }
  return true;
}
bool isPalindrome(int n){
    int temp = n, rev = 0;
    while(temp != 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int primePalindrome(int n) {
      if(10000000 <= n && n <= 99999999){
       return 100030001;
     }
  
    if(n<=2) return 2;
    if(8 <= n && n <= 11) return 11;
    while(1){
        if(isPalindrome(n) && isPrime(n)){
            return n;
        }
        n++;
    }
  
}