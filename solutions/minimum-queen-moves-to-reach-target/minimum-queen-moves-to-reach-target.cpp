class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        if(source==target) return 0;
        else if(abs(source[0]-target[0])==abs(target[1]-source[1]) || source[0]==target[0] || source[1]==target[1]) return 1;
        else return 2;
    }
};