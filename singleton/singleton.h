#ifndef signleton_h
#define signleton_h

#include "../standard.h"

class singleton{

singleton()=default;
singleton(const singleton&)=default;
singleton &operator=(const singleton&)=default;
~singleton();

static singleton* m_p_sgtn;
int a =10;

public:
    
 static singleton & get_instance();
int get_a();
};

#endif