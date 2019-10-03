//Write a method that returns a number that appears only once in an array.
//Assume the array will surely have a unique value. If the array is empty return 0.


// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int single_number(int arr[], int sz)
{
    int cur_val,compare,final_val=0;
    for(int i=0; i<sz; i++)
    {
        cur_val=arr[i];
        for(int j=0; j<=sz; j++)
        {
            compare=arr[j];
            if(i==j)
            {
                continue;    
            }
            if(cur_val != compare)
            {
                final_val=cur_val;
            }
            else
            {
                //this is used to determine if the program can finish or continue interating through the code
                final_val=0;
                break;
            }
            
        }
        if(final_val != 0)
        {
            break;
        }
    }
return final_val;
}   
    
