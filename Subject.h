//Header File


#ifndef SUBJECT_H_
#define SUBJECT_H_
#include <vector>
#include <list>
#include "GUI.h"
#include "Personaje.h"

class Subject
{
    //Lets keep a track of all the GUIs we have observing
    std::vector<GUI*> list;

public:
    void Attach(GUI *PtrGui);
    void Detach(GUI *PtrGui);
    void Notify(Personaje* PtrPersonaje);
};

#endif /* LOGICA_H_ */
