#include <stdio.h>

struct point{
    int xpos;
    int ypos;
};

int main(void){
    struct point arr[3];
    
    for(int i = 0; i < 3; i++){
        printf("���� ��ǥ �Է�: ");
        scanf("%d %d", &arr[1].xpos, &arr[1].ypos);
    }

    for(int i = 0; i < 3; i++){
        printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
    }

    return 0;
}