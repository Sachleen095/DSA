class CustomStack {
public:
    vector<int> st;
    int n;
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(st.size()<n) {
            st.push_back(x);
        }
    }
    
    int pop() {
        if(st.empty()) {
            return -1;
        }
        else {
            int value=st[st.size()-1];
            st.erase(st.begin()+st.size());
            return value;
        }
    }
    
    void increment(int k, int val) {
        if(st.size()<=k) {
            for (int& ele : st) {
                ele += val;
            }
        }
        else {
            for(int i=0;i<k;i++) {
                st[i]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */