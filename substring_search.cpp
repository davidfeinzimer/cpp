// Finds the starting location of string s in string T

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

string T = "abjoivlvklsdkjsldkxcnvdsf";
string s = "kjsldk";

int main()
{
	for (int j = 0; j < s.length(); j++)
	{
		for (int i = 0; i < T.length(); i++)
		{
			int T_pos = i;
			int s_pos = j;
			while (T[T_pos] == s[s_pos])
			{
				T_pos++;
				s_pos++;
				if (s_pos == s.length())
				{
					cout << "Found at T index " << T_pos - s_pos << endl;
					return 0;
				}
			}
		}
	}
	return 0;
}