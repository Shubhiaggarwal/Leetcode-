class MinStack {
public:
  stack<int> st;
  stack<int> st2;
    MinStack() {
       
    }
    
    void push(int value) {
       if(st2.empty()){
        st2.push(value);
       }
       else{
           if(st2.top()>= value){
            st2.push(value);
           }
       }
       st.push(value);
    }
    
    void pop() {
        int x = st.top();
        st.pop();
        if(x == st2.top()){
            st2.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st2.top();
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