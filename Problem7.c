int searchCnt(int* num, int len){
    int left = 0, right = len - 1, mid;
    while(left < right){
        mid = left + ((right-left)>>1);
        if(num[mid]>=0)
            left=mid+1;
        else /* num[mid] < 0*/
            right=mid;
    }
    if(num[left]>=0) return 0;
    else return (len-left);
}

int countNegatives(int** grid, int gridSize, int* gridColSize){
    /* sorted so used binary search */
    int ans = 0;
    for(int i = 0; i < gridSize; i++){
        ans += searchCnt(grid[i], *gridColSize);
    }
    return ans;
}