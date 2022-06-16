#include<stdio.h>
#include<iostream>


enum
{
	OLYMPIC_NON,
	OLYMPIC_SUM,
	OLYMPIC_WIN,
};

int olympic(int year);


int main(void)
{	
	int year,hold;
	std::cin >> year;
	hold = olympic(year);
	
	switch (hold)
	{
	case OLYMPIC_NON:
		std::cout << "closed" << std::endl;
		break;
	case OLYMPIC_SUM:
		std::cout << "summer olympic will be hold" << std::endl;
		break;
	case OLYMPIC_WIN:
		std::cout << "winter olympic will be hold" << std::endl;
		break;
	};

	return 0;
	
}

int olympic(int year)
{
	if(year%2==0)
	{
		if(year%4==0)
		{
			return OLYMPIC_SUM;
		}
		else return OLYMPIC_WIN;
	}else
	{
		return OLYMPIC_NON;
	}

}
