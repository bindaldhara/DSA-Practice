class NumArray {
public:
      vector<int> v;
    int sum = 0;
    NumArray(vector<int> &nums){
        v = nums;
        for (auto i :nums)
            sum += i;
    }

    void update(int index, int val){
        sum -= v[index];
       sum+=val;
        v[index]=val;
    }

    int sumRange(int left, int right){
        int res=0;
        for (int i = 0; i < left; i++)
            res += v[i];
        for (int i = right + 1; i < v.size(); i++)
            res += v[i];
        return (sum-res);  
    }
};








