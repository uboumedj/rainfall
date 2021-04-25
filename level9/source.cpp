#include <iostream>
#include <cstring>
#include <unistd.h>

class N
{
	public:
		N(int n): _number(n)
		{
		}

		void setAnnotation(char *arg)
		{
			memcpy(this->_str, arg, strlen(arg));
		}

		int operator+(N &other)
		{
			return (this->_number + other._number);
		}

		int  operator-(N &other)
		{
			return (this->_number - other._number);
		}

	private:
		int		_number;
		char	_str[100];
};

int main(int argc, char **argv)
{
	if (argc > 2)
		exit(1);
	N *n = new N(5);
	N *n2 = new N(6);

	n->setAnnotation(argv[1]);
	return (n2->operator+(*n));
}