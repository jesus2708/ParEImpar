#pragma once  //______________________________________ ParEImpar.h  
#include "Resource.h"
class ParEImpar: public Win::Dialog
{
public:
	ParEImpar()
	{
	}
	~ParEImpar()
	{
	}
	int computeX(int n);
	int computeY(int n);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxN;
	Win::Textbox tbxX;
	Win::Textbox tbxY;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(5.42396);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(3.04271);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ParEImpar";
		tbxN.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 1.82562, 0.21167, 3.41313, 0.60854, hWnd, 1000);
		tbxX.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 1.82562, 1.24354, 3.41313, 0.60854, hWnd, 1001);
		tbxY.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 1.82562, 2.24896, 3.41313, 0.60854, hWnd, 1002);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxN.Font = fontArial009A;
		tbxX.Font = fontArial009A;
		tbxY.Font = fontArial009A;
	}
	//_________________________________________________
	void tbxN_Change(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (tbxN.IsEvent(e, EN_CHANGE)) {tbxN_Change(e); return true;}
		return false;
	}
};
