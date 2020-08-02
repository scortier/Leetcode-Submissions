class MyHashSet {
public:
    /** Initialize your data structure here. */
    const int max = 1000000;
    vector<bool> hashSet;
    MyHashSet() {
        hashSet.resize(max, 0);
    }
    
    void add(int key) {
        hashSet[key] = true;
    }
    
    void remove(int key) {
        hashSet[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return hashSet[key];
    }
};
