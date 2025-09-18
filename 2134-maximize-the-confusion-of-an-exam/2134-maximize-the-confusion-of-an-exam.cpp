class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int size = answerKey.size(), ans = 0;

        // Case 1: flip 'F' → 'T'
        int left = 0, count = 0;
        for (int i = 0; i < size; i++) {
            if (answerKey[i] == 'F') {
                count++;
            }
            while (count > k) {
                if (answerKey[left] == 'F') {
                    count--;
                }
                left++;
            }
            ans = max(ans, i - left + 1);
        }

        // Case 2: flip 'T' → 'F'
        left = 0, count = 0;
        for (int i = 0; i < size; i++) {
            if (answerKey[i] == 'T') {
                count++;
            }
            while (count > k) {
                if (answerKey[left] == 'T') {
                    count--;
                }
                left++;
            }
            ans = max(ans, i - left + 1);
        }

        return ans;
    }
};
