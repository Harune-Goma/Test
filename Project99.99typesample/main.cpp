//-------------------------------------
//�I�y���[�V����99.99
//name suzukihayato
//-------------------------------------

#include <DxLib.h>			//DX���C�u�������g����悤�ɂ���

//�ւ񂷁[��`
//--------------------------------------


//WinMain���񂷁[
//--------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//�V�X�e�������[�I
	//---------------------------------------
	SetWindowText("2016197_����D�l");			//�o�g���E�B���h�E�Y�̃^�C�g��
	ChangeWindowMode(false);				//�o�g���E�B���h�E�Y�̕\�����@(false:�t���X�N���[�����[�h)
	SetGraphMode(640, 480, 16);			//�o�g���E�B���h�E�Y�̃T�C�Y�ƃJ���[�����O��ݒ�
	if (DxLib_Init() == -1)
	{
		return -1;						//DX���C�u�����̏�����
	}

	//�ւ񂷁[�̏�����

	//�O���t�B�b�N�̏����p��

	//�Q�[�����[�v
	//---------------------------------
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{

		//�Q�[���̃��C������
		//-------------------------------------

		//�`�揈��
		//-------------------------------------
		SetDrawScreen(DX_SCREEN_BACK);		//�`�悷���ʂ𗠂̉�ʂɐݒ�
		ClearDrawScreen();					//�`�悷���ʂ̓��e������

//		_dbgAddDraw();

		ScreenFlip(); 
	}

	//�V�X�e���̏I��
	//--------------------------------
	DxLib_End();		//DX���C�u�����̏I������
	return 0;			//�Q�[���Z�b�g
}
