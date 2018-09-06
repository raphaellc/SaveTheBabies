#pragma once
#include <iostream>
class ISerializavel
{
public:
	 ISerializavel(){};
	 ~ISerializavel(){};
	virtual bool gravar(std::ostream & os) const = 0;
	virtual bool carregar(std::istream & is) = 0;
};

