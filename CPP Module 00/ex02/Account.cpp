# include "Account.hpp"
# include <iostream>

Account::Account( int initial_deposit ) { this->_nbDeposits = initial_deposit; }

Account::~Account( void ) { }

int	Account::getNbAccounts( void ) { return (Account::_nbAccounts); }

int	Account::getTotalAmount( void ) { return (Account::_totalAmount); }

int	Account::getNbDeposits( void ) { return (Account::_totalNbDeposits); }

int	Account::getNbWithdrawals( void ) { return (Account::_totalNbWithdrawals); }

void	Account::makeDeposit( int deposit ) { this->_nbDeposits = deposit; }

bool	Account::makeWithdrawal( int withdrawal ) {
	this->_nbWithdrawals = withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const { return (Account::_amount); }

void	Account::displayStatus( void ) const
{
	;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";";
	std::cout << std::endl;
}
