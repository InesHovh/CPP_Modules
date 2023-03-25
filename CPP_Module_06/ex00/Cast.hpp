#ifndef CAST_HPP
# define CAST_HPP

#include <iostream>
#include <string>
#include <math.h> 

class Cast
{
private:
	double	arg;
	bool	temp;
	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();
public:
	Cast();
	Cast(std::string _arg);
	Cast(const Cast &obj);
	Cast &operator=(const Cast &obj);
	~Cast();
};

#endif