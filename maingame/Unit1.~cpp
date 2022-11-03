//---------------------------------------------------------------------------
//testowo
#include <iostream>
#include <fstream>
#include <string>
//koniec testowo
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

//
using namespace std;
//

TForm1 *Form1;

//char * player_name;
//char player_class;
//classes - 'w' - warrior; 'r' - rogue; 'p' - priest;
//int player_level = 1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TForm1::ButtonNewGameClick(TObject *Sender)
{
       //all 3 starting buttons disappear
       ButtonNewGame -> Enabled = false;
       ButtonNewGame -> Visible = false;
       ButtonContinue -> Enabled = false;
       ButtonContinue -> Visible = false;
       ButtonQuit -> Enabled = false;
       ButtonQuit -> Visible = false;

       //label that asks player for name appears
       LabelAskName -> Visible = true;

       //name input prompt appears
       MemoCharName -> Enabled = true;
       MemoCharName -> Visible = true;
}
//---------------------------------------------------------------------------









void __fastcall TForm1::MemoCharNameKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        //po nacisnieciu enter ma byc
        //zapisany do pliku tekstowego.

        if(Key == VK_RETURN){
                //strcpy(player_name)

                MemoCharName -> Lines -> SaveToFile("character name.txt");
                LabelAskName -> Visible = false;
                LabelAskName -> Enabled = false;
                MemoCharName -> Visible = false;
                MemoCharName -> Enabled = false;

                //pokazuje pytanie o klase gracza
                MemoAskClass -> Lines -> LoadFromFile("character name.txt");//"Choose your class, " ;       //tu jeszcze bedzie imie gracza
                MemoAskClass -> Visible = true;
                LabelAskClass -> Enabled = true;
                LabelAskClass -> Visible = true;

                //pokazuje image klas
                ImageChooseWarrior -> Enabled = true;
                ImageChooseWarrior -> Visible = true;
                ImageChooseRogue -> Enabled = true;
                ImageChooseRogue -> Visible = true;
                ImageChoosePriest -> Enabled = true;
                ImageChoosePriest -> Visible = true;
                //pokazuje nazwy klas
                LabelWarrior -> Visible = true;
                LabelWarrior -> Enabled = true;
                LabelRogue -> Visible = true;
                LabelRogue -> Enabled = true;
                LabelPriest -> Visible = true;
                LabelPriest -> Enabled = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonQuitClick(TObject *Sender)
{       //to samo co exit(0);
        Application -> Terminate();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::ImageChooseWarriorClick(TObject *Sender)
{
        ofstream classFile;
        classFile.open("character level.txt");
        classFile << "";
        classFile.close();
        //what happens after clicking on the warrior to choose him
        //the same as other classes apart from the class file
        classFile.open("character class.txt");
        classFile << "w";
        classFile.close();
        //chowanie wszystkiego obecnego na ekranie
        LabelWarrior -> Enabled = false;
        LabelWarrior -> Visible = false;
        LabelRogue -> Enabled = false;
        LabelRogue -> Visible = false;
        LabelPriest -> Enabled = false;
        LabelPriest -> Visible = false;
        ImageChooseWarrior -> Enabled = false;
        ImageChooseWarrior -> Visible = false;
        ImageChooseRogue -> Enabled = false;
        ImageChooseRogue -> Visible = false;
        ImageChoosePriest -> Enabled = false;
        ImageChoosePriest -> Visible = false;
        MemoAskClass -> Enabled = false;
        MemoAskClass -> Visible = false;
        LabelAskClass -> Enabled = false;
        LabelAskClass -> Visible = false;
        //pokazuje main loop
        ButtonQuit2 -> Visible = true;
        ButtonFight -> Visible = true;
        ButtonTrain -> Visible = true;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ImageChooseRogueClick(TObject *Sender)
{
        ofstream classFile;
        classFile.open("character level.txt");
        classFile << "";
        classFile.close();
        //what happens after clicking on the rogue to choose him
        //the same as other classes apart from the class file
        classFile.open("character class.txt");
        classFile << "r";
        classFile.close();
        //chowanie wszystkiego obecnego na ekranie
        LabelWarrior -> Enabled = false;
        LabelWarrior -> Visible = false;
        LabelRogue -> Enabled = false;
        LabelRogue -> Visible = false;
        LabelPriest -> Enabled = false;
        LabelPriest -> Visible = false;
        ImageChooseWarrior -> Enabled = false;
        ImageChooseWarrior -> Visible = false;
        ImageChooseRogue -> Enabled = false;
        ImageChooseRogue -> Visible = false;
        ImageChoosePriest -> Enabled = false;
        ImageChoosePriest -> Visible = false;
        MemoAskClass -> Enabled = false;
        MemoAskClass -> Visible = false;
        LabelAskClass -> Enabled = false;
        LabelAskClass -> Visible = false;
        //pokazuje main loop
        ButtonQuit2 -> Visible = true;
        ButtonFight -> Visible = true;
        ButtonTrain -> Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ImageChoosePriestClick(TObject *Sender)
{
        ofstream classFile;
        classFile.open("character level.txt");
        classFile << "";
        classFile.close();
        //what happens after clicking on the rogue to choose him
        //the same as other classes apart from the class file
        classFile.open("character class.txt");
        classFile << "p";
        classFile.close();
        //chowanie wszystkiego obecnego na ekranie
        LabelWarrior -> Enabled = false;
        LabelWarrior -> Visible = false;
        LabelRogue -> Enabled = false;
        LabelRogue -> Visible = false;
        LabelPriest -> Enabled = false;
        LabelPriest -> Visible = false;
        ImageChooseWarrior -> Enabled = false;
        ImageChooseWarrior -> Visible = false;
        ImageChooseRogue -> Enabled = false;
        ImageChooseRogue -> Visible = false;
        ImageChoosePriest -> Enabled = false;
        ImageChoosePriest -> Visible = false;
        MemoAskClass -> Enabled = false;
        MemoAskClass -> Visible = false;
        LabelAskClass -> Enabled = false;
        LabelAskClass -> Visible = false;
        //pokazuje main loop
        ButtonQuit2 -> Visible = true;
        ButtonFight -> Visible = true;
        ButtonTrain -> Visible = true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ButtonQuit2Click(TObject *Sender)
{
        ButtonQuit2 -> Visible = false;
        ButtonFight -> Visible = false;
        ButtonTrain -> Visible = false;
        ButtonNewGame -> Visible = true;
        ButtonNewGame -> Enabled = true;
        ButtonContinue -> Visible = true;
        ButtonQuit -> Visible = true;
        ButtonQuit -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonContinueClick(TObject *Sender)
{
        //pokazuje main loop
        ButtonQuit2 -> Visible = true;
        ButtonFight -> Visible = true;
        ButtonTrain -> Visible = true;
        //chowa obecne przyciski
        ButtonContinue -> Visible = false;
        ButtonNewGame -> Visible = false;
        ButtonQuit -> Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonTrainClick(TObject *Sender)
{
        ofstream levelFile;
        levelFile.open("character level.txt", ios::app);
        levelFile<<"x";
        levelFile.close();
        char * temp = "";
        Application->MessageBox("You have trained and successfully leveled up!", temp, MB_OK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerContinueValidTimer(TObject *Sender)
{
        ifstream level("character level.txt");
        bool levelIsEmpty = level.peek() == EOF;
        ifstream name("character name.txt");
        bool nameIsEmpty = name.peek() == EOF;
        ifstream klasa("character class.txt");
        bool classIsEmpty = klasa.peek() == EOF;
        if(!classIsEmpty && !nameIsEmpty){
                ButtonContinue -> Enabled = true;
        }
        else{
                ButtonContinue -> Enabled = false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonFightClick(TObject *Sender)
{
        FormFight -> ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TimerMusicTimer(TObject *Sender)
{
        //odkomentowac na koncu
        MediaPlayerMusic -> Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        MediaPlayerMusic -> FileName = "music/mainmusic.mp3";
        MediaPlayerMusic -> Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        MediaPlayerMusic -> Close();
}
//---------------------------------------------------------------------------

