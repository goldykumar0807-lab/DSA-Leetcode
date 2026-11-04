
class MyQueue {
public:
    stack<int> st;
    stack<int> helper;

    MyQueue() {
    }

    void push(int x) {
        helper.push(x);
    }

    int pop() {
        while (!helper.empty()) {
            st.push(helper.top());
            helper.pop();
        }

        int x = st.top();
        st.pop();

        while (!st.empty()) {
            helper.push(st.top());
            st.pop();
        }

        return x;
    }

    int peek() {
        while (!helper.empty()) {
            st.push(helper.top());
            helper.pop();
        }

        int x = st.top();

        while (!st.empty()) {
            helper.push(st.top());
            st.pop();
        }

        return x;
    }

    bool empty() {
        return helper.empty() && st.empty();
    }
};
