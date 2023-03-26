class Solution {
    int maxCycleLength=-1;
public:
void DFS(vector<int>& edges,vector<int>& pathExplored,int start,int steps){
    if(edges[start]==-1){
        pathExplored[start]=-1;
        return;
    }
    if(pathExplored[start]==-1){
        return;
    }
    if(pathExplored[start]>0){
        if((steps-pathExplored[start])>maxCycleLength){
            maxCycleLength=steps-pathExplored[start];
        }
        return;
    }
    pathExplored[start]=steps;
    DFS(edges,pathExplored,edges[start],steps+1);
    pathExplored[start]=-1;
    return;
}
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int> pathExplored(n,0);
        for(int i=0;i<n;i++){
            if(edges[i]==-1){
                continue;
            }
            if(pathExplored[i]==0){
                DFS(edges,pathExplored,i,0);
            }
        }
        return maxCycleLength;
        
    }
};