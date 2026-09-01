class MinStack {
public:
    stack<int>st;
    stack<int>min;

    MinStack() {
        
    }
    
    void push(int value) {
        if(st.size()==0){
            st.push(value);
            min.push(value);
        }else{
            st.push(value);
            if(min.top()<value){
                min.push(min.top());
            }
            else{
                min.push(value);
            }
        }
    }
    
    void pop() {
        st.pop();
        min.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
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