class Solution {
public:
    static bool compare(vector<int>&a,vector<int>&b){
       if(a[0]==b[0]) 
           return a[1]<b[1];
       return(a[0]>b[0]);
    }
    
    int numberOfWeakCharacters(vector<vector<int>>&properties)  {
        sort(properties.begin(),properties.end(),compare);
        int temp=properties[0][1],res=0;
        for(int i=1;i<properties.size();i++){
        if(properties[i][1]<temp) 
            res++;
        else temp=properties[i][1];    
        } 
    return res; 
    }
};