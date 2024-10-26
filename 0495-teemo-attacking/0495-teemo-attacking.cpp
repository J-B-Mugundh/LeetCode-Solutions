class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int poision = 0;
        for(int i = 0; i < timeSeries.size() - 1; i++){
            if(timeSeries[i] + duration < timeSeries[i + 1]){
                poision += duration;
            }
            else
                poision += (timeSeries[i + 1] - timeSeries[i]);
        }
        poision += duration;
        
        return poision;
    }
};