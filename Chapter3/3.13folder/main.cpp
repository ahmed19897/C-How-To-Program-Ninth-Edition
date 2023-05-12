#include "Invoice.h"
#include <iostream>
using namespace std;

int main()
{

    Invoice Invoice1("a","b",1,2);

    Invoice1.setPartDescription("abc");
    Invoice1.setPartNumber("852");
    Invoice1.setPartQuantity(97);
    Invoice1.setPricePerItem(6);

    cout<<Invoice1.getPartDescription()<<Invoice1.getPartNumber()<<Invoice1.getPartQuantity()<<Invoice1.getPricePerItem()<<Invoice1.getInvoiceAmount();


    return 0;
}