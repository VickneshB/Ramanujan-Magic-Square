#include "Ramanujan-Magic-Square.h"


// Checking if the input dated is a valid or not
bool checkDate(int date, int month, int year){
    
    if(month < 0 || month > 12 || year < 0 || date < 1 || date > 31){return false;} // if the date is out of range it is considered to be invalid
    bool result = true; // taken to ve a valid date by default
    switch(month){
	// checking for months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
        if (date == 31){result = false;}
        break;
        
        // checking for February by checking for leap year
        case 2:
        if(year%4 != 0 && date > 28){result = false;} // Non-leap year (as it is not divisible by 4) check
        else if((year%400 != 0 && year%100 == 0) && (date > 28)){result = false;} // Non-leap year (as it is not divisible by 400 even though it is divisible by 100) check
        else if (date > 29){result = false;} //Leap year check
        break;
    }
    return result;
}

std::vector<std::vector<int>> magic_square(int date, int month, int year){
    
    // Check to see if the date is valid
    if (checkDate(date,month,year)){
        std::vector<std::vector<int>> square{{date,month, year/100, year%100},{(year%100)+1,(year/100)-1,month-3,date+3},{month-2,date+2,(year%100)+2,(year/100)-2},{(year/100)+1,(year%100)-1,date+1,month-1}}; // Compute the Magic Square
        return square;
    }
    
    else{
        return {{0}}; // Return a 1*1 vector if it is a invalid date
    } 
}
