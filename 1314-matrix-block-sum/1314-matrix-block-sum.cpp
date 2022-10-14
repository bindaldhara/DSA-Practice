class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {              
    vector<vector<int>> sol(mat.size(), vector<int>(mat[0].size(),0));

        for (int i=0;i<mat.size();i++){
            for (int j=1;j<mat[0].size();j++){
              mat[i][j]+=mat[i][j-1];  
            }
        }  
        for (int i=0; i<mat.size();++i){
                      
            int maxr = min(i+k, static_cast<int>(mat.size()-1)); 
            int minr = max(i-k, 0); 
                     
            for (int j=0; j<mat[0].size();++j){
             for (int r=minr; r<=maxr ;++r){
                 
              int jp = std::min(j+k, static_cast<int>(mat[0].size()-1));   
                
               if (j-k<=0)
                   sol[i][j]+=mat[r][jp];
               else
               sol[i][j]+=mat[r][jp]-mat[r][j-k-1];    
              }
           }             
        }
        return sol;
    }
};