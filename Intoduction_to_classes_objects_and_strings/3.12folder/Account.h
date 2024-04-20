class Account
{
    public:
            explicit Account (int InitialBalance);
            void CreditBalance(int Added);
            void DebitBalance(int Subtract);
            int GetBalance()const;







    private:
            int AccountBalance;

};