class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter = 0;
        for(int i=0;i<events.size();i++){
            if(counter==10){
                break;
            }
            else if(events[i]=="W"){
                counter++;
            }
            else if(events[i]=="WD"){
                score++;
            }
            else if(events[i]=="NB"){
                score++;
            }
            else{
                score=score + stoi(events[i]);
            }
            
        }
        return {score,counter};
    }
};