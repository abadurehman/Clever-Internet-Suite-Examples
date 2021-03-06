//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <clImap4.hpp>
#include <clMailMessage.hpp>
#include <clMC.hpp>
#include <clTcpClient.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include "DemoBaseFormUnit.h"
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <clTcpClientTls.hpp>
#include <clTcpCommandClient.hpp>
#include <clOAuth.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TclDemoBaseForm
{
__published:	// IDE-managed Components
  TLabel *Label4;
  TEdit *edtUser;
  TButton *btnLogin;
  TButton *btnLogout;
  TTreeView *tvFolders;
  TListView *lvMessages;
  TLabel *Label6;
  TLabel *Label7;
  TEdit *edtFrom;
  TEdit *edtSubject;
  TMemo *memBody;
  TLabel *Label8;
  TLabel *Label9;
  TclImap4 *clImap;
  TImageList *Images;
  TclMailMessage *clMailMessage;
  TclOAuth *clOAuth1;
  void __fastcall btnLoginClick(TObject *Sender);
  void __fastcall btnLogoutClick(TObject *Sender);
  void __fastcall tvFoldersChange(TObject *Sender, TTreeNode *Node);
  void __fastcall lvMessagesClick(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
private:	// User declarations
  bool FChanging;
  void __fastcall FillFolderList(void);
  void __fastcall AddFolderToList(UnicodeString AName);
  UnicodeString __fastcall GetFolderName(TTreeNode *Node);
  void __fastcall FillMessages(void);
  void __fastcall FillMessage(TListItem *AItem);
  void __fastcall ClearMessage(void);
  void __fastcall EnableControls(bool AEnabled);
public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
