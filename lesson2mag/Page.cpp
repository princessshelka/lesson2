#include "Page.h"

void Page::init(std::string post, std::string status)
{
    post = " ";
    status = " ";
}

std::string Page::getPosts()
{
    return this->post;
}

std::string Page::getStatus()
{
    return this->status;
}

void Page::clearPage()
{
    
}

void Page::addLineToPosts(const std::string& new_line)
{
    if (post == " ")
    {
        post = new_line;
    }
    else 
    {
        post += "\n" + new_line;
    }
}

void Page::setStatus(const std::string& new_status) 
{
    status = new_status;
}
