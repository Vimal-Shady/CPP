#include<iostream>
#include<cstdlib>
int main()
{
    int input,value,guess=0;
    std::string cont,name;
    std::cout<<"__________Welcome To Number Guessing Game__________"<<std::endl;

    //Getting Input From the User
	std::cout<<"Hi Player!"<<std::endl;
	std::cout<<"Your goal is to guess the number which is randomly chosen from 1 to 100"<<std::endl;
    	std::cout<<"Shall We Start The Game Y/N : ";
    	std::cin>>cont;
    	std::cout<<"Enter Your Name: ";
    	std::cin>>name;

    while(value<=100){
        //using while loop for game continuation
        //Getting input from the user

        if(cont=="y"||cont=="Y"){
            if(guess==10){
            std::cout<<"You Have Reached Maximum Attempts"<<std::endl;
			break;}
            value=((rand()-guess)%100)+1;

            //adding hint for the player

            if(value<10){
                std::cout<<"\nHINT: The Number is Between 0 and 9 "<<std::endl;}
            else if(value>=10&&value<19){
                std::cout<<"\nHINT: The Number is Between 10 and 19 "<<std::endl;}
            else if(value>=20&&value<29){
                std::cout<<"\nHINT: The Number is Between 20 and 29 "<<std::endl;}
            else if(value>=30&&value<39){
                std::cout<<"\nHINT: The Number is Between 30 and 39 "<<std::endl;}
            else if(value>=40&&value<49){
                std::cout<<"\nHINT: The Number is Between 40 and 49 "<<std::endl;}
            else if(value>=50&&value<59){
                std::cout<<"\nHINT: The Number is Between 50 and 59 "<<std::endl;}
            else if(value>=60&&value<69){
                std::cout<<"\nHINT: The Number is Between 60 and 69 "<<std::endl;}
            else if(value>=70&&value<79){
                std::cout<<"\nHINT: The Number is Between 70 and 79 "<<std::endl;}
            else if(value>=80&&value<89){
                std::cout<<"\nHINT: The Number is Between 80 and 89 "<<std::endl;}
            else if(value>=90&&value<=100){
                std::cout<<"\nHINT: The Number is Between 90 and 100 "<<std::endl;}

            //Getting Integer from the User

            std::cout<<"\nEnter the Number: ";
            std::cin>>input;            

            //Winning Condition

            if(value==input){
                std::cout<<"You have won the Game!!!!!!"<<std::endl;
                guess+=1;
                std::cout<<"With "<<guess<<" Attempts!"<<std::endl;
                std::cout<<"Do you Want to Contiue: Y/N? : ";
                std::cin>>cont;
            }
            //Wrong Guess Condition
            else if(value!=input){
                std::cout<<"You Have Guessed a Wrong Number! "<<std::endl;
                guess+=1;
                std::cout<<"Attempts: "<<guess<<std::endl;
            }}
            //Ending Loop Using Break Statement If the User Wants to quit

        else if(cont=="N"||cont=="n"){
            std::cout<<"\nThats's a Good Game! Sayonara "<<name<<"-san"<<std::endl;
            std::cout<<"Done By Vimal_Shady";
            break;
        }
}}
