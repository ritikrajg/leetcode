class MinStack {
public:
    stack<int> a,b;
    MinStack() {
        
    }
    
    void push(int val) {
       a.push(val); 
       if(!b.empty()){
          if(b.top()>=val){
              b.push(val);
          }
       }
       else{
           b.push(val);
       }
    }
    
    void pop() {
        if(b.top()==a.top()){
            b.pop();
        }
        a.pop();
    
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        
       /* vector<int> b;
        while(!a.empty()){
            b.push_back(a.top());
            a.pop();
        }
        for(int i=b.size()-1;i>=0;i--){
            a.push(b[i]);
        }
        sort(b.begin(),b.end());
        return b[0];*/
        return b.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */