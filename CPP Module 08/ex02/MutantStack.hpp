#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void );
		MutantStack( const MutantStack & );
		MutantStack			&operator=( const MutantStack & );
		~MutantStack( void );

		typedef typename		std::stack<T>::container_type::iterator iterator;

		iterator				begin( void );
		iterator				end( void );
};

# include "MutantStack.tpp"

#endif
