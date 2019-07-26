#include "singleton.h"

using namespace std;


std::mutex mtx;

singleton * singleton::m_p_sgtn =nullptr;

 singleton & singleton::get_instance()
 {
     if(m_p_sgtn==nullptr){
         mtx.lock();
         singleton::m_p_sgtn = new singleton;
         mtx.unlock();
     }

     return *m_p_sgtn;
 }

 int singleton::get_a()
 {
     return a;
 }

 singleton::~singleton()
 {
     if(singleton::m_p_sgtn)
      delete singleton::m_p_sgtn;
 }