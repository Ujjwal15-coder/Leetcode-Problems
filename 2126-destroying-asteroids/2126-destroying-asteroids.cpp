class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long MASS = mass;
        
        for(int &i : asteroids){
            if(MASS < i)
                return false;

            MASS += i;
        }

        return true;
    }
};