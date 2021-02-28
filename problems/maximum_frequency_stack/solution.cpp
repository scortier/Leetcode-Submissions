class FreqStack {
public:
    unordered_map<int,int> freq;
    unordered_map<int,stack<int>> first;
    int max_freq=1;
    FreqStack() {

    }

    void push(int x) {
        freq[x]++;
        first[freq[x]].push(x);
        max_freq=max(freq[x],max_freq);

    }

    int pop() {
        int temp=first[max_freq].top();
        first[max_freq].pop();
        freq[temp]--;
        if(first[max_freq].empty())
            max_freq--;
        return temp;


    }
};
/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */