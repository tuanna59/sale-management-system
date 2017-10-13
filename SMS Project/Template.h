#pragma once
#ifndef Template_h
#define Template_h
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

template<class T>
class Template;

template <class T>
class Template
{
private:
	T *arr;
	int n, capacity;
public:
	Template();
	~Template();

	bool add(T element);
	bool removeIndex(int index);
	
	void addAndWrite(string path, string str);
	void removeAndWrite(int index, string path);
	void edit(int i, string s, string path);
	
	void readFile(string path);
	void writeFile(string path);
};
#endif