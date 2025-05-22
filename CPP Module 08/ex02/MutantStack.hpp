#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>

class MutantStack
{
    public:
        MutantStack( void );
        MutantStack( const MutantStack & );
        MutantStack			&operator=( const MutantStack & );
        ~MutantStack( void );

    private:
        std::string				attribute;
};

#endif
