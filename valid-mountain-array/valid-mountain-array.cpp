class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len = arr.size();
        int increment = 0;
        int decrement = len - 1;

        while (increment < len - 1 && arr[increment] < arr[increment + 1])
        {
            increment++;
        }

        while (decrement > 0 && arr[decrement] < arr[decrement - 1])
        {
            decrement--;
        }

        return increment > 0 && decrement < len - 1 && increment == decrement;
    }
};