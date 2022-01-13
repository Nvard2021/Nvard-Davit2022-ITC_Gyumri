#include <iostream>
#include <vector>
using namespace std;

int main(){
  int answer;
  vector<int> num;
  do{
    int elem = 0;
    cout << "Insert value: ";
    cin >> elem;
    num.insert(num.end(),1,elem);
    cout << "If you want to added enter 1: ";
    cin >> answer;
  } while(answer == 1);
  
  for(int i =0;i < num.size(); i++){
      cout << num[i] <<"\n";
  }
}












