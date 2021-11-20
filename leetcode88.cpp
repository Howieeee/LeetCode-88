class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        unordered_map<int,int> count;
        
        for(int i=0;i<m;i++)
            count[nums1[i]]++;
        for(int i=0;i<n;i++)
            count[nums2[i]]++;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>> > pq;
        //priority_queue<pair<int,int>> pq;
        for(auto c:count){
            pq.push({c.first,c.second});
        }
        
        //cout << endl;
        nums1.clear();
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();
            
            for(int i=0;i<p.second;i++)
                nums1.push_back(p.first);
            //cout << p.first << " " << p.second << endl;
        }
       
        
    }
};
