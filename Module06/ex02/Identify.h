#ifndef CPP_IDENTIFY_H
#define CPP_IDENTIFY_H

# include <iostream>
# include "Base.h"
# include "A.h"
# include "B.h"
# include "C.h"

Base *generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

#endif //CPP_IDENTIFY_H
