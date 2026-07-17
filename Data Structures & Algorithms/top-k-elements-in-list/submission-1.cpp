class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
                unordered_map<int, int> freq;

                        // Count frequencies
                                for (int num : nums) {
                                            freq[num]++;
                                                    }

                                                            // Min heap: {frequency, element}
                                                                    priority_queue<pair<int, int>,
                                                                                           vector<pair<int, int>>,
                                                                                                                  greater<pair<int, int>>> pq;

                                                                                                                          // Maintain heap of size k
                                                                                                                                  for (auto &it : freq) {
                                                                                                                                              pq.push({it.second, it.first});
                                                                                                                                                          if (pq.size() > k) {
                                                                                                                                                                          pq.pop();
                                                                                                                                                                                      }
                                                                                                                                                                                              }

                                                                                                                                                                                                      // Extract elements
                                                                                                                                                                                                              vector<int> ans;
                                                                                                                                                                                                                      while (!pq.empty()) {
                                                                                                                                                                                                                                  ans.push_back(pq.top().second);
                                                                                                                                                                                                                                              pq.pop();
                                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                                              return ans;
                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                  };