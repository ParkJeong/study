//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	int opt = 0;
//	int end = 1;
//	int computer = 0;
//	int win = 0;
//	int draw = 0;
//
//	char * opt2 = " ";
//	char * computer2 = "";
//
//	while (end != 0) {
//
//		printf("������ 1, ������ 2, ���� 3: ");
//		scanf_s("%d", &opt);
//
//		srand((int)time(NULL));
//		computer = rand()%3 + 1;
//
//		if (computer == 1) computer2 = "��";
//		else if (computer == 2) computer2 = "����";
//		else if (computer == 3) computer2 = "��";
//		else computer2 = "����";
//
//		if (opt == 1) {
//			if (computer == 1) {
//				end = -1;
//			}
//			else if (computer == 2) {
//				end = 1;
//			}
//			else if (computer == 3){
//				end = 0;
//			}
//			else {
//				printf("��ǻ�� ����\n�ٽ�\n\n");
//			}
//			opt2 = "��";
//
//		}
//		else if (opt == 2) {
//			if (computer == 1) {
//				end = 0;
//			}
//			else if (computer == 2) {
//				end = -1;
//			}
//			else if (computer == 3) {
//				end = 1;
//			}
//			else {
//				printf("��ǻ�� ����\n�ٽ�\n\n");
//			}
//			opt2 = "����";
//		}
//		else if (opt == 3) {
//			if (computer == 1) {
//				end = 1;
//			}
//			else if (computer == 2) {
//				end = 0;
//			}
//			else if (computer == 3) {
//				end = -1;
//			}
//			else {
//				printf("��ǻ�� ����\n�ٽ�\n\n");
//			}
//			opt2 = "��";
//		}
//		else {
//			printf("�Է� ����\n�ٽ�\n\n");
//		}
//
//		if (end == 0) {
//			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�!\n\n", opt2, computer2);
//			printf("������ ���: %d��, %d��", win, draw);
//		}
//		else if (end == 1) {
//			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�!\n", opt2, computer2);
//			win += 1;
//		}
//		else {
//			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�!\n", opt2, computer2);
//			draw += 1;
//		}
//	}
//	return 0;
//}