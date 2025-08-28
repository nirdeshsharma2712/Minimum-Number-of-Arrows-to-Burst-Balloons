class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int val = points[0][1] , count = 0 , mx = INT_MIN , mn =INT_MAX;
        for(int i=0;i<points.size();i++){
            mx = max(mx,points[i][0]);
            mn = min(mn,points[i][1]);
            if(mx>mn && mx!=INT_MIN && mn!=INT_MAX){
                count++;
                mx = INT_MIN;
                mn = INT_MAX;
                mx = max(mx,points[i][0]);
                mn = min(mn,points[i][1]);
            }
        }
        return count+1;
    }
};
