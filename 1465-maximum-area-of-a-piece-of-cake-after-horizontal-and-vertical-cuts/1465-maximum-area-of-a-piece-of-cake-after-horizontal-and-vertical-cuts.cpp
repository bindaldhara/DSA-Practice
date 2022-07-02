class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int m=1e9+7;
       sort(horizontalCuts.begin(),horizontalCuts.end());
       sort(verticalCuts.begin(),verticalCuts.end());
        int hsz=horizontalCuts.size();
        int vsz=verticalCuts.size();
        int hori_max=horizontalCuts[0];
        int verti_max=verticalCuts[0];
        for(int i=1;i<hsz;i++)
            hori_max=max(hori_max,horizontalCuts[i]-horizontalCuts[i-1]);
        for(int i=1;i<vsz;i++)
            verti_max=max(verti_max,verticalCuts[i]-verticalCuts[i-1]);
        hori_max=max(hori_max,h-horizontalCuts[hsz-1]);
        verti_max=max(verti_max,w-verticalCuts[vsz-1]);
        return (((long)hori_max*(long)verti_max)%m);
    }
};



