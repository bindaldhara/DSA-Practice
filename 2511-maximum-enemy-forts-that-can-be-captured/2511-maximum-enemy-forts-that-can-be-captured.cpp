class Solution {
public:
    int captureForts(vector<int>& forts) {
        int count=0,start=-1,mxm=0;
        for(int i=0;i<forts.size();i++){
           if(forts[i]==0)
             count++;
            else{
                 if(start==-1)
                 start=i,count=0;
                 else{
                      if(forts[i]+forts[start]==0)
                       mxm=max(count,mxm);
                 start=i,count=0;
              }
            }
         }
        return mxm;
    }
};