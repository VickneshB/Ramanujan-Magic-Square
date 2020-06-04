#include "../include/Ramanujan-Magic-Square.h"
#include "../include/Ramanujan-Magic-Square.hpp"


int main(){

int date, month, year;

// Get the dates from user
std::cout<<"Build your own magic square with your birthdate\n";
std::cout<<"Enter you Birth date(dd): ";
std::cin>>date;
std::cout<<"Enter you Birth month(mm): ";
std::cin>>month;
std::cout<<"Enter you Birth year(yyyy): ";
std::cin>>year;

std::vector<std::vector<int>> square = magic_square(date,month,year);

// Check if the returned vector is of size 1*1 (Invalid Date case)
if (square.size() == 1 && square[0].size() == 1){
std::cout<<"Invalid Date\n"; // Printing that it's a invalid date
}
else
{
std::cout<<"You Magic Square is:\n";
for(int i=0;i<4;i++){
   for(int j=0;j<4;j++){
      std::cout<<square[i][j]<<" "; // Printing the Magic square
   }
   std::cout<<std::endl;
}
}
return 0;
}
