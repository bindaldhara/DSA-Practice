class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>>v(n,vector<int>(n));
        int top=0,bottom=n-1,left=0,right=n-1,val=1;
        while(top<=bottom and left<=right){
            for(int i=left;i<=right;i++) 
                v[top][i]=val++;
            top++;
            for(int i=top;i<=bottom;i++) 
                v[i][right]=val++;
            right--;
            for(int i=right;i>=left;i--) 
                v[bottom][i]=val++;
            bottom--;
            for(int i=bottom;i>=top;i--) 
                v[i][left]=val++;
            left++;
        }
        return v;
    }
};