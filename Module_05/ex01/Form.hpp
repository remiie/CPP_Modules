#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {

private:
	bool _is_signed;
	int const _signGrade;
	int const _executeGrade;
	std::string const _name;

public:
	Form();
	Form(int signGrade, int executeGrade, std::string name);
	Form(const Form&);
	Form& operator=(const Form&);

	std::string getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;


	void beSigned(Bureaucrat const &B);
	void signForm();
	void setName(const std::string);
	void setSignGrade(int signGrade);
	void setExecuteGrade(int executeGrade);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};

	virtual ~Form();
};

std::ostream& operator<<(std::ostream&out, Form const &F);

#endif
