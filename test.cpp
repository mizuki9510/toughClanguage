#include<stdio.h>
#include<iostream>

typedef struct
{
	char name[30];
	unsigned int age;
	unsigned int sex;
} database;

int main(void)
{	
	database data[3];
	for(int i = 0; i < 3; i++){
		std::cout << i+1 << "age" <<std::endl;	
		std::cin >> data[i].age;
		std::cout << i+1 << "name" <<std::endl;	
		std::cin >> data[i].name;
		std::cout << i+1 << "sex" <<std::endl;	
		std::cin >> data[i].sex;
	}
	for(int i = 0; i < 3; i++){
		std::cout << "age,name,sex" << data[i].age << data[i].name << data[i].sex << std::endl; 
	}


	return 0;
	
}


