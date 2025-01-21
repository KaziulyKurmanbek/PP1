#include <iostream>
#include <stack>
#include <string>
using namespace std;

class MaxStack {
    stack<int> st;         
    stack<int> maxStack;  

public:
    void add(int value) {
        st.push(value);
        if (maxStack.empty() || value >= maxStack.top()) {
            maxStack.push(value);
        } else {
            maxStack.push(maxStack.top());
        }
    }

    void deleteTop() {
        if (!st.empty()) {
            st.pop();
            maxStack.pop(); 
        }
    }

    int getCurrent() const {
        if (!st.empty()) {
            return st.top();
        } else {
            throw runtime_error("error"); 
        }
    }

    int getMax() const {
        if (!maxStack.empty()) {
            return maxStack.top();
        } else {
            throw runtime_error("error"); 
        }
    }
};

int main() {
    int n;
    cin >> n;
    MaxStack st;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        
        if (command == "add") {
            int a;
            cin >> a;
            st.add(a);
        }
        
        else if (command == "delete") {
            try {
                st.deleteTop();
            } catch (const runtime_error& e) {
                cout << e.what() << endl;
            }
        }
        
        else if (command == "getcur") {
            try {
                cout << st.getCurrent() << endl;
            } catch (const runtime_error& e) {
                cout << e.what() << endl;
            }
        }
        
        else if (command == "getmax") {
            try {
                cout << st.getMax() << endl;
            } catch (const runtime_error& e) {
                cout << e.what() << endl;
            }
        }
    }

    return 0;
}