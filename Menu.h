/*
File: Menu.h
Purpose: Controller part of Model-View-Controller Architecture. Multimap is the Model of Model-View-Controller Architecture.
Programmed By: Derek Chan
*/
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <map>
#include "Event.h"

using namespace std;

typedef multimap<string, Event> mmap;
typedef pair<string, Event> mmap_pair;

class Menu
{
private:
	mmap container;
public:
	Menu(mmap newContainer);
	~Menu();
	void start();
};

