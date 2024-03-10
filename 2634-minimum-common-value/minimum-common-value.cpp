class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> a,b;
        for(auto i:nums1) a[i]++;
        for(auto i:nums2) b[i]++;

        for(auto i:a){
            auto it = b.find(i.first);
            if(it != b.end()) return it->first;
        }
        return -1;
    }
};