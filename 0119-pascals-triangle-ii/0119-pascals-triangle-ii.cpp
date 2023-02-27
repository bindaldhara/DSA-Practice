class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) 
            return {1};
        if(rowIndex==1) 
            return {1,1};
        
        vector<int> temp = getRow(rowIndex-1);
        for(int i = temp.size()-1;i>0;i--){
            temp[i] = temp[i]+temp[i-1];
        }
        temp.push_back(1);
        return temp;
    }
};