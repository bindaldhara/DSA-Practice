class Solution {
public:
    string addStrings(string num1, string num2) {
        auto output = ""s;
        int i = num1.size() - 1, j = num2.size() - 1, sum = 0;
        while (i >= 0 || j >= 0 || sum) {
            if (i >= 0) 
                sum += num1[i--] - '0';
            if (j >= 0) 
                sum += num2[j--] - '0';
            output += (sum % 10) + '0';
            sum /= 10;
        }
        reverse(begin(output), end(output));
        return output;
    }
};
