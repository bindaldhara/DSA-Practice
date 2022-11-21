class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> v=mat;
        queue<pair<int,pair<int,int>>> q;
        for ( int i=0; i<mat.size(); i++ ){
            for ( int j=0; j<mat[0].size(); j++ ){
                v[i][j]=-1;
                if ( mat[i][j]==0 ){
                    q.push({0,{i,j}});
                    v[i][j]=0;
                }
            }
        }
        while ( !q.empty() ){
            int x=q.front().second.first;
            int y=q.front().second.second;
            int dis=q.front().first;
            q.pop();
            for ( int i=-1; i<2; i++ ){
                for ( int j=-1; j<2; j++ ){
                    if ( abs(i)!=abs(j) ){
                        int xx=x+i;
                        int yy=y+j;
                        if ( xx>=0 && yy>=0 && xx<v.size() && yy<v[0].size() && v[xx][yy]==-1 ){
                            q.push({dis+1,{xx,yy}});
                            v[xx][yy]=dis+1;
                        }
                    }
                }
            }
        }
        return v;
    }
};