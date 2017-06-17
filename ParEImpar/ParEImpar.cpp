#include "stdafx.h"  //________________________________________ ParEImpar.cpp
#include "ParEImpar.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	ParEImpar app;
	return app.BeginDialog(IDI_ParEImpar, hInstance);
}

void ParEImpar::Window_Open(Win::Event& e)
{
}

void ParEImpar::tbxN_Change(Win::Event& e)
{
	tbxX.IntValue = computeX(tbxN.IntValue);
	tbxY.IntValue = computeY(tbxN.IntValue);
}
int ParEImpar::computeX(int n)
{
	if (n % 2 == 0)
	{
		return n + 2;
	}
	else
	{
		return n + 1;
	}
}
int ParEImpar::computeY(int n)
{
	if (n % 2 == 0)
	{
		return n + 1;
	}
	else
	{
		return n + 2;
	}
}