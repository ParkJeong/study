//#include <stdio.h>
//
//typedef struct {
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct {
//	Point leftTop;
//	Point rightBot;
//
//} Rectangle;
//
//void ShowAreaRectangle(Rectangle rec) {
//	int width = rec.rightBot.xpos - rec.leftTop.xpos;
//	int height = rec.rightBot.ypos - rec.leftTop.ypos;
//	printf("Area: %d\n", width * height);
//}
//
//void ShowRectangleInfo(Rectangle rec) {
//	printf("leftTop: [%d, %d]\n", rec.leftTop.xpos, rec.leftTop.ypos);
//	printf("leftBot: [%d, %d]\n", rec.leftTop.xpos, rec.rightBot.ypos);
//	printf("rightBot: [%d, %d]\n", rec.rightBot.xpos, rec.rightBot.ypos);
//	printf("rightTop: [%d, %d]\n", rec.rightBot.xpos, rec.leftTop.ypos);
//}
//
//int main(void) {
//
//	Rectangle rec1 = { {1,1}, {4, 4} };
//	Rectangle rec2 = { {0,0}, {7, 5} };
//
//	ShowAreaRectangle(rec1);
//	ShowRectangleInfo(rec1);
//
//	ShowAreaRectangle(rec2);
//	ShowRectangleInfo(rec2);
//	return 0;
//}