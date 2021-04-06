
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
Form("ShrubberyCreationForm", 145, 137, target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
Form(copy)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		Form::operator=rhs;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(const Bureaucrat &executor) const
{
	std::ofstream file;

	file.open(this->getTarget() + "_shrubbery",
			  std::ofstream::out | std::ofstream::trunc);
	if(file.is_open())
	{

		file << "                                               .   " << std::endl;
		file << "                                   .         ;     " << std::endl;
		file << "      .              .              ;%     ;;      " << std::endl;
		file << "        ,           ,                :;%  %;       " << std::endl;
		file << "         :         ;                   :;%;'     .," << std::endl;
		file << ",.        %;     %;            ;        %;'    ,;  " << std::endl;
		file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl;
		file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl;
		file << "    ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl;
		file << "     `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl;
		file << "      `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl;
		file << "         `:%;.  :;bd%;          %;@%;'             " << std::endl;
		file << "           `@%:.  :;%.         ;@@%;'              " << std::endl;
		file << "             `@%.  `;@%.      ;@@%;                " << std::endl;
		file << "               `@%%. `@%%    ;@@%;                 " << std::endl;
		file << "                 ;@%. :@%%  %@@%;                  " << std::endl;
		file << "                   %@bd%%%bd%%:;                   " << std::endl;
		file << "                     #@%%%%%:;;                    " << std::endl;
		file << "                     %@@%%%::;                     " << std::endl;
		file << "                     %@@@%(o);  . '                " << std::endl;
		file << "                     %@@@o%;:(.,'                  " << std::endl;
		file << "                 `.. %@@@o%::;                     " << std::endl;
		file << "                    `)@@@o%::;                     " << std::endl;
		file << "                     %@@(o)::;                     " << std::endl;
		file << "                    .%@@@@%::;                     " << std::endl;
		file << "                    ;%@@@@%::;.                    " << std::endl;
		file << "                   ;%@@@@%%:;;;.                   " << std::endl;
		file << "               ...;%@@@@@%%:;;;;,..                " << std::endl;
		file.close();
	}
	else
		std::cerr << "Error: open the file." << std::endl;
}
