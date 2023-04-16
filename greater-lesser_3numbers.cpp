//Greater and lesser values of three integers
#include <iostream>
#include <stdlib.h>
/*run this program using the console pauser or add your own getch, system("pause") or input loop*/

int main() {

int major{},minor{},num1{},num2{},num3{};
   
    std::cout<<"Enter the first number: ";
    std::cin>>num1;
    std::cout<<"Enter the second number: ";
    std::cin>>num2;
    std::cout<<"Enter the third number: ";
    std::cin>>num3;
    
    if (num1==num2&&num2==num3)
        std::cout<<"\nThe numbers are the same "<<std::endl;
   
    else{  
        if (num1>=num2&&num1>=num3){
            major=num1;
            if (num2>=num3){
            minor=num3;
            }
            else minor=num2;
        }
    
        else if (num2>=num1&&num2>=num3){
                major=num2;
                if (num1>=num3){
                minor=num3;
                }
                else minor=num1;
        }
    
        else {
            major=num3;
            if (num1>=num2){
            minor=num2;
            }
            else minor=num1;
        }
    
            std::cout<<"\nThe smaller number is: "<<minor<<std::endl;
            std::cout<<"The larger number is: "<<major<<std::endl;
    }
	
	system("PAUSE>NULL");
	return 0;
}
