class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int w,h,vol=0;
        while(i<j){
            h=min(height[i],height[j]);
            w=j-i;
            vol=max(vol,(h*w));
            if(height[i]<height[j]){
                i++;
            } else{
                j--;
            }
        }
        return vol;
    }
};