#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 

void findMinAndMax(vector<int>  &nums, int l, int r, int &min, int &max)
{
    
 
    if (l == r)                   
    {
        if (max < nums[l]) {           
            max = nums[l];
        }
 
        if (min > nums[r]) {     
            min = nums[r];
        }
 
        return;
    }
 
    
 
    if (r - l == 1)                
    {
        if (nums[l] < nums[r])       
        {
            if (min > nums[l]) {     
                min = nums[l];
            }
 
            if (max < nums[r]) {      
                max = nums[r];
            }
        }
        else {
            if (min > nums[r]) {      
                min = nums[r];
            }
 
            if (max < nums[l]) {       
                max = nums[l];
            }
        }
        return;
    }
 
    
    int mid = (l + r) / 2;
 
    
    findMinAndMax(nums, l, mid, min, max);
 

    findMinAndMax(nums, mid + 1, r, min, max);
}
 
int main()
{
    vector<int> nums = { 7, 2, 9, 3, 1, 6, 7, 8, 4 };
 

    int max = INT_MIN, min = INT_MAX;
 
    int n = nums.size();
    findMinAndMax(nums, 0, n - 1, min, max);
 
    cout << " min is " << min << endl;
    cout << "max is " << max << endl;
 
    return 0;
}