typedef struct {
    int x, y;
} Obstacle;


int compare(const void *a, const void *b) {
    Obstacle *obsA = (Obstacle *)a;
    Obstacle *obsB = (Obstacle *)b;
    if (obsA->x != obsB->x)
        return obsA->x - obsB->x;
    return obsA->y - obsB->y;
}

int isObstacle(int x, int y, Obstacle *obstacles, int obstaclesSize) {
    Obstacle key = {x, y};
    return bsearch(&key, obstacles, obstaclesSize, sizeof(Obstacle), compare) != NULL;
}

int robotSim(int* commands, int commandsSize, int** obstacles, int obstaclesSize, int* obstaclesColSize) {
    int dx[] = {0, 1, 0, -1}; 
    int dy[] = {1, 0, -1, 0};
    int x = 0, y = 0, dir = 0, maxDist = 0;

   
    Obstacle *obstacleList = (Obstacle *)malloc(obstaclesSize * sizeof(Obstacle));
    for (int i = 0; i < obstaclesSize; i++) {
        obstacleList[i].x = obstacles[i][0];
        obstacleList[i].y = obstacles[i][1];
    }
    qsort(obstacleList, obstaclesSize, sizeof(Obstacle), compare);

    
    for (int i = 0; i < commandsSize; i++) {
        if (commands[i] == -2) { 
            dir = (dir + 3) % 4;
        } else if (commands[i] == -1) {
            dir = (dir + 1) % 4;
        } else {
            for (int j = 0; j < commands[i]; j++) {
                int newX = x + dx[dir];
                int newY = y + dy[dir];

                
                if (isObstacle(newX, newY, obstacleList, obstaclesSize)) break;

                x = newX;
                y = newY;
                maxDist = (x * x + y * y > maxDist) ? x * x + y * y : maxDist;
            }
        }
    }

    free(obstacleList);
    return maxDist;
}