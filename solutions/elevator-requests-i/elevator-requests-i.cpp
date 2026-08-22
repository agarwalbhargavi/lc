class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int time = requests[0];
        for(int i=1;i<requests.size();i++){
            int x = abs(requests[i]-requests[i-1]);
            time=time+x;
        }
        return time;
    }
};