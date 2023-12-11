#include <iostream>
#include "clsInputValidate.h"
#include "clsDate.h"

using namespace std;


int main()
{
    clsDate Date;
    clsDate DateFrom(11,12,2023);
    clsDate DateTo(31, 12, 2023);


    cout << clsInputValidate::IsValideDate(clsDate(3, 3, 22022));

    //cout<<clsInputValidate::isNumberBetween(5, 1, 10)<<endl;
    //cout<<clsInputValidate::isNumberBetween(5, 5, 10)<<endl;

    //clsDate::Print(Date);
    //cout << "\n";
    //cout<<clsInputValidate::IsDateBetween( clsDate(), clsDate(31, 12, 2023), clsDate(8,12,2023)) << endl;
    //

   /* int number = clsInputValidate::ReadIntNumber("Invalid Number, Enter a gain: ");
    
    cout << number << endl;*/
    
    /*int number = clsInputValidate::ReadIntNumberBetween(10, 50, "Invalid Number, Enter a gain: ");
    
    cout << number << endl;
    */


    system("pause>0");
}