#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
public:

	Contact();
	~Contact();

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string	getPhoneNumber() const;
	std::string getSecret() const;
	
	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setNickName(std::string name);
	void setPhoneNumber(std::string number);
	void setSecret(std::string secret);
	
private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string	_phoneNumber;
	std::string	_secret;
};

#endif
