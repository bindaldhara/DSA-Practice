class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<vector<int>>ve(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ve[i][j]=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
            }
        }
        vector<int>k(n,INT_MAX);
        k[0]=0;
        vector<bool>mst(n,false);
        int res=0;
        for(int count=0;count<n;count++){
            int u=-1;
            for(int i=0;i<n;i++){
                if(!mst[i] && (u==-1 || k[u]>k[i])){
                    u=i;
                }
            }
            mst[u]=true;
            res=res+k[u];
            for(int v=0;v<n;v++){
                if(ve[u][v]!=0 && !mst[v]){
                    k[v]=min(k[v],ve[u][v]);
                }
            }
        }
        return res;
    }
};