#include <iostream>
#include <limits>
using namespace std;

class Dog
{
public:
    string name;
    string breed;
    int age;
    void bark()
    {
        cout << name << " says Woof!" << endl;
    }
    void details()
    {
        cout << "Breed is " << breed << endl
             << name << "'s age is " << age << " years" << endl;
    }
};

class Person
{
public:
    string name;
    int age;
    Dog pet;
    Person *next = nullptr;
    void persondetails()
    {
        cout << "Name: " << name << endl
             << name << "'s age: " << age << endl;
        introducePet();
    }

    void introducePet()
    {
        cout << "My dog's name is " << pet.name << endl;
        pet.details();
        pet.bark();
    }

    void changePet(string newName, string newBreed, int newAge)
    {
        cout << name << " introduces a new pet!" << endl;
        pet.name = newName;
        pet.breed = newBreed;
        pet.age = newAge;
        introducePet();
    }
};

class House
{
public:
    int number_people;
    Person *person1;
    ~House()
    {
        delete person1;
    }
    void Details(string housename)
    {
         cout << "House name " << housename << endl;
    
    Person *currentPerson = person1;
    while (currentPerson != nullptr)
    {
        currentPerson->persondetails();
        currentPerson = currentPerson->next;
    }
    }
    
    void addPerson()
{
    cout << "How many people live in this house: ";
    cin >> number_people;
    cin.ignore();

    Person *currentPerson = nullptr;
    for (int i = 1; i <= number_people; i++)
    {
        char petchoice;
        Person *newPerson = new Person;
        cout << "Enter Person " << i << " Name: ";
        getline(cin, newPerson->name);
        cout << "Enter Person " << i << " Age: ";
        cin >> newPerson->age;
        cin.ignore();
        cout << "Does " << newPerson->name << " have a pet? (Y/N): ";
        cin >> petchoice;
        cin.ignore();
        if (petchoice == 'Y' || petchoice == 'y')
        {
            cout << "Enter their pet's name: ";
            getline(cin, newPerson->pet.name);
            cout << "Enter their pet's age: ";
            cin >> newPerson->pet.age;
            cin.ignore();
            cout << "Enter " << newPerson->pet.name << "'s breed: ";
            getline(cin, newPerson->pet.breed);
        }
        if (currentPerson == nullptr)
        {
            person1 = newPerson;
            currentPerson = newPerson;
        }
        else
        {
            currentPerson->next = newPerson;
            currentPerson = newPerson;
        }
    }
}

};

class Neighborhood
{
public:
    string housename;
    House houseobj;
    void addHouses()
    {
        cout << "What is the house name: ";
        cin.ignore();
        getline(cin,housename);
        houseobj.addPerson();
        houseobj.Details(housename);
    }
};

int main()
{
    string choice;
    Neighborhood neighborhood1;
    cout << "Do you want to add a house to the neighborhood (Y/N)? ";
    getline(cin, choice);
    if (choice == "Y" || choice == "y")
    {
        neighborhood1.addHouses();
    }
    return 0;
}