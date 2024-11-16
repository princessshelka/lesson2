#include "Proflie.h"
#include "Page.h"
#include "Page.cpp"
#include "User.h"
#include "User.cpp"
#include <string.h>
#include "UserList.cpp"
#include "UserList.h"

void Proflie::clear()
{

}

User Proflie::getOwner()
{
    return User();
}

void Proflie::init(User owner)
{
    this->owner = owner;
    this->status = " ";
    this->post = " ";
    friends.clear();
}

void Proflie::setStatus(std::string new_status)
{
    Page::status = new status;
}

void Proflie::addPostToProfilePage(std::string post)
{
    if (Page::post == " ")
    {
        Page::post += post;
    }
    else
    {
        Page::post = post;
    }
}

void Proflie::addFriend(User friend_to_add)
{

}

std::string Proflie::getPage()
{
    return (Page::getPosts()) and (Page::getStatus());
}

std::string Proflie::getFriends()
{
    return;
}

std::string Proflie::getFriendsWithSameNameLength()
{
    return;
}
