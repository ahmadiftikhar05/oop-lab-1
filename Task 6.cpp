#include<iostream>
using namespace std;
class vehicle
{
    private:
    string make;
    string model;
    int year;

    public:
    vehicle(string mk,string mdl,int yr):make(mk),model(mdl),year(yr){}

    void setMake(string mk)
    {
       make = mk;
    }
    void setModel(string mdl)
    {
       model = mdl;
    }
    void setYear(int yr)
    {
        year = yr;
    }
    void servicing(unsigned int miles)
    {
       if(miles>=10000)
       {
         cout<<"Your car need servicing" << endl;
       }
    }
    void displayVehicleInfo()
    {
        cout<<"Make : " << make << endl;
        cout<<"Model : " << model << endl; 
        cout<<"Year : " << year << endl;
    }
};
int main()
{
    string make,model;
    int year;
    int miles;
  vehicle myvehicle("Toyota","Corolla",2020);
  myvehicle.displayVehicleInfo();

  cout<<"Enter Your Vehicle Make : ";
  cin>>make;
  myvehicle.setMake(make);
  cout<<"Enter Your Vehicle Model : ";
  cin>>model;
  myvehicle.setModel(model);
  cout<<"Enter Your Vehicle Year : ";
  cin>>year;
  myvehicle.setYear(year);
  cout<<"Enter Your Vehicle Miles : ";
  cin>>miles;
  myvehicle.displayVehicleInfo();
  myvehicle.servicing(miles);
  return 0;
}