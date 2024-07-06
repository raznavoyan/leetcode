class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (m_data.count(val) > 0) {
            return false;           
        } 
        m_data.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if (m_data.count(val) > 0) {
            m_data.erase(val);
            return true;           
        } 
        return false;
    }
    
    int getRandom() {
            // Initialize a random device and Mersenne Twister engine
        std::random_device rd;
        std::mt19937 gen(rd());

        // Get the size of the set
        int setSize = static_cast<int>(m_data.size());

        // Generate a random index within the range [0, setSize - 1]
        std::uniform_int_distribution<> dis(0, setSize - 1);
        int randomIndex = dis(gen);

        // Iterate through the set to find the element at the random index
        auto it = m_data.begin();
        std::advance(it, randomIndex); // Move iterator to the random index

        // Return the element at the random index
        return *it;
    }

private:
    std::set<int> m_data;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int  param_3 = obj->getRandom();
 */
