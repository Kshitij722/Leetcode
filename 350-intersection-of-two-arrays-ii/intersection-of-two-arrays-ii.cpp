class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> a;
        vector<int> b;
        for(auto i:nums1){
            a[i]++;
        }
        for(auto i:nums2){
            if(a.find(i) != a.end()){
                b.push_back(i);
                a[i]--;
                if(a[i]==0){
                    a.erase(i);
                }
            }
        }
        return b;
    }
};