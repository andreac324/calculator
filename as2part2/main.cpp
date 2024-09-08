//
//  main.cpp
//  as2part2
//
//  Created by Andrea d Cazares on 9/7/24.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float totalSales = 95000, estateTax = .04,FinalEstateTax, countyTax = .02,finalCountyTax, totalTax;
    cout << "The total sales amount is: " << totalSales << endl;

    FinalEstateTax = totalSales * estateTax;
    cout << "The estate tax amount is: " << FinalEstateTax << endl;

    finalCountyTax = totalSales * countyTax;
    cout<< "the county tax amount is: "<< finalCountyTax << endl;

    totalTax = finalCountyTax + FinalEstateTax;
    cout<< "the total amount of taxes due are: "<< totalTax<<endl;

    return 0;
}
