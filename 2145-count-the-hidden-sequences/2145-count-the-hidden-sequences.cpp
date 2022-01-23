class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long new_lower = lower, new_upper = upper;
	
	// Add the current element to the present ranges .i.e. get the range of the next element in hidden sequence 
	for(auto it: differences){
		new_lower = max(new_lower+it, long(lower));
		new_upper = min(new_upper+it, long(upper));
	}
	
	long ans = new_upper-new_lower+1;
	return ans > 0 ? ans: 0;
    }
};