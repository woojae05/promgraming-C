#include<stdio.h>
	int m[9][9]= { {2,2,2,2,2,2,2,2,2},
				   {2,0,0,0,0,0,0,0,2},
                   {2,0,2,2,0,2,2,0,2},
                   {2,0,2,0,0,2,0,0,2},
                   {2,0,2,0,2,0,2,0,2},
                   {2,0,0,0,0,0,2,0,2},
                   {2,2,0,2,2,0,2,2,2},
                   {2,0,0,0,0,0,0,0,2},
                   {2,2,2,2,2,2,2,2,2} };
    int Si, Sj, Ei, Ej, success, sp, ri[100], rj[100];
    //S:Start,  E:End,  sp:스택포인터(top)
    //ri,rj: 지나간 길을 저장함 i는 행 j=열
    int visit(int, int);
    int main(){
        sp = 0; //스택 포인터 초기화
        success = 0; //처음은 0 길을 찾지 못한다면 1로 바뀜 
        printf("미로 탐색하기\n");
        Si = 1, Sj = 1, Ei = 7, Ej = 7; //출발점(1,1) 도착점(7,7)
        if (visit(Si, Sj) == 0) printf("출구를 찾을 수 없음");
        else printf("\n");
}
    int visit(int i, int j) {
        int k;
        static int path = 1;//초기화를 한번 한다
        m[i][j] = 1; //지나간 자리는 1로 바뀐다
        ri[sp] = i , rj[sp] = j;// 지나간 행과 열 번호 저장
        sp++;
        if (i == Ei && j == Ej) { //도착점에 도착했다면
            printf("찾은 길:(%d)\n", path++);
            for (k = 0; k < sp; k++) 
                printf("(%d,%d)", ri[k], rj[k]);
                printf("\n");
                success = 1;
            
        }
        //미로 탐색 로직
        if (m[i][j + 1] == 0)//오른쪽
            visit(i, j + 1);
        if (m[i][j-1] == 0)//왼쪽
            visit(i, j-1);
        if (m[i+1][j] == 0)//아래쪽
            visit(i+1, j);
        if (m[i-1][j] == 0)//위쪽
            visit(i-1, j);
        sp--;//스택에서 하나뻄
        m[i][j] = 0;//다른 경로 탐색을 위해
            return success;

    }