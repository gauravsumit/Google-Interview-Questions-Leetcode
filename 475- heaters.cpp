int rheater[25010];

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        
        sort(heaters.begin(),heaters.end());
        for(int i=heaters.size()-1;i>-1;i--)
        {
            rheater[heaters.size()-1-i]=-heaters[i];
        }
        rheater[heaters.size()]=2e9;
             heaters.push_back(2e9+1);
        int64_t max_radius=0;
        for(int i=0;i<houses.size();i++)
        {
            int64_t temp_radius=abs(houses[i]-heaters[lower_bound(heaters.begin(),heaters.end(),houses[i])- heaters.begin()]);
            
            
            temp_radius=min(temp_radius,(int64_t)abs(houses[i]+(int64_t)rheater[lower_bound(rheater,rheater+heaters.size(),-houses[i])-rheater]));
            
            
            max_radius=max(max_radius,temp_radius);
        }
        return max_radius;
    }
};
