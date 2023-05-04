class Solution {
public:
    string predictPartyVictory(string senate) {
        int rad = 0;
        int dir = 0;
        for(int i = 0; i < senate.length(); i++){
            if(senate[i] == 'R'){
                rad++;
            }else{
                dir++;
            }
        }
        int i = 0;
        int cd = 0;
        int cr = 0;
        while(1){
            if(rad == 0 || dir == 0){
                break;
            }
            if(senate[i] == 'R'){
                if(cr > 0){
                    senate[i] = 'X';
                    rad--;
                    cr--;
                }else{
                    cd++;
                }
            }
            else if(senate[i] == 'D'){
                if(cd > 0){
                    senate[i] = 'X';
                    cd--;
                    dir--;
                }else{
                    cr++;
                }
            }
            i++;
            if(i == senate.length()){
                i = 0;
            }
        }
        return ((rad > dir) ? "Radiant" : "Dire");
    }
};