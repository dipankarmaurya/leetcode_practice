class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count[50000]={0};
        for(int i=0;i<n;i++){
            count[nums[i]]+=1;
            
        }
       int  max=0;
        int ans=0;
        for(int i=0;i<5000;i++){
            if(count[i]>max){
                ans=i;
                max=count[i];}     
        }
       return ans; 
    }
};
