//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MENU.h"
#include "START.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Label1Click(TObject *Sender)
{
        Form1->Close();
        Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
        Form1->Close();
}
//---------------------------------------------------------------------------
