#include <iostream>
using namespace std;
void merge(int *,int, int , int );
void merge_sort(int *arr, int cacr, int bardzr)
{
    int kes;
    if (cacr < bardzr){
        kes=(cacr+bardzr)/2;
        merge_sort(arr,cacr,kes);
        merge_sort(arr,kes+1,bardzr);
        merge(arr,cacr,bardzr,kes);
    }
}

void merge(int *arr, int low, int high, int kes)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = kes + 1;
    while (i <= kes && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= kes) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}

int main () 
{
    int myarray[30], num;
    std::cout<<"Enter number of elements to be sorted:";
    std::cin>>num;
    std::cout<<"Enter "<<num<<" elements to be sorted:";
    for (int i = 0; i < num; i++) { 
		std::cin>>myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    std::cout<<"Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        std::cout<<myarray[i]<<"\t";
    }
return 0;
}
