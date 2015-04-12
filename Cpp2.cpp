int MaxSum1(int *arr,int n)
{
    int sum = 0,max = INT_MIN;
    for(int i = 0; i<n; ++i)
    {
        sum = 0;
        for(int j = i;j<n; ++j)
        {
            sum += arr[j];
            if(sum>max)
                max = sum;
        }
    }
    return max;
}