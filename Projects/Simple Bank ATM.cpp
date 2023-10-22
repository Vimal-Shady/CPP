#include<iostream>
//DONE BY VIMAL_SHADY
int main()
{
    int withdraw,deposit,x,tr;
    int limit = 100,balance=10000;
    std::string op,pin;
    std::cout<<"\n___Welcome To Shady Bank___"<<std::endl;
    //getting input from the user
    std::cout<<"Enter Your Personal Identification Number: ";
    std::cin>>pin;
    if (pin=="Vimal_Shady"){
    std::cout<<"\n1--> Press '1' If You Wish To Withdraw Money \n2--> Press '2' If You Wish To Deposit Money\n3--> Press '3' To Check Balance\n4-->Exit"<<std::endl;
    std::cout<<"Your Balance is: $"<<balance;
    //using while loop for continuation
    while(balance!=0){
        std::cout<<"\n Enter The Operation You Want To Perform: ";
        std::cin>>op;
        if (op=="1"){       //Withdraw Conditions
            std::cout<<"\nEnter The Amount You Want To Withdraw: $";
            std::cin>>withdraw;
            x=balance-withdraw;
            if(limit>x){
                std::cout<<"___You Have Exceeded Banking Limit!___";
                 break;}
            balance-=withdraw;
            std::cout<<"\n-------------------------------------------\n";
            std::cout<<"You have withdrawed $"<<withdraw<<"\nAnd your balance is: $"<<balance;
            std::cout<<"\n___________________________________________\n";
            }
        else if (op=="2"){  //Deposit Conditions
            std::cout<<"\nEnter The Amount You Want To Deposit: $";
            std::cin>>deposit;
            balance+=deposit;
            std::cout<<"\n-------------------------------------------\n";
            std::cout<<"You have Deposited $"<<deposit<<"\nAnd Your Balance is: $"<<balance;
            std::cout<<"\n___________________________________________\n";}

        else if (op=="3"){  //Check Balance
            std::cout<<"\n-------------------------------------------\n";
            std::cout<<"Your Balance is: $"<<balance;
            std::cout<<"\n___________________________________________\n";}

        else if (op == "4"){    //Exit code
            std::cout<<"\n___________________________________________\n";
            std::cout<<"\nThanks For Banking with Us!"<<std::endl;
            std::cout<<"Done By VIMAL_SHADY";
            break;}
        if (balance==limit){
        std::cout<<"Your Balance Is $"<<balance<<" Please Deposit Before Withdrawing";
        std::cout<<"\n-------------------------------------------\n";}
        if (op!="1"&&op!="2"&&op!="3"&&op!="4"){
            std::cout<<"\n Please Enter a Valid Operation";
            tr+=1;}
        if (tr>2){
            break;}
        }}
        else{
            std::cout<<"Your PIN Is Incorrect";
        }
}
