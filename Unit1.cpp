//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
MyString *UserStr;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	UserStr = new MyString();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == VK_RETURN)
		BitBtn1->Click();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
	UserStr->SetString(AnsiString(Edit1->Text).c_str());

	if (UserStr->IsPalindrome()) {
		MessageDlg("�����������! ������ �������� �����������!",
		mtInformation, TMsgDlgButtons() << mbOK, 0);
	}
	else {
		Image1->BringToFront();
		Image1->Visible = true;
		Panel1->Visible = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
	Image1->Visible = false;
	Panel1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
    Edit1->Text = "� ���� ����� �� ���� �����";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
	Edit1->Clear();
}
//---------------------------------------------------------------------------
