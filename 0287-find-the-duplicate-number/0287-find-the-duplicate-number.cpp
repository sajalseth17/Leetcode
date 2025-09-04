class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int slow = arr[0];
        int fast = arr[0];

        do {
            slow = arr[slow]; // +1
            fast = arr[arr[fast]]; // +2
        } while (slow != fast);

        slow = arr[0];

        while (slow != fast) {
            slow = arr[slow]; //+1
            fast = arr[fast]; //+2
        }
        return slow;
    }
};