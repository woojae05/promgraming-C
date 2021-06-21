#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int m[9][9] = { //maze
             {2,2,2,2,2,2,2,2,2},
             {2,0,0,0,0,0,0,0,2},
             {2,0,2,2,0,2,2,0,2},
             {2,0,2,0,0,2,0,0,2},
             {2,0,2,0,2,0,2,0,2},
             {2,0,0,0,0,0,2,0,2},
             {2,2,0,2,2,0,2,2,2},
             {2,0,0,0,0,0,0,0,2},
             {2,2,2,2,2,2,2,2,2} };

int Si, Sj, Ei, Ej, success, idx, Path_i[100], Path_j[100];
// S = 출발점, E = 도착점, Path = 지나간 행과 열 저장

int visit(int, int);//미로를 탐색하는 함수


int main() {
    idx = 0;
    success = 0;//미로탈출 성공 여부
    Si = 1, Sj = 1;
    Ei = 7, Ej = 7;

    if (visit(Si, Sj) == 0) {
        printf("\n");
        printf("길을 못찾음\n");
    }
    else {
        printf("\n");
        printf("길을 찾음\n");
    }
    return 0;
}

int visit(int i, int j) {
    static int path = 1;// 찾은 경로 개수
    m[i][j] = 1;
    Path_i[idx] = i, Path_j[idx] = j;
    idx++;

    //만약 목적지에 도달했다면 Ei, Ej
    if (i == Ei && j == Ej) {
        success = 1;
        printf("찾은 경로 %d번째 \n", path++);
        for (int k = 0; k < idx; k++) {
            printf("(%d, %d) ", Path_i[k], Path_j[k]);
        }
        printf("\n");
    }

    //미로탐색
    if (m[i][j + 1] == 0)//오른쪽으로 이동
        visit(i, j + 1);
    if (m[i + 1][j] == 0)//아래로 이동
        visit(i + 1, j);
    //if (m[i - 1][j] == 0)//위쪽으로 이동
    //    visit(i - 1, j);
    //if (m[i][j - 1] == 0)//왼쪽으로 이동
    //    visit(i, j - 1);

    idx--;
    m[i][j] = 0;// 길이 막혔을때 돌아가면서 원상복귀
    return success;
}