//CPP File


#include "Subject.h"
#include <algorithm>

using namespace std;

void Subject::Attach(GUI *PtrGui)
{
    list.push_back(PtrGui);
}
void Subject::Detach(GUI *PtrGui)
{
    list.erase(std::remove(list.begin(), list.end(), PtrGui), list.end());
}

void Subject::Notify(ListaSimple* PtrPersonaje)
{
    for(vector<GUI*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(PtrPersonaje);
        }
    }
}
