#include<iostream>
using namespace std;

class person
{
public:
	string name;
	int age;
	
	void introducePerson()
	{
		cout << "Person Name :" << name << endl;
		cout << "Person Age :" << age << endl;
	}
};
class house
{
   public:
	   person person1;
	   person person2;

};
int main()
{
	
	house house1;
	house1.person1.name = "Alice";
	house1.person1.age = 18;
	house1.person1.introducePerson();
	cout << endl;
	house1.person2.name = "John";
	house1.person2.age = 20;
	house1.person2.introducePerson();
    return 0;
}