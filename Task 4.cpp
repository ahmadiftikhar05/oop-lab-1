#include<iostream>
using namespace std;
class dog
{
public:
	string name;
	string breed;
	int age;
	void bark()
	{
		cout << name << " Woof!" << endl;
	}
};
class person
{
public:
	string name, house;
	int age;
	dog pet;
	void introducePerson()
	{
		cout << "Person Name :" << name << endl;
		cout << "Person Age :" << age << endl;
		introducePet();
	}
	void introducePet()
	{
		cout << "Pet name is " << pet.name << endl;
		cout << "Pet breed is " << pet.breed << endl;
		cout << "Pet age is " << pet.age << " Years" << endl;
		pet.bark();
	}
	void changePet(string newName, string newBreed, int newAge)
	{
		cout <<" I have buyed a new pet " << endl;
		pet.name = newName;
		pet.breed = newBreed;
		pet.age = newAge;
		introducePet();
	}
};
class house
{
public:
	string name;
	person person1;
	void detail()
	{
		person1.introducePerson();
        cout<< "House Type : " << name << endl;
	}

};
int main()
{

	house house1;
	house1.name = "Appartment";
	house1.person1.name = "Alice";
	house1.person1.age = 18;
	house1.person1.pet.name = "Buddy";
	house1.person1.pet.age = 5;
	house1.person1.pet.breed = "Germon sheford";
	house1.detail();
	cout << endl;
	
	house house2;
	house2.name = "Hostle";
	house2.person1.name = "John";
	house2.person1.age = 20;
	house2.person1.pet.name = "Jack";
	house2.person1.pet.age = 4;
	house2.person1.pet.breed = "Germon sheford";
	house2.detail();
	cout << endl;
	house1.person1.changePet("stella", "bull dog", 3);
	cout << endl;

	return 0;
}