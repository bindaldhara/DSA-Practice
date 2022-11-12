class MedianFinder {
public:
   vector<int> arr;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    double median=-1;
    MedianFinder() {
        
    }
    int signum(int a,int b){
        
        if(a==b){
            return 0;
        }
        else if(a>b){
            return 1;
        }
        return -1;
    }
    void addNum(int data) {
        
        arr.push_back(data);
        switch(signum(maxheap.size(),minheap.size())){
            
            case 0:
            if(data>median){
                minheap.push(data);
                median=minheap.top();
            }
            else{
                maxheap.push(data);
                median=maxheap.top();
            }
            break;
            case 1:
            if(data>median){
                minheap.push(data);
                median=(maxheap.top()+minheap.top())/2.0;
            }
            else{
                int element=maxheap.top();
                maxheap.pop();
                minheap.push(element);
                maxheap.push(data);
                median=(maxheap.top()+minheap.top())/2.0;
            }
            break;
            case -1:
            if(data<median){
                maxheap.push(data);
                median=(maxheap.top()+minheap.top())/2.0;
            }
            else{
                int element=minheap.top();
                minheap.pop();
                maxheap.push(element);
                minheap.push(data);
                median=(maxheap.top()+minheap.top())/2.0;
            }
            break;
        }
    }
    double findMedian() {
        
        return median;
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */