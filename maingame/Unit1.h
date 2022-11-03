//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
//testowo

//koniec testowo
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *ButtonNewGame;
        TButton *ButtonContinue;
        TButton *ButtonQuit;
        TLabel *LabelAskName;
        TMemo *MemoCharName;
        TLabel *LabelAskClass;
        TImage *ImageChooseWarrior;
        TImage *ImageChoosePriest;
        TImage *ImageChooseRogue;
        TLabel *LabelWarrior;
        TLabel *LabelRogue;
        TLabel *LabelPriest;
        TImage *ImageBackground;
        TMemo *MemoAskClass;
        TMemo *MemoClassChoice;
        TLabel *LabelClassChoice;
        TButton *ButtonFight;
        TButton *ButtonTrain;
        TButton *ButtonQuit2;
        TTimer *TimerContinueValid;
        TTimer *TimerMusic;
        TMediaPlayer *MediaPlayerMusic;
        void __fastcall ButtonNewGameClick(TObject *Sender);
        void __fastcall MemoCharNameKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall ButtonQuitClick(TObject *Sender);
        void __fastcall ImageChooseWarriorClick(TObject *Sender);
        void __fastcall ImageChooseRogueClick(TObject *Sender);
        void __fastcall ImageChoosePriestClick(TObject *Sender);
        void __fastcall ButtonQuit2Click(TObject *Sender);
        void __fastcall ButtonContinueClick(TObject *Sender);
        void __fastcall ButtonTrainClick(TObject *Sender);
        void __fastcall TimerContinueValidTimer(TObject *Sender);
        void __fastcall ButtonFightClick(TObject *Sender);
        void __fastcall TimerMusicTimer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
