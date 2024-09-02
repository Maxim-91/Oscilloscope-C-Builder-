//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "PERFGRAP.h"
#include <OleCtrls.hpp>
#include <VCFI.hpp>
#include <AxCtrls.hpp>
#include <Chartfx3.hpp>
#include <VCF1.hpp>
#include <VCSpell3.hpp>
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Series.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <TeeFunci.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit3;
        TEdit *Edit4;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TMainMenu *MainMenu1;
        TPopupMenu *PopupMenu1;
        TMenuItem *N12;
        TPanel *Panel1;
        TLabel *Label7;
        TImage *Image1;
        TLabel *Label13;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TSpeedButton *SpeedButton7;
        TSpeedButton *SpeedButton8;
        TSpeedButton *SpeedButton9;
        TSpeedButton *SpeedButton10;
        TSpeedButton *SpeedButton11;
        TSpeedButton *SpeedButton12;
        TSpeedButton *SpeedButton13;
        TSpeedButton *SpeedButton14;
        TSpeedButton *SpeedButton15;
        TSpeedButton *SpeedButton16;
        TSpeedButton *SpeedButton17;
        TSpeedButton *SpeedButton18;
        TSpeedButton *SpeedButton19;
        TSpeedButton *SpeedButton20;
        TSpeedButton *SpeedButton21;
        TSpeedButton *SpeedButton22;
        TSpeedButton *SpeedButton23;
        TSpeedButton *SpeedButton24;
        TSpeedButton *SpeedButton25;
        TSpeedButton *SpeedButton26;
        TSpeedButton *SpeedButton27;
        TSpeedButton *SpeedButton28;
        TSpeedButton *SpeedButton29;
        TMenuItem *N1;
        TMenuItem *N51;
        TMenuItem *N21;
        TMenuItem *N13;
        TMenuItem *N051;
        TMenuItem *N021;
        TMenuItem *N011;
        TMenuItem *N2;
        TMenuItem *N501;
        TMenuItem *N201;
        TMenuItem *N101;
        TMenuItem *N52;
        TMenuItem *Tp1;
        TMenuItem *N012;
        TMenuItem *N5;
        TMenuItem *N502;
        TMenuItem *N202;
        TMenuItem *N102;
        TMenuItem *N53;
        TMenuItem *N22;
        TMenuItem *N14;
        TMenuItem *N052;
        TMenuItem *N022;
        TMenuItem *N013;
        TMenuItem *N6;
        TMenuItem *N503;
        TMenuItem *N203;
        TMenuItem *N103;
        TMenuItem *N54;
        TMenuItem *N23;
        TMenuItem *N15;
        TMenuItem *N053;
        TMenuItem *N023;
        TMenuItem *N014;
        TLabel *Label15;
        TImage *Image2;
        TLabel *Label14;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label16;
        TLabel *Label17;
        TChart *Chart1;
        TFastLineSeries *Series1;
        TLabel *Label28;
        TEdit *Edit2;
        TLabel *Label29;
        TEdit *Edit11;
        TEdit *Edit12;
        TLabel *Label30;
        TEdit *Edit13;
        TBitBtn *BitBtn1;
        TLabel *Label31;
        TLabel *Label32;
        TLabel *Label33;
        TLabel *Label34;
        TLabel *Label35;
        TImage *Image3;
        TLabel *Label36;
        TLabel *Label37;
        TLabel *Label38;
        TLabel *Label39;
        TLabel *Label40;
        TLabel *Label41;
        TSpeedButton *SpeedButton30;
        TSpeedButton *SpeedButton33;
        TSpeedButton *SpeedButton34;
        TSpeedButton *SpeedButton35;
        TMenuItem *N110;
        TMenuItem *N20;
        TMenuItem *N27;
        TMenuItem *N28;
        TMenuItem *N29;
        TMenuItem *N30;
        TSpeedButton *SpeedButton36;
        TSpeedButton *SpeedButton37;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TMenuItem *N32;
        TMenuItem *N33;
        TMenuItem *N34;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N3;
        TMenuItem *N10;
        TMenuItem *N11;
        TMenuItem *N16;
        TMenuItem *N17;
        TMenuItem *N18;
        TMenuItem *N19;
        TMenuItem *N35;
        TEdit *Edit5;
        TLabel *Label42;
        TLabel *Label18;
        TBitBtn *BitBtn5;
        void __fastcall SpeedButton1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall SpeedButton7Click(TObject *Sender);
        void __fastcall SpeedButton8Click(TObject *Sender);
        void __fastcall SpeedButton9Click(TObject *Sender);
        void __fastcall SpeedButton10Click(TObject *Sender);
        void __fastcall SpeedButton11Click(TObject *Sender);
        void __fastcall SpeedButton12Click(TObject *Sender);
        void __fastcall SpeedButton14Click(TObject *Sender);
        void __fastcall SpeedButton16Click(TObject *Sender);
        void __fastcall SpeedButton17Click(TObject *Sender);
        void __fastcall SpeedButton18Click(TObject *Sender);
        void __fastcall SpeedButton19Click(TObject *Sender);
        void __fastcall SpeedButton20Click(TObject *Sender);
        void __fastcall SpeedButton21Click(TObject *Sender);
        void __fastcall SpeedButton22Click(TObject *Sender);
        void __fastcall SpeedButton23Click(TObject *Sender);
        void __fastcall SpeedButton24Click(TObject *Sender);
        void __fastcall SpeedButton25Click(TObject *Sender);
        void __fastcall SpeedButton26Click(TObject *Sender);
        void __fastcall SpeedButton27Click(TObject *Sender);
        void __fastcall SpeedButton28Click(TObject *Sender);
        void __fastcall SpeedButton29Click(TObject *Sender);
        void __fastcall Edit6KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit7KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit2KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit3KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit4KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit5KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit8KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit8KeyPress2(TObject *Sender, char &Key);
        void __fastcall Edit8KeyPress3(TObject *Sender, char &Key);
        void __fastcall Edit9KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit10KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit11KeyPress(TObject *Sender, char &Key);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall SpeedButton37Click(TObject *Sender);
        void __fastcall SpeedButton33Click(TObject *Sender);
        void __fastcall SpeedButton30Click(TObject *Sender);
        void __fastcall Edit3Change(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall Edit11Change(TObject *Sender);
        void __fastcall Edit4Change(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall Edit12Change(TObject *Sender);
        void __fastcall Edit13Change(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall SpeedButton13Click(TObject *Sender);
        void __fastcall SpeedButton15Click(TObject *Sender);
        void __fastcall SpeedButton34Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
        void __fastcall SpeedButton36Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall Edit12KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit13KeyPress(TObject *Sender, char &Key);

private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
