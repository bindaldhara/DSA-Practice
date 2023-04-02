class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>temp;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int j=0,r=potions.size()-1;
            while(j<=r){
                int mid=j+(r-j)/2;
                unsigned long long int product =(long) potions[mid]*spells[i];
                if(product>=success) 
                    r=mid-1;
                else 
                    j=mid+1;
            }
            temp.emplace_back(potions.size()-j);
        }
        return temp;
    }
};