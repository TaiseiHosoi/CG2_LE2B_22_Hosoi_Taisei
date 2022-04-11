#include<windows.h>

//windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	//コンソールの文字出力
	OutputDebugStringA("Hello,DirectX!!\n");

	return 0;
}