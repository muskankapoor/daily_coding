int visited;
        for (int i = 0; i < nums.size(); i++)
        {
		  // We know that all the elements in the array are upto n only.
		  // So, we choosing a num(starting) and marking as visited.
            visited = abs(nums[i]);
            if (nums[visited] < 0) // This will found the duplicate element and returns
                return visited;
            else
                nums[visited] = -nums[visited]; // Marking as Visited
        }
        return -1;
x
