//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormFight : public TForm
{
__published:	// IDE-managed Components
        TImage *ImageBG;
        TLabel *LabelChooseClass;
        TButton *ButtonChooseWarrior;
        TButton *ButtonChooseRogue;
        TButton *ButtonChoosePriest;
        TTimer *TimerLevelChoice;
        TTimer *TimerBeginFight;
        TImage *ImagePlayer;
        TButton *ButtonBeginFight;
        TImage *ImageEnemy;
        TLabel *LabelDebug;
        TLabel *LabelPlayerName;
        TLabel *LabelEnemyClass;
        TLabel *LabelPlayerLevel;
        TLabel *LabelEnemyLevel;
        TLabel *LabelPlayerHP;
        TLabel *LabelEnemyHP;
        TTimer *TimerPlayerMove;
        TTimer *TimerEnemyMove;
        TTimer *TimerGameEnd;
        TTimer *TimerPlayerRecall;
        TTimer *TimerEnemyRecall;
        TTimer *TimerTurn;
        TButton *ButtonGameEnd;
        void __fastcall ButtonChooseWarriorClick(TObject *Sender);
        void __fastcall ButtonChooseRogueClick(TObject *Sender);
        void __fastcall ButtonChoosePriestClick(TObject *Sender);
        void __fastcall TimerLevelChoiceTimer(TObject *Sender);
        void __fastcall TimerBeginFightTimer(TObject *Sender);
        void __fastcall ButtonBeginFightClick(TObject *Sender);
        void __fastcall TimerEnemyMoveTimer(TObject *Sender);
        void __fastcall TimerPlayerRecallTimer(TObject *Sender);
        void __fastcall TimerEnemyRecallTimer(TObject *Sender);
        void __fastcall TimerPlayerMoveTimer(TObject *Sender);
        void __fastcall TimerTurnTimer(TObject *Sender);
        void __fastcall TimerGameEndTimer(TObject *Sender);
        void __fastcall ButtonGameEndClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormFight(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormFight *FormFight;
//---------------------------------------------------------------------------
#endif
