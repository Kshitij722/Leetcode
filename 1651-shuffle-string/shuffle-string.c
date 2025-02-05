char* restoreString(char* s, int* indices, int indicesSize) {
    char* ans = (char*)malloc((indicesSize+1)* sizeof(char));
    ans[indicesSize] = '\0';
    for(int i=0;i<indicesSize;i++){
        ans[indices[i]] = s[i];
    }
    return ans;
}