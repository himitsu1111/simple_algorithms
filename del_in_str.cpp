//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>

#pragma hdrstop

////---------------------------------------------------------------------------

using namespace std;

char* del_in_str(char* a, char* b)
{
	char * At=0;
	char * Nt=0;
	for (char * Bt=b; *Bt; Bt++)
	{
		for (At=a,Nt=a; *At; At++)
			if (*At!=*Bt)
				*Nt++=*At;
		*Nt='\0';
	}

	return a;
}

int main()
{
	char St[] = " abcbcbcbcbccbbbc bca";
	char Qt[] = "bc";

	char* Resolt = del_in_str(St, Qt);

	cout << Resolt << " -resolt\n";
	system("pause");
	
	return 0;
}

