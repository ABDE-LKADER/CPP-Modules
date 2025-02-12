#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog & );
		Dog&		operator=( const Dog & );
		~Dog( void );

		void		makeSound( void ) const;
	private:
		Brain*		brain;
};

#endif
