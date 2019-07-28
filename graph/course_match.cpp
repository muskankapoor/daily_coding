// There are a total of n courses you have to take, labeled from 0 to n-1.

// Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

// Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?


// bfs 
bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        int plen = prerequisites.size();

	vector<int> ind(numCourses,0); //indegree vector
         
        //construct map & get indegree of each vertex
        vector<vector<bool> > map(numCourses, vector<bool>(numCourses, false));
        for (int i=0;i<plen;i++){
            //Important: in case of duplicates in prerequisites, only +1 indegree 
            if (map[prerequisites[i].first][prerequisites[i].second] == false){
                map[prerequisites[i].first][prerequisites[i].second] = true;
                ind[prerequisites[i].first]++;
            }
        }
         
        //BFS
        stack<int> st;
        for (int i=0;i<numCourses;i++){
            if (ind[i]==0) st.push(i);
        }
         
        int count = 0;  // to get the bool result
         
        while (!st.empty()){
            int tmp = st.top();
            st.pop();
            count ++;
            for (int i=0;i<numCourses;i++){
                if (map[i][tmp]){
                    ind[i]--;
                    if (ind[i]==0) st.push(i);
                }
            }
        }
        return count < numCourses ? false : true;
         
    }
