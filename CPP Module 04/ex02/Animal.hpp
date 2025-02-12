#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
	public:
		Animal( void );
		Animal( const Animal & );
		Animal&			operator=( const Animal & );
		virtual	~Animal( void );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const = 0;

	protected:
		std::string		type;
};

#endif
