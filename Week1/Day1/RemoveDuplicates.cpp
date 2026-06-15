class Solution {
public:
    int removeDuplicates(vector<int>& num) {
        if(num.empty()){
            return 0;
             }
             int i =0;
             for(int j = 1;j< num.size();j++){
                if(num[j]!=num[i]){
                    i++;
                    num[i]=num[j];

                }
             }
        return i+1;
    }
};
