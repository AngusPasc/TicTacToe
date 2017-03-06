//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "START.h"
#include "MENU.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------









void __fastcall TForm1::Image1StartDock(TObject *Sender,
      TDragDockObject *&DragObject)
{
        Image2->Picture->LoadFromFile("assets/stbutton.bmp");          
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label1MouseEnter(TObject *Sender)
{
        Image2->Picture->LoadFromFile("assets/stbutton.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label1MouseLeave(TObject *Sender)
{
    Image2->Picture->LoadFromFile("assets/stbuttoff.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label1Click(TObject *Sender)
{
        Form1->Visible=false;
        Form2->Visible=true;
}
//---------------------------------------------------------------------------

