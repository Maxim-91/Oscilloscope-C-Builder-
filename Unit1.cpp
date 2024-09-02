//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#include <stdio.h>
#include <fstream.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PERFGRAP"
#pragma resource "*.dfm"
TForm1 *Form1;
 float *i=new float,Mu,Tp,P=3.141592654;
 FILE *save;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------





void __fastcall TForm1::SpeedButton1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
 SpeedButton1->Visible=true;         
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-5.bmp");
 Label16->Caption=5;
 Ramka2(Chart1,5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
 Image1->ControlState;       
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-2.bmp");
 Label16->Caption=2;
 Ramka2(Chart1,2);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-1.bmp");
 Label16->Caption=1;
 Ramka2(Chart1,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.5.bmp");
 Label16->Caption=0.5;
 Ramka2(Chart1,0.5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.2.bmp");
 Label16->Caption=0.2;
 Ramka2(Chart1,0.2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.1.bmp");
 Label16->Caption=0.1;
 Ramka2(Chart1,0.1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.05.bmp");
 Label16->Caption=0.05;
 Ramka2(Chart1,0.05);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.02.bmp");
 Label16->Caption=0.02;
 Ramka2(Chart1,0.02);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.01.bmp");
 Label16->Caption=0.001;
 Ramka2(Chart1,0.001);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton10Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.005.bmp");
 Label16->Caption=0.005;
 Ramka2(Chart1,0.005);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-100.bmp");
 Label17->Caption=100;

 Series1->Clear();
 for (*i=0; *i<=1000; *i+=1)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,100);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton12Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-50.bmp");
 Label17->Caption=50;

 Series1->Clear();
 for (*i=0; *i<=500; *i+=0.5)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,50);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton14Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-10.bmp");
 Label17->Caption=10;

 Series1->Clear();
 for (*i=0; *i<=100; *i+=0.1)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,10);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton16Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-2.bmp");
 Label17->Caption=2;

 Series1->Clear();
 for (*i=0; *i<=20; *i+=0.02)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton17Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-1.bmp");
 Label17->Caption=1;

 Series1->Clear();
 for (*i=0; *i<=10; *i+=0.01)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton18Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.5.bmp");
 Label17->Caption=0.5;

 Series1->Clear();
 for (*i=0; *i<=5; *i+=0.005)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton19Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.2.bmp");
 Label17->Caption=0.2;

 Series1->Clear();
 for (*i=0; *i<=2; *i+=0.002)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton20Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.1.bmp");
 Label17->Caption=0.1;

 Series1->Clear();
 for (*i=0; *i<=1; *i+=0.001)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton21Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.05.bmp");
 Label17->Caption=0.05;

 Series1->Clear();
 for (*i=0; *i<=0.5; *i+=0.0005)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.05);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton22Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.02.bmp");
 Label17->Caption=0.02;

 Series1->Clear();
 for (*i=0; *i<=0.2; *i+=0.0002)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.02);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton23Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.01.bmp");
 Label17->Caption=0.01;

 Series1->Clear();
 for (*i=0; *i<=0.1; *i+=0.0001)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.01);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton24Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.005.bmp");
 Label17->Caption=0.005;

 Series1->Clear();
 for (*i=0; *i<=0.05; *i+=0.00005)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.005);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton25Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.002.bmp");
 Label17->Caption=0.002;

 Series1->Clear();
 for (*i=0; *i<=0.02; *i+=0.00002)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.002);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton26Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.001.bmp");
 Label17->Caption=0.001;

 Series1->Clear();
 for (*i=0; *i<=0.01; *i+=0.00001)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.001);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton27Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.0005.bmp");
 Label17->Caption=0.0005;

 Series1->Clear();
 for (*i=0; *i<=0.005; *i+=0.000005)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.0005);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton28Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.0002.bmp");
 Label17->Caption=0.0002;

 Series1->Clear();
 for (*i=0; *i<=0.002; *i+=0.000002)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.0002);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton29Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-0.0001.bmp");
 Label17->Caption=0.0001;

 Series1->Clear();
 for (*i=0; *i<=0.001; *i+=0.000001)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,0.0001);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit6KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 } 
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit1KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit3KeyPress(TObject *Sender, char &Key)
{
  {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit4KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit5KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit7KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 } 
}
//-------------------------------------------------------------------------




void __fastcall TForm1::Edit8KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це дробове чисело) та ' - ' (якщо від'ємне)");
 }
}
//-------------------------------------------------------------------------

void __fastcall TForm1::Edit8KeyPress2(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це дробове чисело) та ' - ' (якщо від'ємне)");
 }
}
//-------------------------------------------------------------------------

void __fastcall TForm1::Edit8KeyPress3(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }
}
//-------------------------------------------------------------------------

void __fastcall TForm1::Edit9KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }
}
//-------------------------------------------------------------------------


void __fastcall TForm1::Edit10KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }
}
//-------------------------------------------------------------------------

void __fastcall TForm1::Edit11KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }
}
//-------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 AboutBox->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SpeedButton37Click(TObject *Sender)
{
 Form1->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton33Click(TObject *Sender)
{
 Form2->Series1->Clear();

 for (*i=0; *i<=StrToFloat(Label17->Caption)*10; *i+=StrToFloat(Label17->Caption)/1000)
 {
  Form2->Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }

 Form2->QRDBChart1->BottomAxis->Minimum=0;
 Form2->QRDBChart1->BottomAxis->Maximum=StrToFloat(Label17->Caption)*10;
 Form2->QRDBChart1->BottomAxis->Increment=StrToFloat(Label17->Caption);

 Form2->QRDBChart1->LeftAxis->Minimum=-StrToFloat(Label16->Caption)*5;
 Form2->QRDBChart1->LeftAxis->Maximum=StrToFloat(Label16->Caption)*5;
 Form2->QRDBChart1->LeftAxis->Increment=StrToFloat(Label16->Caption);

 Form2->QRImage1->Picture=Image1->Picture;
 Form2->QRImage2->Picture=Image2->Picture;

 Form2->QRLabel2->Caption=Edit3->Text;
 Form2->QRLabel4->Caption=Edit11->Text;
 Form2->QRLabel16->Caption=Label6->Caption;

 Form2->QRLabel7->Caption=Edit4->Text;
 Form2->QRLabel9->Caption=Edit2->Text;
 Form2->QRLabel17->Caption=Label2->Caption;

 Form2->QRLabel12->Caption=Edit12->Text;
 Form2->QRLabel14->Caption=Edit13->Text;
 Form2->QRLabel18->Caption=Label4->Caption;

 Form2->QuickRep1->Preview();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton30Click(TObject *Sender)
{
 Image1->Picture->LoadFromFile("1 chastyna-0.bmp");
 Image2->Picture->LoadFromFile("2 chastyna-0.bmp");

 Label17->Caption=0;
 Label16->Caption=0;

 Chart1->LeftAxis->Title->Caption="";
 Chart1->BottomAxis->Title->Caption="";

 //----------
 Edit3->Enabled=true;
 Edit3->Text="";
 Edit11->Enabled=true;
 Edit11->Text="";

 Label5->Visible=false;
 Label6->Visible=false;
 Label6->Caption="не вказано";

 BitBtn2->Enabled=false;
 //--
 Edit4->Enabled=true;
 Edit4->Text="";
 Edit2->Enabled=true;
 Edit2->Text="";

 Label1->Visible=false;
 Label2->Visible=false;
 Label2->Caption="не вказано";

 BitBtn3->Enabled=false;
 //--
 Edit12->Enabled=true;
 Edit12->Text="";
 Edit13->Enabled=true;
 Edit13->Text="";

 Label3->Visible=false;
 Label4->Visible=false;
 Label4->Caption="не вказано";

 BitBtn4->Enabled=false;

 Ramka1(Chart1,0);
 Ramka2(Chart1,0);
 Edit5->Text="0";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit3Change(TObject *Sender)
{
 if (Edit3->Text==""||Edit11->Text=="") BitBtn2->Enabled=false;
 else BitBtn2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 float *U=new float;
 *U=StrToFloat(Edit3->Text)*StrToFloat(Label16->Caption);
 Label6->Caption=FloatToStr(*U);

 skr (Edit3,Edit11,Label5,Label6,BitBtn2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit11Change(TObject *Sender)
{
 if (Edit3->Text==""||Edit11->Text=="") BitBtn2->Enabled=false;
 else BitBtn2->Enabled=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit4Change(TObject *Sender)
{
 if (Edit4->Text==""||Edit2->Text=="") BitBtn3->Enabled=false;
 else BitBtn3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
 if (Edit4->Text==""||Edit2->Text=="") BitBtn3->Enabled=false;
 else BitBtn3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit12Change(TObject *Sender)
{
 if (Edit12->Text==""||Edit13->Text=="") BitBtn4->Enabled=false;
 else BitBtn4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit13Change(TObject *Sender)
{
 if (Edit12->Text==""||Edit13->Text=="") BitBtn4->Enabled=false;
 else BitBtn4->Enabled=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
 float *t=new float;
 *t=StrToFloat(Edit4->Text)*StrToFloat(Label17->Caption);
 Label2->Caption=FloatToStr(*t);

 skr (Edit4,Edit2,Label1,Label2,BitBtn3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
 float *f=new float;
 *f=1/(StrToFloat(Edit12->Text)*StrToFloat(Label17->Caption));
 Label4->Caption=FloatToStr(*f);

 skr (Edit12,Edit13,Label3,Label4,BitBtn4);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton13Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-20.bmp");
 Label17->Caption=20;

 Series1->Clear();
 for (*i=0; *i<=200; *i+=0.2)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,20);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton15Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("2 chastyna-5.bmp");
 Label17->Caption=5;

 Series1->Clear();
 for (*i=0; *i<=50; *i+=0.05)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }
 Ramka1(Chart1,5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton34Click(TObject *Sender)
{
  AboutBox1->Visible=true;        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N8Click(TObject *Sender)
{
 AboutBox->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SpeedButton36Click(TObject *Sender)
{
 WinHelp(Form1,"HELP.hlp", HELP_CONTEXT, 2);        
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
 Mu=StrToFloat(Edit5->Text);
 Tp=100;
 Series1->Clear();
 for (*i=0; *i<=1000; *i+=1)
 {
  Series1->AddXY(*i,Mu*sin(*i*2*P*1/Tp),"",clRed);
 }

  Image2->Picture->LoadFromFile("2 chastyna-100.bmp");
  Image1->Picture->LoadFromFile("1 chastyna-5.bmp");

 Label17->Caption=100;
 Chart1->BottomAxis->Minimum=0;
 Chart1->BottomAxis->Maximum=1000;
 Chart1->BottomAxis->Increment=10;

 Label16->Caption=5;
 Chart1->LeftAxis->Minimum=-25;
 Chart1->LeftAxis->Maximum=25;
 Chart1->LeftAxis->Increment=5;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Edit12KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit13KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK) {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == 8) {}
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9 і символ ' , '(якщо це дробове чисело)");
 }         
}
//---------------------------------------------------------------------------

