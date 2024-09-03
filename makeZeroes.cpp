void MakeZeros(vector<vector<int> >& matrix) {
        vector<vector<int>>t=matrix;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!matrix[i][j]){
                    int sum=0;
                if(i-1>=0) {
                    sum+=matrix[i-1][j];
                    t[i-1][j]=0;
                }
                if(j-1>=0) {
                    sum+=matrix[i][j-1];
                    t[i][j-1]=0;
                }
                if(i+1<n) {
                    sum+=matrix[i+1][j];
                    t[i+1][j]=0;
                }
                if(j+1<m) {
                    sum+=matrix[i][j+1];
                    t[i][j+1]=0;
                }
                t[i][j]=sum;
                    }
            }
        }
        matrix=t;
    }
