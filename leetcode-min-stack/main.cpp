#include <iostream>
#include <stack>
using namespace std;

/*
//Solution 1:
class MinStack {
  public:
    void push(int x) {
        s.push_back(x);
        if (m.size()) 
            m.push_back(x>m.back() ? m.back() : x);
        else
            m.push_back(x);

        //std::cout << m[t-1] << " " << s[t-1] << std::endl;
    }

    void pop() {
        s.pop_back();
        m.pop_back();
    }

    int top() {
        return s.back();
    }

    int getMin() {
        return m.back();
    }

  private:
    vector<int> s;
    vector<int> m;
};
*/

/*
//Solution 2:
class MinStack {
  public:
    void push(int x) {
        if (s.size())
            m = m > x? x : m;
        else 
            m = x;
        s.push_back(x);

        //std::cout << m[t-1] << " " << s[t-1] << std::endl;
    }

    void pop() {
        int tm = s.back();
        s.pop_back();
        if (tm == m && s.size()) {
            m = s.back();
            for (int ii = 0; ii < s.size(); ii++) {
                tm = s[ii];
                if (tm < m) m = tm;
            } 
        } 
    }

    int top() {
        return s.back();
    }

    int getMin() {
        return m;
    }

  private:
    vector<int> s;
    int m;
};
*/

/*
//Solution 3:
class MinStack {
  public:
    void push(int x) {
        s.push(x);
        if (m.size()) 
            m.push(m.top() > x? x : m.top());
        else
            m.push(x);
    }

    void pop() {
        s.pop();
        m.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return m.top();
    }

  private:
    stack<int> s;
    stack<int> m;
};
*/

class MinStack {
  public:
    void push(int x) {
        s.push(x);
        if (m.size() && m.top() >= x || m.size() == 0) 
            m.push(x);
    }

    void pop() {
        int tmp = s.top();
        s.pop();

        if (tmp == m.top()) 
            m.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return m.top();
    }

  private:
    stack<int> s;
    stack<int> m;
};

int main() 
{
    MinStack st;
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(-3);
    st.push(4);

    std::cout << st.top() << " " << st.getMin() << std::endl;
}