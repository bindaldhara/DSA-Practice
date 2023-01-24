class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        queue<int>q;
        vector<int>vis(n*n+1,0);
        q.push(1);
        vis[1]=1;
        int cnt=1;
        while(q.size()){
               int sz=q.size();
               for(int i=0; i<sz; i++){
                   int a=q.front();
                   q.pop();
                   for(int k=1; k<=6; k++){
                       int l=a+k;
                       if(l==n*n) 
                           return cnt;
                       int i=n-l/n;
                       if(l%n) 
                           i--;
                       int j;
                       if((l/n)&1){
                           if(l%n) j=n-l%n;
                           else 
                               j=n-1;
                       }
                       else{
                           if(l%n) 
                               j=l%n-1;
                           else 
                               j=0;
                       }
                       if(board[i][j]!=-1) 
                           l=board[i][j];
                       if(vis[l]) 
                           continue;
                       q.push(l);
                       if(l==n*n) 
                           return cnt;
                       vis[l]=1; 
                   }
               }
               cnt++;
        }
        return -1;
    }
};