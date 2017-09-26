// A01IgnacioPerezMartiGomez.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>


void main()
{
	///////////////////////////////////////////
	std::vector<int> vector({ 1,2,3,4,5});
	std::deque<int> deque({ 1,2,3,4,5 });
	std::list<int> list({ 1,2,3,4,5 });
	std::forward_list<int> forward_list({ 1,2,3,4,5 });
	std::map<std::string,int> map;
	map["uno"] = 1;
	map["dos"] = 2;
	map["tres"] = 3;
	map["cuatro"] =4 ;
	map["cinco"] = 5;
	std::set<int> set({ 1,2,3,4,5 });

    ////////////////////////////////////////

	using  myVectorIterator = std::vector<int>::iterator;
	using  myDequeIterator = std::deque<int>::iterator;
	using  myListIterator = std::list<int>::iterator;
	using  myForward_listIterator = std::forward_list<int>::iterator;
	using  myMapIterator = std::map<std::string,int>::iterator;
	using  mySetIterator = std::set<int>::iterator;

	/////////////////////////////////////////

}

