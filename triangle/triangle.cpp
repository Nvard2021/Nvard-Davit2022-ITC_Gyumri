#include <iostream>

void print_star(int a, char m){ 
    for (int i=0; i<a; i++){
        for(int j=0; j<=i; j++){
            std::cout << m;
        }
            std::cout << "\n"; 
    }
}

void print_star_g(int a, char m){
    for(int i=a;i>=0;i--){
        for(int j=1;j<=i; j++){
            std::cout << m;
        }
        std::cout << "\n";
    }
}

void print_star_o(int a, char c){

        for (int i=a; i>=1; i--){
                for (int j=a - i; j>0; j--){
                        std::cout << " ";
                }
                for(int k=1;k<=i;k++){
                    std::cout << c ;
            }
                    std::cout << "\n";

        }
}
void print_star_desc(int a, char m){
    for(int i=0;i<a;i++){
        for(int j=0;j<=a-i; j++){
            std::cout << " ";
        }
        for (int l=0;l<=i;l++){
        std::cout << m;
        }
        std::cout << "\n";
    }
}
void print_star_burger(int a, char m){
    for(int i=1; i<=a; i++){
        for(int space=a; space>i; space--)
            std::cout<<" ";
        for(int j=0; j<i; j++)
            std::cout << m << " ";
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
void print_star_flag(int a, int e, char m){
   switch(e) {
      case 1 :
        print_star(a, m);
         break;
      case 2 :
        print_star_desc(a, m);
        break;
      case 3 :
        print_star_o(a, m);
         break;
      case 4 :
        print_star_g(a, m);
         break;
      case 5 :
        print_star_burger(a, m);
         break;
      default :
         std::cout << "Invalid number" << std::endl;
         break;
   }
}
int main(){
    int a;
    int e;
    char m;
    std::cout << "Enter number" << std::endl;
    std::cin >> a;
    std::cout << "Enter symbol" << std::endl;
    std::cin >> m;
    std::cout << "write the letter of the drawing" << "\n\n";
    std::cout << "rectangular up from right to left(1)" << std::endl;
    std::cout << "rectangular up from left to right(2)" << std::endl;
    std::cout << "rectangle down from right to left(3)" << std::endl;
    std::cout << "rectangle down from left to right(4)" << std::endl;
    std::cout << "draw a pyramid(5)" << std::endl;
    std::cin >> e;
    print_star_flag(a, e, m);
}
