class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> freq;
        for(char ch:text){
            freq[ch]++;
        }
        int b = freq['b'];
        int a = freq['a'];
        int l = freq['l']/2;
        int o = freq['o']/2;
        int n = freq['n'];
        
    // int smallest = min(b,a);
    // smallest = min(smallest,l);
    // smallest = min(smallest,o);
    // smallest = min(smallest,n);

    // return smallest;

    // return min({b,a,l,o,n}); more simpler way

   return min({freq['b'],freq['a'],freq['l']/2,freq['o']/2,freq['n']});
    }
};