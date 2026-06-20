class LFUCache {
public:
 class Node {
    public:
        int key, val, freq;
        Node(int k, int v) {
            key = k;
            val = v;
            freq = 1;
        }
    };

    int capacity;
    int minFreq;

    unordered_map<int, list<Node>::iterator> keyNode;
    unordered_map<int, list<Node>> freqList;

    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }

    void updateFreq(list<Node>::iterator it) {
        int key = it->key;
        int val = it->val;
        int freq = it->freq;

        freqList[freq].erase(it);

        if (freqList[freq].empty()) {
            freqList.erase(freq);

            if (minFreq == freq)
                minFreq++;
        }

        freqList[freq + 1].push_front(Node(key, val));
        freqList[freq + 1].front().freq = freq + 1;

        keyNode[key] = freqList[freq + 1].begin();
    }

    int get(int key) {
        if (keyNode.find(key) == keyNode.end())
            return -1;

        auto it = keyNode[key];
        int value = it->val;

        updateFreq(it);

        return value;
    }

    void put(int key, int value) {
        if (capacity == 0)
            return;

        if (keyNode.find(key) != keyNode.end()) {
            auto it = keyNode[key];
            it->val = value;
            updateFreq(it);
            return;
        }

        if (keyNode.size() == capacity) {
            auto it = --freqList[minFreq].end();

            int keyToRemove = it->key;

            freqList[minFreq].erase(it);

            if (freqList[minFreq].empty())
                freqList.erase(minFreq);

            keyNode.erase(keyToRemove);
        }

        freqList[1].push_front(Node(key, value));
        keyNode[key] = freqList[1].begin();

        minFreq = 1;
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */