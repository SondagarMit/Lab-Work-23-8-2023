#include<iostream.h>
#include<conio.h>
#include<string.h>

class Animal
{
	public:
		 char name[50];
		  char species[50];
		   int age;

		 virtual void makeSound()
		 {
			cout << "This animal makes a sound." << endl;
		  }
};

class Mammal : public Animal
{
	public:
		   void makeSound()
		{
			cout << "This mammal makes a sound." << endl;
		}
};

class Bird : public Animal
{
	public:
		 void makeSound()
	 {
		cout << "This bird makes a sound." << endl;
	 }

};

class Reptile : public Animal
{
	public:
		 void makeSound()
		{
		  cout << "This reptile makes a sound." << endl;
		}
};

void main()
{
    int i;
    clrscr();

    Animal* animals[3];

    animals[0] = new Mammal();
    animals[1] = new Bird();
    animals[2] = new Reptile();

    for (i = 0; i < 1; i++)
    {
	cout << "Enter name, species, and age for animal " << i + 1 << ":";
	cin >> animals[i]->name >> animals[i]->species >> animals[i]->age;
    }

    for ( i = 0; i < 1; i++)
    {
	cout << "Details of animal : " << i + 1;
	cout << "Name: " << animals[i]->name;
	cout << "Species: " << animals[i]->species;
	cout << "Age: " << animals[i]->age;
	animals[i]->makeSound();

    }

    for ( i = 0; i < 1; i++)
    {
	delete animals[i];
    }

    getch();
}
