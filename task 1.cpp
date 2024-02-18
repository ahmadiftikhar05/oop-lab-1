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
	string name;
	dog pet;

	void introducePet()
	{
		cout << "My dog name is " << pet.name << endl;
		cout << "My dog breed is " << pet.breed << endl;
		cout << "My dog age is " << pet.age << " Years" << endl;
		pet.bark();
	}
	
};
int main()
{
	person person1;
	person1.name = "Alice";
	person1.pet.name = "Buddy";
	person1.pet.age = 5;
	person1.pet.breed = "Germon sheford";
	person1.introducePet();
	return 0;
}