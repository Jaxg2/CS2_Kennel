#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;


Dog::Dog()
{
	dog_age = 0;
	hum_age = 0;

}

int Dog::getAge()
{

	cout << "Enter the age of the dog in years: " << endl;
	cin >> dog_age;

	hum_age = (dog_age * 7);

	return hum_age;

}

string Dog::getName()
{
	cout << "Enter the dog's name: " << endl;
	cin >> name;
	return name;
}

string Dog::getBreed()
{
	cout << "Enter the dog's breed: " << endl;
	cin >> breed;
	return breed;
}

string Dog::shakeHand()
{
	shake = name + " reaches out his paw to shake.";
	cout << shake << endl;
	return shake;
}

string Dog::sitDown()
{
	sit = name + " sits on his back legs.";
	cout << sit << endl;
	return sit;
}

void Dog::printInfo()
{
	cout << "Name: " << name << endl << "Breed: " << breed << endl << "Age: " << hum_age << endl;
}