int numSpecial(int** mat, int matSize, int* matColSize) {
    int row[matSize], col[matColSize[0]];

    for(int i=0;i<matSize;i++) row[i]=0;
    for(int j=0;j<matColSize[0];j++) col[j]=0;

    for(int i=0;i<matSize;i++){
        for(int j=0;j<matColSize[0];j++){
            if(mat[i][j] == 1){
                row[i]++;
                col[j]++;
            }
        }
    }
    int ans =0;
    for(int i=0;i<matSize;i++){
        for(int j=0;j<matColSize[0];j++){
            if(mat[i][j] == 1 && row[i]==1 && col[j]==1){
                ans++;
            }
        }
    }

    return ans;
}