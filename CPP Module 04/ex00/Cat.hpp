#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat & );
		Cat&		operator=( const Cat & );
		~Cat( void );

		void		makeSound( void );
};

#endif
