#pragma once
#include <string>

class User
{
public:
	//fields
	int _id;
	int _age;
	std::string _userName;
	//methods
	unsigned int getID();
	std::string getUserName();
	unsigned int getAge();
private:
	//methods
	void init(unsigned int id, std::string username, unsigned int age);
	void clear();
	DevicesList& getDevices();
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn();
};