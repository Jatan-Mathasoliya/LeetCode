class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int, int> elements;

        for(int i=0; i<arr.size(); i++){
            elements[arr[i]]++;
        }

        int count = 0;
        for(int i=1; i<=2000; i++){
            if(elements.find(i) == elements.end()){
                count++;
            }

            if(count == k){
                return i;
                break;
            }

        }

        return -1;
    }
};