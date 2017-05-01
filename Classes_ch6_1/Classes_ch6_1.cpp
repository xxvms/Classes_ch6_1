// Classes_ch6_1.cpp : Defines the entry point for the console application.
//

#include <iostream>

class Int
{
private:
	int Integer;
public:
	Int():Integer(0)
	{}

	Int(int number): Integer(number)
	{}

	void intDisplay()
	{
		std::cout << Integer << std::endl; 
	}

	void inputValue()
	{
		std::cout << "Please provide number: ";
		std::cin >> Integer;
	}
	void addInt(Int, Int);
	
};
void Int::addInt(Int integer, Int integer2)
{
	Integer = integer.Integer + integer2.Integer;
}

int main()
{
//	int number = 1;
	Int num2, num3;
	Int num1(1);
 

	num1.intDisplay();
	num2.intDisplay();
	num3.intDisplay();
	
	num2.inputValue();
	
	std::cout << std::endl;

	num1.intDisplay();
	num2.intDisplay();
	num3.intDisplay();
	std::cout << std::endl;

	num3.addInt(num1, num2);
	std::cout << std::endl;


	num1.intDisplay();
	num2.intDisplay();
	num3.intDisplay();





	

	system("pause");
    return 0;
}

