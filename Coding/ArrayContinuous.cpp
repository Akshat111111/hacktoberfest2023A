class Solution {
public:
    int minOperations(vector<int>& A) {
        // Using non Shrinkable Sliding window - O(1)
        int n=A.size(),i=0,j=0;
        sort(begin(A),end(A));
        A.erase(unique(begin(A),end(A)),end(A));
        for(int M=A.size();j<M;j++){
            if(A[i]+n<=A[j]) i++;
        }
        return n-j+i;
        
    }
};
