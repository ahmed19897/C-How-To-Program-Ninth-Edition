#include "Invoice.h"
#include <string>
#include <iostream>
using namespace std;

Invoice::Invoice (string PartNum,string PartDesc,int PartQuant,int Priceperitem)
    :PartNumber(PartNum),PartDescription(PartDesc)

{
    if (PartQuant<0)
    {
        PartQuantity=0;
        cerr<<"invalid initialized part quantity";
    }
    else
        PartQuantity=PartQuant;

    if (Priceperitem<0)
    {
        PricePerItem=0;
        cerr<<"invalid price per item";
    }
    else
        PricePerItem=Priceperitem;
}



 void Invoice::setPartNumber(string PartNum)
{
    PartNumber=PartNum;
}

 void Invoice::setPartDescription(string PartDescrip)
 {
    PartDescription=PartDescrip;
 }

 void Invoice::setPartQuantity(int PartQuant)
 {
    PartQuantity=PartQuant;
 }

void Invoice::setPricePerItem(int PricePerit)
{
    PricePerItem=PricePerit;
}



string Invoice::getPartNumber()const
{
    return  PartNumber;
}
string Invoice::getPartDescription()const
{
    return  PartDescription;
}
int Invoice::getPartQuantity()const
{
    return  PartQuantity;
}
int Invoice::getPricePerItem()const
{
    return  PricePerItem;
}
int Invoice::getInvoiceAmount()const
{
    int InvoiceAmount;
    InvoiceAmount=PartQuantity*PricePerItem;

    if (InvoiceAmount<0)
    {
        InvoiceAmount=0;
    }
    return InvoiceAmount;
}