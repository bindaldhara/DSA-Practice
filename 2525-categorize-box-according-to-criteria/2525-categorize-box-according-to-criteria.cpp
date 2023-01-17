class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
         const int ten_to_4{10000}, ten_to_nine{1000000000};
        long long volume = (long long)length * width * height;
        bool bulky = length >= ten_to_4 || width >= ten_to_4 || height >= ten_to_4 || volume >= ten_to_nine;
        bool heavy = mass >= 100;
        string category{};

        if(bulky and heavy)
            category = "Both";
        else if(!bulky and !heavy)
            category = "Neither";
        else if(bulky and !heavy)
            category = "Bulky";
        else
            category = "Heavy";

        return category;
    }
};