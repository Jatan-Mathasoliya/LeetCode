class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        // int i=0, j=0;
        // int temp = 0;

        // while(i < m+n && j < n){
        //     if(arr1[i] <= arr2[j]){
        //         if(i >= m && arr1[i] == 0){
        //             if(temp != 0){
        //                 arr1[i] = temp;
        //                 i++;
        //                 temp = 0;
        //             }else{
        //                 arr1[i] = arr2[j];
        //                 i++;
        //                 j++;
        //             }
        //         }else{
        //             i++;
        //         }
        //     }else if(arr1[i] > arr2[j]){
        //         cout << "in else if i : " << arr1[i] << " and i : " << i <<
        //         endl; cout << "in else if j : " << arr2[j] << " and j : " <<
        //         j <<  endl; cout << "in else if temp : " << temp << endl;
        //         if(temp != 0){
        //             if(temp > arr2[j]){
        //                 arr1[i] = arr2[j];
        //                 i++;
        //                 j++;
        //             }else{
        //                 arr1[i] = temp;
        //                 i++;
        //                 temp = 0;
        //             }
        //         }else{
        //             cout << "Else condition followed and temp have value." <<
        //             endl; temp = arr1[i]; arr1[i] = arr2[j]; i++; j++;

        //             cout << "Temp in else : " << temp << endl;
        //             cout << "i in else : " << i << endl;
        //             cout << "j in else : " << j << endl;
        //         }
        //     }
        // }

        int i = m - 1, j = n - 1, k = m + n - 1;
        while (j >= 0) {
            if (i >= 0 && arr1[i] > arr2[j])
                arr1[k--] = arr1[i--];
            else
                arr1[k--] = arr2[j--];
        }
    }
};