#pragma once
#include <string>

class Page
{

public:
	void clearPage();
	void addLineToPosts(const std::string& new_line);
private:
	//filds
	std::string status;
	std::string page;
	std::string post;
	//metods
	std::string getPosts();
	std::string getStatus();
	void setStatus(const std::string& new_status);
	void init(std::string post, std::string status)
};