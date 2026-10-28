
class MinStack {
private:
    stack<long long> st;
    long long minVal;

public:
    MinStack() {
    }

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        }
        else if (val >= minVal) {
            st.push(val);
        }
        else {
            st.push(2LL * val - minVal);
            minVal = val;
        }
    }

    void pop() {
        if (st.top() < minVal) {
            minVal = 2LL * minVal - st.top();
        }
        st.pop();
    }

    int top() {
        if (st.top() < minVal) {
            return (int)minVal;
        }
        return (int)st.top();
    }

    int getMin() {
        return (int)minVal;
    }
};
