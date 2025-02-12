#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat & );
		WrongCat&		operator=( const WrongCat & );
		~WrongCat( void );

		void			makeSound( void ) const;
};

#endif
