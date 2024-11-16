#include "User.h"

unsigned int User::getID()
{
	return this->_id;
}

std::string User::getUserName()
{
	return this->_userName;
}

unsigned int User::getAge()
{
	return this->_age;
}

void User::init(unsigned int id, std::string username, unsigned int age)
{
	id = getID();
	username = getUserName();
	age = getAge();

}

void User::clear()
{
	this->_id = NULL;
	this->_age = NULL;
	this->_userName = "";
}

DevicesList& Device::getDevices()
{
	return deviceList;
}

void Device::addDevice(Device newDevice)
{
	DevicesList::add(const newDevice);
}

bool Device::checkIfDevicesAreOn()
{
	return this->isActive();
