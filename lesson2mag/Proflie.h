#pragma once
#include <string>
#include "UserList.h"
#include "UserList.cpp"
#include "User.h"
#include "User.cpp"

class  Proflie
{
public:
	//metods
	void init(User owner);
	void setStatus(std::string new_status);
	void addPostToProfilePage(std::string post);
	void addFriend(User friend_to_add);
private:
	//filds
	std::string owner; //the user
	std::string post;
	std::string ststus;
	UserList friends;
	//metods
	void clear();
	User getOwner();
	std::string getPage();
	std::string getFriends();
	std::string getFriendsWithSameNameLength();
};