class Solution {
public:
    bool validUtf8(vector<int>& data) {
     int rem=0;
        for(int i = 0; i < data.size();i++){
            if(rem == 0){
                if(data[i]>>7 == 0b0)
                    rem=0;
                else if(data[i]>>5 == 0b110)
                    rem=1;
                else if(data[i]>>4 == 0b1110)
                    rem=2;
                else if(data[i]>>3 == 0b11110)
                    rem=3;
                else
                    return false;
            }
            else{
                if(data[i]>>6 == 0b10) 
                    rem--;
                else
                    return false;
            }
        }
        if(rem == 0)
            return true;
        else
            return false;   
    }
};