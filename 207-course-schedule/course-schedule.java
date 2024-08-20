class Solution {

    public static boolean isCycle(ArrayList<Integer>[] graph, int curr, boolean[] visited, boolean[] rec){
        rec[curr] = true;
        visited[curr] = true;
        for(int i=0;i<graph[curr].size();i++){
            int n = graph[curr].get(i);
            if(rec[n]) return true;
            else if(!visited[n] && isCycle(graph,n, visited, rec)){
                return true;
            }
        }
        rec[curr] = false;
        return false;
    }
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        boolean visited[] = new boolean[numCourses];
        boolean rec[] = new boolean[numCourses];
        ArrayList[] graph = new ArrayList[numCourses];
        for(int i=0;i<numCourses;i++)
            graph[i] = new ArrayList();
            
        for(int i=0; i<prerequisites.length;i++){
            graph[prerequisites[i][0]].add(prerequisites[i][1]);
        }
        
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                boolean cycle = isCycle(graph, i, visited, rec);
                if(cycle) return false;
            }
        }
        return true;
    }
}