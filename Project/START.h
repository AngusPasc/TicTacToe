//---------------------------------------------------------------------------

#ifndef STARTH
#define STARTH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TImage *Image2;
        TLabel *Label1;
        void __fastcall Image1StartDock(TObject *Sender,
          TDragDockObject *&DragObject);
        void __fastcall Label1MouseEnter(TObject *Sender);
        void __fastcall Label1MouseLeave(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
