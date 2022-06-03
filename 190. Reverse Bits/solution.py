class Solution:
    
    def reverseBits(self, n: int) -> int:
        return self.reverse(n, 0)
    
    def reverse(self, n: int, pos: int) -> int:
        
        if pos >= 31:
            return n
            
        last = n & 1
        ret = self.reverse(n>>1, pos+1) 
        
        ret += last<<(31-pos)
        
        return ret