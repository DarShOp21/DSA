class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int start = 0 , end = 0 , mid , ans ;
            long long sum = 0;
            for(int i = 0 ; i < piles.size() ; i++){
                sum += piles[i];
                end = max(end , piles[i]);
            }
            start = sum/h;
    
            if(!start)
            start = 1;
    
            while(start <= end){
                mid = start + (end - start)/2;
                int totalTime = 0;
                for(int i = 0 ; i < piles.size() ; i++){
                    totalTime += piles[i]/mid;
                    if(piles[i]% mid){
                        totalTime++;
                    }
                }
                if(totalTime <= h){
                    ans = mid;
                    end = mid - 1;    
                } else {
                    start = mid + 1;
                }
            }
            return ans;
        }
    };