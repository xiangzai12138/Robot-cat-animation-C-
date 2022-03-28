// 机器猫动画.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <graphics.h>
#include <conio.h>
#define PI 3.14159265

// 主函数
int main()
{
	int j = 0;
	// 创建大小为 800 * 600 的绘图窗口
	initgraph(800, 600);

	// 设置原点 (0, 0) 为屏幕中央（Y轴默认向下为正）
	setorigin(400, 300);

	// 使用白色填充背景
	setbkcolor(WHITE);
	cleardevice();


	for (int i = 0; i < 1000; i++)
	{
		while (1)
		{
			if (j >= 210) break;

			j += 10;
			cleardevice();

			// 画脸
			
			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + j, -206, 135 + j, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + j, -144, 115 + j, 46);

			fillroundrect(-63 + j, -169, 0 + j, -95, 56, 56);			// 右眼
			fillroundrect(0 + j, -169, 63 + j, -95, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + j, -116, 6);							// 右眼球
			solidcircle(16 + j, -116, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + j, -92, 15);

			line(0 + j, -77, 0 + j, -4);								// 人中
			fillcircle(0+j, 10, 14);	// 嘴

			line(-42 + j, -73, -90 + j, -91);							// 胡子
			line(42 + j, -73, 90 + j, -91);
			line(-41 + j, -65, -92 + j, -65);
			line(41 + j, -65, 92 + j, -65);
			line(-42 + j, -57, -90 + j, -39);
			line(42 + j, -57, 90 + j, -39);


			// 画身体

			line(-96 + j, 32, 0 + j, 81);                          // 手臂
			line(-90 + j, 70, -58 + j, 81);

			line(-96 + j, 30, -96 + j, 178);                       // 腿

			line(80 + j, 32, 138 + j, 72);
			line(96 + j, 96, 116 + j, 110);

			line(96 + j, 85, 96 + j, 178);
			arc(-10 + j, 168, 10 + j, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(140 + j, 99, 28);

			fillroundrect(-2 + j, 178, -112 + j, 205, 24, 24);	// 脚
			fillroundrect(2 + j, 178, 112 + j, 205, 24, 24);

			line(-96 + j, 30, 96 + j, 30);

			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + j, 150, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + j, 80, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-94 + j, 160, BLACK);


			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + j, 81, 75);
			solidrectangle(-60 + j, 4, 60 + j, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + j, 23, 58 + j, 139, PI, 0);			    // 口袋

			line(-96 + j, 32, 0 + j, 81);                          // 手臂
			line(-90 + j, 70, -58 + j, 81);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + j, 80, BLACK);


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + j, 23, 100 + j, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + j, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + j, 50, 4 + j, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + j, 57, 0 + j, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + j, 40, 16 + j, 40);
			line(-18 + j, 44, 18 + j, 44);


			Sleep(500);

			////////////////////////////////////

			cleardevice();
			// 画脸
			setfillcolor(BLACK);
			fillpie(-110 + j, -210, -50 + j, -140, PI, PI); //耳朵（mine）
			fillpie(110 + j, -210, 50 + j, -140, PI, PI);


			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + j, -206, 135 + j, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + j, -144, 115 + j, 46);

			fillroundrect(-63 + j, -180, 0 + j, -100, 56, 56);			// 右眼
			fillroundrect(0 + j, -180, 63 + j, -100, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + j, -165, 6);							// 右眼球
			solidcircle(16 + j, -165, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + j, -92, 15);

			line(0 + j, -77, 0 + j, -4);								// 人中
			arc(-25 + j, -220, 25 + j, -4, PI * 5 / 4, PI * 7 / 4);	// 嘴

			line(-42 + j, -73, -90 + j, -91);							// 胡子
			line(42 + j, -73, 90 + j, -91);
			line(-41 + j, -65, -92 + j, -65);
			line(41 + j, -65, 92 + j, -65);
			line(-42 + j, -57, -90 + j, -39);
			line(42 + j, -57, 90 + j, -39);

			// 画身体
			line(-80 + j, 32, -138 + j, 72);					// 手臂(上)109,52
			line(80 + j, 32, 138 + j, 72);
			line(-96 + j, 96, -116 + j, 110);					// 手臂(下)131,103  484+2601  55.54
			line(96 + j, 96, 116 + j, 110);

			line(-96 + j, 85, -96 + j, 178);					// 腿外侧
			line(96 + j, 85, 96 + j, 178);
			arc(-10 + j, 168, 10 + j, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(-140 + j, 99, 28);
			fillcircle(140 + j, 99, 28);
			fillroundrect(-2 + j, 178, -112 + j, 205, 24, 24);	// 脚
			fillroundrect(2 + j, 178, 112 + j, 205, 24, 24);
			line(-96 + j, 30, 96 + j, 30);

			setfillcolor(RGB(7, 190, 234));				// 身体填充蓝色
			floodfill(0 + j, 100, BLACK);

			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + j, 81, 75);
			solidrectangle(-60 + j, 4, 60 + j, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + j, 23, 58 + j, 139, PI, 0);			    // 口袋


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + j, 23, 100 + j, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + j, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + j, 50, 4 + j, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + j, 57, 0 + j, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + j, 40, 16 + j, 40);
			line(-18 + j, 44, 18 + j, 44);

			setfillcolor(RGB(196,187,27)); 
			fillroundrect(-250 + j, 83, -220 + j, 117, 50, 50);
			fillroundrect(-230 + j, 60, -200 + j, 140, 50, 50);
			fillroundrect(-210 + j, 50, -180 + j, 150, 50, 50);
			fillroundrect(-190 + j, 40, -160 + j, 160, 50, 50);                                            //便便（mine）
			fillroundrect(-170 + j, 30, -140 + j, 170, 50, 50);
			
			
			Sleep(500);
		}
	}
	///////////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i < 1000; i++)
	{
		while (1)
		{
			if (j >= 210) break;

			j += 10;
			cleardevice();

			// 画脸

			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + j, -206, 135 + j, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + j, -144, 115 + j, 46);

			fillroundrect(-63 + j, -169, 0 + j, -95, 56, 56);			// 右眼
			fillroundrect(0 + j, -169, 63 + j, -95, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + j, -116, 6);							// 右眼球
			solidcircle(16 + j, -116, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + j, -92, 15);

			line(0 + j, -77, 0 + j, -4);								// 人中
			fillcircle(0 + j, 10, 14);	// 嘴

			line(-42 + j, -73, -90 + j, -91);							// 胡子
			line(42 + j, -73, 90 + j, -91);
			line(-41 + j, -65, -92 + j, -65);
			line(41 + j, -65, 92 + j, -65);
			line(-42 + j, -57, -90 + j, -39);
			line(42 + j, -57, 90 + j, -39);


			// 画身体

			line(-96 + j, 32, 0 + j, 81);                          // 手臂
			line(-90 + j, 70, -58 + j, 81);

			line(-96 + j, 30, -96 + j, 178);                       // 腿

			line(80 + j, 32, 138 + j, 72);
			line(96 + j, 96, 116 + j, 110);

			line(96 + j, 85, 96 + j, 178);
			arc(-10 + j, 168, 10 + j, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(140 + j, 99, 28);

			fillroundrect(-2 + j, 178, -112 + j, 205, 24, 24);	// 脚
			fillroundrect(2 + j, 178, 112 + j, 205, 24, 24);

			line(-96 + j, 30, 96 + j, 30);

			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + j, 150, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + j, 80, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-94 + j, 160, BLACK);


			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + j, 81, 75);
			solidrectangle(-60 + j, 4, 60 + j, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + j, 23, 58 + j, 139, PI, 0);			    // 口袋

			line(-96 + j, 32, 0 + j, 81);                          // 手臂
			line(-90 + j, 70, -58 + j, 81);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + j, 80, BLACK);


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + j, 23, 100 + j, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + j, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + j, 50, 4 + j, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + j, 57, 0 + j, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + j, 40, 16 + j, 40);
			line(-18 + j, 44, 18 + j, 44);


			Sleep(500);

			////////////////////////////////////

			cleardevice();
			// 画脸
			setfillcolor(BLACK);
			fillpie(-110 + j, -210, -50 + j, -140, PI, PI); //耳朵（mine）
			fillpie(110 + j, -210, 50 + j, -140, PI, PI);


			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + j, -206, 135 + j, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + j, -144, 115 + j, 46);

			fillroundrect(-63 + j, -180, 0 + j, -100, 56, 56);			// 右眼
			fillroundrect(0 + j, -180, 63 + j, -100, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + j, -165, 6);							// 右眼球
			solidcircle(16 + j, -165, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + j, -92, 15);

			line(0 + j, -77, 0 + j, -4);								// 人中
			arc(-25 + j, -220, 25 + j, -4, PI * 5 / 4, PI * 7 / 4);	// 嘴

			line(-42 + j, -73, -90 + j, -91);							// 胡子
			line(42 + j, -73, 90 + j, -91);
			line(-41 + j, -65, -92 + j, -65);
			line(41 + j, -65, 92 + j, -65);
			line(-42 + j, -57, -90 + j, -39);
			line(42 + j, -57, 90 + j, -39);

			// 画身体
			line(-80 + j, 32, -138 + j, 72);					// 手臂(上)109,52
			line(80 + j, 32, 138 + j, 72);
			line(-96 + j, 96, -116 + j, 110);					// 手臂(下)131,103  484+2601  55.54
			line(96 + j, 96, 116 + j, 110);

			line(-96 + j, 85, -96 + j, 178);					// 腿外侧
			line(96 + j, 85, 96 + j, 178);
			arc(-10 + j, 168, 10 + j, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(-140 + j, 99, 28);
			fillcircle(140 + j, 99, 28);
			fillroundrect(-2 + j, 178, -112 + j, 205, 24, 24);	// 脚
			fillroundrect(2 + j, 178, 112 + j, 205, 24, 24);
			line(-96 + j, 30, 96 + j, 30);

			setfillcolor(RGB(7, 190, 234));				// 身体填充蓝色
			floodfill(0 + j, 100, BLACK);

			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + j, 81, 75);
			solidrectangle(-60 + j, 4, 60 + j, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + j, 23, 58 + j, 139, PI, 0);			    // 口袋


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + j, 23, 100 + j, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + j, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + j, 50, 4 + j, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + j, 57, 0 + j, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + j, 40, 16 + j, 40);
			line(-18 + j, 44, 18 + j, 44);

			setfillcolor(RGB(196, 187, 27));
			fillroundrect(-250 + j, 83, -220 + j, 117, 50, 50);
			fillroundrect(-230 + j, 60, -200 + j, 140, 50, 50);
			fillroundrect(-210 + j, 50, -180 + j, 150, 50, 50);
			fillroundrect(-190 + j, 40, -160 + j, 160, 50, 50);                                            //便便（mine）
			fillroundrect(-170 + j, 30, -140 + j, 170, 50, 50);


			Sleep(500);
		}
	}
	// 按任意键退出
	_getch();
	closegraph();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
