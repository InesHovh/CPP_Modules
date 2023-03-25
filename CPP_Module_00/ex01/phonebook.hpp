#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
public:

	Phonebook();
	~Phonebook();

	Contact getContact(int index) const;
	int		getCount() const;

	void setContact(Contact contact);

private:

	static int		_count;

	Contact _contacts[8];
	int		_index;
};

#endif