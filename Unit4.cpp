//---------------------------------------------------------------------------


#pragma hdrstop
#include <math.h>

#include "Unit4.h"
#include "Unit1.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
void Ramka1(TChart *Ch, float x)
{
 Ch->BottomAxis->Minimum=0;
 Ch->BottomAxis->Maximum=x*10;
 Ch->BottomAxis->Increment=x;
}
//---------------------------------------------------------------------------
void Ramka2(TChart *Ch, float x)
{
 Ch->LeftAxis->Minimum=-x*5;
 Ch->LeftAxis->Maximum=x*5;
 Ch->LeftAxis->Increment=x;
}
//---------------------------------------------------------------------------
void skr (TEdit *E1,TEdit *E2,TLabel *L1,TLabel *L2,TBitBtn *B1)
{
 E1->Enabled=false;
 E2->Enabled=false;

 L1->Visible=true;
 L2->Visible=true;

 B1->Enabled=false;
}
//---------------------------------------------------------------------------

