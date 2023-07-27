//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

#include <iostream>
#include <string>
#include "BinarySearchTree.h"  // ADT binary tree operations
#define Num_INTS 10000;
using namespace std;

void display(string& anItem)
{
	cout << "Displaying item - " << anItem << endl;
}  

void check(const bool success)
{
	if (success)
		cout << "Done." << endl;
	else
		cout << " Entry not in tree." << endl;
}  


void CreateUniqueNumber(int NUM[10000], int SmallestNumber, int LargestNumber)
{
	LargestNumber = Num_INTS;

	for (int i = SmallestNumber; i <= LargestNumber; i++)
	{
		NUM[i] = i;

	 }
}

int main()
{
	int NUM[10000];
	int SmallestNumber = -1;
	int LargestNumber = 10000;

	cout << "\nBinary Search Tree\n\n";

	BinarySearchTree<string>* tree1Ptr = new BinarySearchTree<string>();

	CreateUniqueNumber(NUM, SmallestNumber, LargestNumber);
	
	cout << "\nInsert 10k unique Number to tree\n\n";
	for (int i = SmallestNumber; i <= LargestNumber; i++)
	{

		tree1Ptr ->add(std::to_string(NUM[i])) ;

	}

	int NumberCompares = 0;

	tree1Ptr->contains(std::to_string(NUM[0]), NumberCompares);
	NumberCompares = loc;
	cout << "\nIt took "<< NumberCompares << " Comparison to find the 1st value inserted into tree"<<endl;


	//500th  inserted into tree
	loc = -1;
    NumberCompares = 0;
	tree1Ptr->contains(std::to_string(NUM[500]), NumberCompares);
	NumberCompares = loc;
	cout << "\nIt took " << NumberCompares << " Comparison to find the 500th value inserted into tree" << endl;

	//5000th  inserted into tree
	loc = -1;
	NumberCompares = 0;
	tree1Ptr->contains(std::to_string(NUM[5000]), NumberCompares);
	NumberCompares = loc;
	cout << "\nIt took " << NumberCompares << " Comparison to find the 5000th value inserted into tree" << endl;

	loc = -1;
	NumberCompares = 0;
	SmallestNumber = 10;
	LargestNumber = 15;

	tree1Ptr->containsl(std::to_string(SmallestNumber), LargestNumber);
	NumberCompares = loc;
	cout << "\nIt took " << NumberCompares << " Comparison to find non existing value within the range of smallest to largest value in tree" << endl;

	loc = -1;
	NumberCompares = 0;
	SmallestNumber = 10001;
	LargestNumber = 10005;
	tree1Ptr->containsl(std::to_string(SmallestNumber), LargestNumber);
	NumberCompares = loc;
	cout << "\nIt took " << NumberCompares << " Comparison to find non existing value within the range of larger to largest value in tree" << endl;

	
	return 0;
} 

