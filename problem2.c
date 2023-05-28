char ** fizzBuzz(int n, int* returnSize)
{
    char**arr = malloc(n*sizeof(char*));
    *returnSize = n;
    for(int i=1;i<=n;i++)
    {
        arr[i - 1] = malloc(8 * sizeof(char));
        if(i%15==0)
        arr[i-1] = "FizzBuzz";
        else if(i%3==0)
        arr[i-1]="Fizz";
        else if(i%5==0)
        arr[i-1]="Buzz";
        else
        sprintf(arr[i-1], "%d", i);
    }    
    return arr;
}