#include<iostream>
using namespace std;
class vehicle{
	public:
		string make;
		string model;
		int year;
};
class car:public vehicle{
	public:
		int seatingcapacity;
		string fueltype;
};
class truck:public vehicle{
	public:
		int payloadcapacity;
		int towingcapacity;
};
int main(){
	car mycar;
	mycar.make="porsche";
	mycar.model="F1-race car";
	mycar.year=2020;
	mycar.seatingcapacity=2;
	mycar.fueltype="petrol";
	
	truck tr;
	tr.make="honda";
	tr.model="fouziya";
	tr.year=2022;
	tr.payloadcapacity=600;
	tr.towingcapacity=1200;
	
	cout<<"---car details---"<<endl;
	cout<<"car company: "<<mycar.make<<endl;
	cout<<"car model: "<<mycar.model<<endl;
	cout<<"year: "<<mycar.year<<endl;
	cout<<"seating capacity: "<<mycar.seatingcapacity<<endl;
	cout<<"fuel type: "<<mycar.fueltype<<endl<<endl;
	
	cout<<"---truck details---"<<endl;
	cout<<"truck company: "<<tr.make<<endl;
	cout<<"truck model: "<<tr.model<<endl;
	cout<<"year: "<<tr.year<<endl;
	cout<<"payload capacity: "<<tr.payloadcapacity<<endl;
	cout<<"towing capacity: "<<tr.towingcapacity<<endl;
	
}
