//Header File
#pragma once
#include <vector>
#include <list>
#include "GUI.h"

class Subject
{
    //Lets keep a track of all the shops we have observing
    std::vector<GUI*> list;

public:
    void Attach(GUI *product);
    void Detach(GUI *product);
    void Notify(float x);
};

//CPP File
#include "ASubject.h"
#include <algorithm>

using namespace std;

void ASubject::Attach(GUI *gui)
{
    list.push_back(gui);
}
void ASubject::Detach(GUI *gui)
{
    list.erase(std::remove(list.begin(), list.end(), gui), list.end());
}

void ASubject::Notify(float x)
{
    for(vector<Shop*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(x);
        }
    }
}
