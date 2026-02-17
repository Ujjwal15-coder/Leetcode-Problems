class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;
        for(int hour = 0; hour < 12;hour++){
            for(int minute = 0; minute < 60;minute++){
            int totalBits = __builtin_popcount(hour) + __builtin_popcount(minute);

            if(totalBits == turnedOn){
                string HH = to_string(hour);
                string MM = (minute < 10 ? "0" : "") + to_string(minute);

                result.push_back(HH + ":" + MM);
            }
            }
        }
        return result;
    }
};