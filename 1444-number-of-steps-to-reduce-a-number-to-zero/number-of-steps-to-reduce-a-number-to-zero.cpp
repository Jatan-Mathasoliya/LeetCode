class Solution {
public:
int steps = 0;
    void totalSteps(int n){

        if(n == 0) return;

        if(n % 2 == 0){
            n = n/2;
            steps++;
        }else{
            n--;
            steps++;
        }
        totalSteps(n);
    }

    int numberOfSteps(int num) {
        totalSteps(num);

        return steps; 
    }  
};