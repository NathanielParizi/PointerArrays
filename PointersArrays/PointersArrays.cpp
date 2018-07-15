/*
 * PointersArrays.cpp
 *
 *  Created on: Jul 14, 2018
 *      Author: Nathaniel Parizi
 *       */

#include  <iostream>

using namespace std;

int main(){

	string text[] = {"dog","cat","mouse"};

	string *pText = texts;

	cout << sizeof(text)/sizeof(string) << endl;

	for(int i =0; i < sizeof(text)/sizeof(string); i++ ){

		cout << pText[i] " " << flush; }

		string *pElement = text;
		string *pEnd = &text[2];


		return 0;
	}
}


