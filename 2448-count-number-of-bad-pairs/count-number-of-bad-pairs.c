#define MAX_N 100000
#define HASH_SIZE 200003  // Large prime number for better hashing

typedef struct {
    int key;
    int value;
} HashNode;

typedef struct {
    HashNode data[HASH_SIZE];
} HashMap;

int hashFunction(int key) {
    return ((key % HASH_SIZE) + HASH_SIZE) % HASH_SIZE;
}

void insertHashMap(HashMap *map, int key, int *count) {
    int idx = hashFunction(key);
    while (map->data[idx].key != key && map->data[idx].value != 0) {
        idx = (idx + 1) % HASH_SIZE;
    }
    if (map->data[idx].value == 0) {
        map->data[idx].key = key;
        map->data[idx].value = 1;
    } else {
        map->data[idx].value++;
    }
    *count = map->data[idx].value;
}

long long countBadPairs(int *nums, int n) {
    HashMap map = {0};  
    long long total_pairs = (long long)n * (n - 1) / 2;
    long long good_pairs = 0;
    
    for (int i = 0; i < n; i++) {
        int key = nums[i] - i;
        int count = 0;
        insertHashMap(&map, key, &count);
        good_pairs += count - 1;
    }
    
    return total_pairs - good_pairs;
}


  