class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int maxOfLeft[size];
        
        maxOfLeft[0]= height[0];
        for(int i =1;i<size;i++){
            maxOfLeft[i] = max(maxOfLeft[i-1],height[i]);
        }
        
        int maxOfRight[size];
        maxOfRight[size-1]=height[size-1];
        for(int i = size-2;i>=0;i--){
            maxOfRight[i] = max(maxOfRight[i+1], height[i]);
        }
        int waterTrapped = 0;
        for(int i =0;i<size;i++){
            waterTrapped += min(maxOfLeft[i],maxOfRight[i]) - height[i];
        }
        return waterTrapped;
        
        
    }
};