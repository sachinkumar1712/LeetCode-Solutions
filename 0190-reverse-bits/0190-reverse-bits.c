int reverseBits(int n) {
    long long rev = 0;
    for(int i=0;i<32;i++){
      int bit = n & 1;
      rev = rev << 1;
      rev = rev | bit ;
      n = n>>1;
    }
    return rev;
}