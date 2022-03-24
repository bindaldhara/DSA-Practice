class Solution {
public:
   bool check(vector<int>& v1, vector<int>& v2, vector<int>& point) {
        if (v1[0] == v2[0] && v2[0] == point[0])
            return true;
        if (v1[1] == v2[1] && v2[1] == point[1])
            return true;
        
        double x = ((double)point[0] - (double)v1[0]) / ((double)v1[0] - (double)v2[0]);
        double y = ((double)point[1] - (double)v1[1]) / ((double)v1[1] - (double)v2[1]);
        return x == y;
    }
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        for (int i = 2; i < n; i++)
            if (!check(coordinates[0], coordinates[1], coordinates[i]))
                return false;
        
        return true;
        
    }
};