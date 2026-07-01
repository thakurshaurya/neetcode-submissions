class MinStack {
public:
    vector<int> st;
    MinStack() {

    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        int mini = INT_MAX;
        for(int i : st){
            mini = min(i,mini);
        }
        return mini;
    }
};
