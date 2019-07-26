#include "standard.h"
#include "singleton/singleton.h"
using namespace std;

int main()
{
    //creating and using singleton
    singleton &obj = singleton::get_instance();
    cout<<obj.get_a()<<endl;

    return 0;

}