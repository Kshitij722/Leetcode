

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfLines(int* widths, int widthsSize, char * s, int* returnSize){
        int* result = (int*)malloc(2 * sizeof(int));
        // *returnSize = 1;
        int bound = 0;
        int lines = 1;
        // int finalpixels = 0;
        for(int i=0;s[i]!='\0';i++){
            int size = widths[s[i] - 'a'];
            if(bound + size > 100){
                lines++;
                bound = 0;
            }
            bound += size;
        }
        result[0] = lines;
        result[1] = bound;
        *returnSize = 2;
        return result;
}