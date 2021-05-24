//-------------------------------------
//オペレーション99.99
//name suzukihayato
//-------------------------------------

#include <DxLib.h>			//DXライブラリを使えるようにする

//へんすー定義
//--------------------------------------


//WinMainかんすー
//--------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//システムかんりー！
	//---------------------------------------
	SetWindowText("2016197_鈴木颯斗");			//バトルウィンドウズのタイトル
	ChangeWindowMode(false);				//バトルウィンドウズの表示方法(false:フルスクリーンモード)
	SetGraphMode(640, 480, 16);			//バトルウィンドウズのサイズとカラーリングを設定
	if (DxLib_Init() == -1)
	{
		return -1;						//DXライブラリの初期化
	}

	//へんすーの初期化

	//グラフィックの召喚術式

	//ゲームループ
	//---------------------------------
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{

		//ゲームのメイン処理
		//-------------------------------------

		//描画処理
		//-------------------------------------
		SetDrawScreen(DX_SCREEN_BACK);		//描画する画面を裏の画面に設定
		ClearDrawScreen();					//描画する画面の内容を消去

//		_dbgAddDraw();

		ScreenFlip(); 
	}

	//システムの終焉
	//--------------------------------
	DxLib_End();		//DXライブラリの終了処理
	return 0;			//ゲームセット
}
