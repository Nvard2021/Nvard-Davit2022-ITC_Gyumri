#include <iostream>
#include <cstring>
using namespace std;
void quick(char *items, int left, int right);

int main (){
    char str[] = "ghjdfhhbcb sjfhg aaygh knbvoie";
    int len = strlen(str);
    cout << "Nerka pahin :" << str << endl;
    quick(str, 0, len-1);
    cout << "Dasavorvac pahin :" << str << endl;;

    return 0;
}

void quick(char *items, int left, int right){
    int i, j;
    char x, y;

    i = left; j = right;
    x = items[(left + right)/2];
    do{
        while ((items[i] < x) && (i < right)) i++;
        while ((x < items[j]) && (j > left)) j--;
     if(i <= j){
        y = items[i];
        items[i]= items[j];
        items[j]=y;
        i++;
        j--;

     }
    }
      while(i <= j);
      if (left < j) quick(items, left, j);
      if (i < right) quick (items, i, right);

 };
