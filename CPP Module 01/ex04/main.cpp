#include <iostream>
#include <fstream>

std::string	replace_name( std::string name ) { return (name + ".replace"); }

void	replace( char **av, std::string &buffer )
{
	const std::string	search = av[2];
	const std::string	replace = av[3];
	size_t				pos;

	pos = buffer.find(search);
	while (pos != std::string::npos)
	{
		buffer.erase(pos, search.length());
		buffer.insert(pos, replace);
		pos = buffer.find(search);
	}
}

int	main( int ac, char **av )
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		buffer;

	if (ac != 4)
		return (1);
	infile.open(av[1]);
	if (infile.fail())
		return (1);
	outfile.open(replace_name(av[1]).c_str());
	if (outfile.fail())
		return (infile.close(), 1);
	getline(infile, buffer);
	while (!infile.eof())
	{
		replace(av, buffer);
		outfile << buffer << std::endl;
		getline(infile, buffer);
	}
	infile.close();
	outfile.close();
}
