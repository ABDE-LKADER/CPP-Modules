#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal( const Animal & );
		Animal&			operator=( const Animal & );
		~Animal( void );

		std::string		getType( void ) const;
		void			makeSound( void ) const;
	protected:
		std::string		type;
};

#endif
