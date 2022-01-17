#include "iostream"

int main(){
	int rows;
        char symbol;

	std::cout << "DRAW A HOLLY TRIANGLE" << std::endl; 
        std::cout << "Enter number of rows: " << std::endl;
        std::cin >> rows;
        std::cout << "Enter a symbol: " << std::endl;
        std::cin >> symbol; 
        std::cout << "Rows = " << rows << std::endl << "Symbol = " << symbol << std::endl;

    

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << " ";
        }

        for (int k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                std::cout << symbol;
            }
            else if (i == rows)
            {
                std::cout << symbol;
            }
            else
            {
                std::cout << " ";
            }

        }
        std::cout << std::endl;
    }
    return 0;
}

