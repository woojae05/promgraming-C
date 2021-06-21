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
// S = �����, E = ������, Path = ������ ��� �� ����

int visit(int, int);//�̷θ� Ž���ϴ� �Լ�


int main() {
    idx = 0;
    success = 0;//�̷�Ż�� ���� ����
    Si = 1, Sj = 1;
    Ei = 7, Ej = 7;

    if (visit(Si, Sj) == 0) {
        printf("\n");
        printf("���� ��ã��\n");
    }
    else {
        printf("\n");
        printf("���� ã��\n");
    }
    return 0;
}

int visit(int i, int j) {
    static int path = 1;// ã�� ��� ����
    m[i][j] = 1;
    Path_i[idx] = i, Path_j[idx] = j;
    idx++;

    //���� �������� �����ߴٸ� Ei, Ej
    if (i == Ei && j == Ej) {
        success = 1;
        printf("ã�� ��� %d��° \n", path++);
        for (int k = 0; k < idx; k++) {
            printf("(%d, %d) ", Path_i[k], Path_j[k]);
        }
        printf("\n");
    }

    //�̷�Ž��
    if (m[i][j + 1] == 0)//���������� �̵�
        visit(i, j + 1);
    if (m[i + 1][j] == 0)//�Ʒ��� �̵�
        visit(i + 1, j);
    //if (m[i - 1][j] == 0)//�������� �̵�
    //    visit(i - 1, j);
    //if (m[i][j - 1] == 0)//�������� �̵�
    //    visit(i, j - 1);

    idx--;
    m[i][j] = 0;// ���� �������� ���ư��鼭 ���󺹱�
    return success;
}