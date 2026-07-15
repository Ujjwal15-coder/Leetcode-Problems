class MinStack {
public:
    stack<long long> s;
    long long mini;
    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int value) {
        //for first element to push into the stack
        if(s.empty()){
            s.push(value);
            mini = value;
        }
        else{
            if(value < mini){
                s.push(2LL *value - mini);
                mini = value;
            }
            else{
                s.push(value);
            }
        }
    }
    
    void pop() {
        if(s.empty()){
            return;
        }
        long long curr = s.top();
        s.pop();

        if(curr > mini){
            return;
        }
        else{
            // int prevMini = mini;
            // int val = 2 * mini - curr;
             mini = 2LL * mini - curr;
            // mini = val;
            // return mini;
        }
    }
    
    int top() {
        if(s.empty()){
            return -1;
        }
        long long curr = s.top();
        if(curr < mini){
            return mini;
        }
        else{
            return curr;
        }
    }
    
    int getMin() {
        if(s.empty())
            return -1;
        
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */