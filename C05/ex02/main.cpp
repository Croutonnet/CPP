#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){
	ShrubberyCreationForm tree("test");
	RobotomyRequestForm	robo("Ton ass");
	PresidentialPardonForm zaph("Serviette");
{
	Bureaucrat	bur(2, "OK");
	cout << GREEN "-----------CORRECT----------" RESET << endl;
	try {
		tree.beSigned(bur);
		robo.beSigned(bur);
		zaph.beSigned(bur);
		bur.executeForm(tree);
		bur.executeForm(robo);
		bur.executeForm(zaph);
	}catch(std::exception &e){
		cout << e.what() << endl;
	}
}
{
	cout << RED "-----------INCORRECT----------" RESET << endl;
	Bureaucrat	bur(130, "ONLYSHRUBBERY");
	Bureaucrat	bure(40, "NOTPRESI");
	try {
		bur.executeForm(tree);
		bure.executeForm(tree);
	}catch(std::exception &e){
		cout << e.what() << endl;
	}
	try {
		bur.executeForm(robo);
	}catch(std::exception &e){
		cout << e.what() << endl;
	}
	try {
		bure.executeForm(zaph);
	}catch(std::exception &e){
		cout << e.what() << endl;
	}
}

}