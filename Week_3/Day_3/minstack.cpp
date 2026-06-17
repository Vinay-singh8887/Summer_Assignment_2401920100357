class MinStack {
public:
    stack<int> st;
    stack<int> min;

    MinStack() {}

    void push(int value) {
        if (min.empty() || min.top() >= value)
            min.push(value);
        st.push(value);
    }

    void pop() {
        if (st.top() == min.top())
            min.pop();

        st.pop();
    }

    int top() { return st.top(); }

    int getMin() { return min.top(); }
};