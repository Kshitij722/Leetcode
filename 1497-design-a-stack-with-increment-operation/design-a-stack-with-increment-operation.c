#define MAX 1000


typedef struct {
    int *arr;
    int top;
    int maxSize;
} CustomStack;


CustomStack* customStackCreate(int maxSize) {
    CustomStack *st = (CustomStack *)malloc(sizeof(CustomStack));
    st->arr = (int *)malloc(maxSize * sizeof(int));  
    st->top = -1;
    st->maxSize = maxSize;
    return st;
}

void customStackPush(CustomStack* obj, int x) {
    if(obj->top < obj->maxSize-1){
        obj->arr[++(obj->top)] = x;
    }
}

int customStackPop(CustomStack* obj) {
    if (obj->top == -1) return -1;
    return obj->arr[(obj->top)--];
}

void customStackIncrement(CustomStack* obj, int k, int val) {
    for (int i = 0; i < k && i <= obj->top; i++) {
        obj->arr[i] += val;
    }
}

void customStackFree(CustomStack* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your CustomStack struct will be instantiated and called as such:
 * CustomStack* obj = customStackCreate(maxSize);
 * customStackPush(obj, x);
 
 * int param_2 = customStackPop(obj);
 
 * customStackIncrement(obj, k, val);
 
 * customStackFree(obj);
*/