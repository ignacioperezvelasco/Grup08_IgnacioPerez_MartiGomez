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
	//STDs
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
	//ITERATORS
	using myVectorIterator = std::vector<int>::iterator;
	using myDequeIterator = std::deque<int>::iterator;
	using myListIterator = std::list<int>::iterator;
	using myForward_listIterator = std::forward_list<int>::iterator;
	using myMapIterator = std::map<char,int>::iterator;
	using mySetIterator = std::set<int>::iterator;

	//REVERSE ITERATORS
	using myReverseVectorIterator = std::vector<int>::reverse_iterator;
	using myReverseDequeIterator = std::deque<int>::reverse_iterator;
	using myReverseListIterator = std::list<int>::reverse_iterator;
	using myReverseMapIterator = std::map<char,int>::reverse_iterator;
	using myReverseSetIterator = std::set<int>::reverse_iterator;

	/////////////////////////////////////////
	//RECORRIDO DE BUCLES
	//VECTOR
	std::cout << "VECTOR ITERATOR: ";
	for (myVectorIterator it = vector.begin(); it != vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "VECTOR REVERSE_ITERATOR: ";
	for (myReverseVectorIterator it = vector.rbegin(); it != vector.rend(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//DEQUE
	std::cout << "DEQUE ITERATOR: ";
	for (myDequeIterator it = deque.begin(); it != deque.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "DEQUE REVERSE_ITERATOR: ";
	for (myReverseDequeIterator it = deque.rbegin(); it != deque.rend(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//LIST
	std::cout << "LIST ITERATOR: ";
	for (myListIterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "LIST REVERSE_ITERATOR: ";
	for (myReverseListIterator it = list.rbegin(); it != list.rend(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//FORWARD_LIST
	std::cout << "FORWARD_LIST: ";
	for (myForward_listIterator it = forward_list.begin(); it != forward_list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//MAP
	std::cout << "MAP: ";
	for (myMapIterator it = map.begin(); it != map.end(); it++)
	{
		std::cout << it->first << "=" << it->second << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "MAP REVERSE_ITERATOR: ";
	for (myReverseMapIterator it = map.rbegin(); it != map.rend(); it++)
	{
		std::cout << it->first << "=" << it->second << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//SET
	std::cout << "SET ITERATOR: ";
	for (mySetIterator it = set.begin(); it != set.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "SET REVERSE_ITERATOR: ";
	for (myReverseSetIterator it = set.rbegin(); it != set.rend(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

}

