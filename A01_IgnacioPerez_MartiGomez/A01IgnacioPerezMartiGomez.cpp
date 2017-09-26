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
#include <iterator>


void main()
{
	///////////////////////////////////////////
	std::vector<int> vector({ 1,2,3,4,5});
	std::deque<int> deque({ 1,2,3,4,5 });
	std::list<int> list({ 1,2,3,4,5 });
	std::forward_list<int> forward_list({ 1,2,3,4,5 });
	std::map<char,int> map;
	map['a'] = 1;
	map['b'] = 2;
	map['c'] = 3;
	map['d'] = 4;
	map['e'] = 5;
	std::set<int> set({ 1,2,3,4,5 });

    ////////////////////////////////////////

	using myVectorIterator = std::vector<int>::iterator;
	using myDequeIterator = std::deque<int>::iterator;
	using myListIterator = std::list<int>::iterator;
	using myForward_listIterator = std::forward_list<int>::iterator;
	using myMapIterator = std::map<char,int>::iterator;
	using mySetIterator = std::set<int>::iterator;

	/////////////////////////////////////////
	//RECORRIDO DE BUCLES
	//VECTOR
	std::cout << "VECTOR: ";
	for (myVectorIterator it = vector.begin(); it != vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//DEQUE
	std::cout << "DEQUE: ";
	for (myDequeIterator it = deque.begin(); it != deque.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//LIST
	std::cout << "LIST: ";
	for (myListIterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//FORWARD_LIST
	std::cout << "FORWARD_LIST: ";
	for (myForward_listIterator it = forward_list.begin(); it != forward_list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//MAP
	std::cout << "MAP: ";
	for (myMapIterator it = map.begin(); it != map.end(); it++)
	{
		std::cout << it->first << "=" << it->second << " ";
	}
	std::cout << std::endl;

	//SET
	std::cout << "SET: ";
	for (mySetIterator it = set.begin(); it != set.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

}

