class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long MASS = mass;
        
        for(int i = 0; i < asteroids.size();i++){
            if(MASS < asteroids[i])
                return false;

            MASS += asteroids[i];
        }

        return true;
    }
};