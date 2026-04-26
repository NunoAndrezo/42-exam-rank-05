#include "bigint.hpp"

bigint::bigint(): value("0") {}

bigint::bigint(unsigned long long val) : value(std::to_string(val)) {}

bigint::bigint(const bigint &other) : value(other.value) {}

bigint::~bigint() {}

bigint &bigint::operator=(const bigint &other)
{
	if (this != &other)
	{
		this->value = other.value;
	}
	return (*this);
}

std::string bigint::getValue() const
{
	return (this->value);
}

std::ostream &operator<<(std::ostream &out, const bigint &other)
{
	std::cout << other.getValue() << std::endl;
	return (out);
}
