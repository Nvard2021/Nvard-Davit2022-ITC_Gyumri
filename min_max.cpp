#include <iostream>
#include <vector>
#include <climits>
using namespace std;

 int max;
 int min;
 int low; 
 int high;

void find_min_max(vector<int> const &num, int low, int high, int &min, int &max)
{
    if (low == high) {                 
        if (max < num[low]) {         
            max = num[low];
        }
 
        if (min > num[high]) {          
            min = num[high];
        }
 
        return;
    }
 
    if (high - low == 1) {
        if (num[low] < num[high]) {
            if (min > num[low]) {      
                min = num[low];
            }
 
            if (max < num[high]) {   
                max = num[high];
            }
        }
        else {
            if (min > num[high]) {      
                min = num[high];
            }
 
            if (max < num[low]) {     
                max = num[low];
            }
        }
        return;
    }

    int mid = (low + high) / 2;
    find_min_max(num, low, mid, min, max);
    find_min_max(num, mid + 1, high, min, max);
}
 
int main()
{
    vector<int> nums = { 7, 2, 9, 3, 1, 6, 7, 8, 4 };
    int max = INT_MIN, min = INT_MAX;
    int n = num.size();
    find_min_max(num, 0, n - 1, min, max);
 
    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max << endl;
 
    return 0;
}
