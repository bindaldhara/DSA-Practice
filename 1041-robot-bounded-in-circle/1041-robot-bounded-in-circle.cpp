class Solution {
public:
    const int
        North= 0,
        East= 1,
        South = 2,
        West = 3;


    bool isRobotBounded(string instructions) {
        int x = 0, y = 0;
        int dir = North;
        for(int i = 0; instructions[i]; i++) {
            if (instructions[i] == 'L') 
                dir = (dir - 1 + 4) % 4;
             else if (instructions[i] == 'R') 
                dir = (dir + 1 + 4) % 4;
            else {
                switch(dir) {
                    case 0:
                        y += 1;
                        break;
                   case 1:
                        x += 1;
                        break;
                    case 2:
                        y -= 1;
                        break;
                    case 3:
                        x -= 1;
                        break;
                    
                }
            }
        }
        if ((x != 0 || y != 0) && dir == North)
            return false;
        return true;
        
    }
};