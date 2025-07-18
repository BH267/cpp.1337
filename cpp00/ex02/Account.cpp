#include "Account.hpp"
#include <iomanip>
#include <iostream>

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{

}

void	Account::makeDeposit(int deposit)
{
}

bool	Account::makeWithdrawal(int Withdrawal)
{
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "" ;
}

void Account::_displayTimestamp(void)
{
	std::cout << '[' << std::get_time << ']';
}
