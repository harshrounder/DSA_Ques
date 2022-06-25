class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size()-1;
        int p=prices[0];
        for(int i=1;i<=n;i++){
            if(prices[i]<p){
                p=prices[i];
            }
            else{
                ans = max(ans,prices[i]-p);
            }
        }
        
        return ans;
    }
};
