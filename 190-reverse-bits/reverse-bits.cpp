class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       bitset<32> a(n);
       for(int i=0;i<32/2;i++){
           bool temp = a[i];
           a[i] = a[a.size()-1-i];
           a[a.size()-1-i] = temp;
       }
       return (uint32_t) a.to_ulong();
      
    }
};