/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
	vector<int>res;
    int i=0;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {  
        res = nums;
	}
	int peek() {
        return res[i];
    }
	int next() {
	    return res[i++];
    }
	bool hasNext() const {
        if(i<res.size())
            return true;
        else
            return false;
	}
};