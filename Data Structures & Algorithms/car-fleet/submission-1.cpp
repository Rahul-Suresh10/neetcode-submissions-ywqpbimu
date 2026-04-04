class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n = position.size();

        vector<pair<int,int>> vt;

        for(int i=0;i<n;i++)
        {
            vt.push_back({position[i],speed[i]});
        }

        sort(vt.begin(),vt.end(),[](const pair<int,int>& a,const pair<int,int>& b){return a.first > b.first;});

        double last_time = 0;
        int car_fleets = 0;


        for(int i=0;i<vt.size();i++)
        {
            double time = (double)(target - vt[i].first)/vt[i].second;
            if(time > last_time)
            {
                car_fleets++;
                last_time = time;
            }


        }

        return car_fleets;


        
    }
};
