//kadanes algorithm
int kadanes(int nums[])
{
    int max_ending_here=0;
    int max_so_far=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        max_ending_here+=nums[i];
        if(max_ending_here<nums[i])
        {
            max_ending_here=nums[i];
        }
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }
    }
    return max_so_far;
}
