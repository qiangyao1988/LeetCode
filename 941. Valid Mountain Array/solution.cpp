class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()==0 || arr.size()==1) return false;
        int pointer = 1;
        while(pointer<arr.size()){
            if(arr[pointer-1]<arr[pointer]) pointer++;
            else break;
        }
        if(pointer==arr.size() || pointer==1) return false;
        
        while(pointer<arr.size()){
              if(arr[pointer-1]>arr[pointer]) pointer++;
              else break;
        }
        
        if(pointer==arr.size()) return true;
        
        return false;   
    }
};