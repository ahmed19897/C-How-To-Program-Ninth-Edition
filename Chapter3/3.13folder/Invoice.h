#include <string>




class Invoice
{

    public:

            Invoice(std::string PartNum,std::string PartDesc,int PartQuant,int Priceperitem);
            void setPartNumber(std::string PartNum);
            void setPartDescription(std::string PartDescrip);
            void setPartQuantity(int PartQuant);
            void setPricePerItem(int PricePerit);
            std::string getPartNumber()const;
            std::string getPartDescription()const;
            int getPartQuantity()const;
            int getPricePerItem()const;
            int getInvoiceAmount()const;

    private:

            std::string PartNumber;
            std::string PartDescription;
            int PartQuantity;
            int PricePerItem;

};