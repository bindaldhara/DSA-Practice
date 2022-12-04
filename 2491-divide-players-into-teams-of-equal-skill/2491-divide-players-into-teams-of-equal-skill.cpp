class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        int sum=skill[0]+skill[n-1];
        long long res = skill[0] * skill[n-1];
        
        
        for (int i = 1, j = skill.size() - 2; i < j; i++, j--) {
           
            if (skill[i] + skill[j] != sum)
                return -1;
            res += (skill[i] * skill[j]);
            
        }
        
        return res;
    }
};

