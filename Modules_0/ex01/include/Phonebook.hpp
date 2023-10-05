#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.hpp"

class Phonebook {
	private:
		Contact	_contact[8];
		int		_nbContact;

	public:
		Phonebook(void);
		~Phonebook(void);

		int		get_nbContact(void) const;
		void	set_nbContact(int i);
		Contact	get_contact(int i) const;
		void	push_back(void);
		void	set_contact(int i, Contact contact);
		bool	printContact(int i) const;
};

#endif