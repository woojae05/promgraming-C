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
    //S:Start,  E:End,  sp:����������(top)
    //ri,rj: ������ ���� ������ i�� �� j=��
    int visit(int, int);
    int main(){
        sp = 0; //���� ������ �ʱ�ȭ
        success = 0; //ó���� 0 ���� ã�� ���Ѵٸ� 1�� �ٲ� 
        printf("�̷� Ž���ϱ�\n");
        Si = 1, Sj = 1, Ei = 7, Ej = 7; //�����(1,1) ������(7,7)
        if (visit(Si, Sj) == 0) printf("�ⱸ�� ã�� �� ����");
        else printf("\n");
}
    int visit(int i, int j) {
        int k;
        static int path = 1;//�ʱ�ȭ�� �ѹ� �Ѵ�
        m[i][j] = 1; //������ �ڸ��� 1�� �ٲ��
        ri[sp] = i , rj[sp] = j;// ������ ��� �� ��ȣ ����
        sp++;
        if (i == Ei && j == Ej) { //�������� �����ߴٸ�
            printf("ã�� ��:(%d)\n", path++);
            for (k = 0; k < sp; k++) 
                printf("(%d,%d)", ri[k], rj[k]);
                printf("\n");
                success = 1;
            
        }
        //�̷� Ž�� ����
        if (m[i][j + 1] == 0)//������
            visit(i, j + 1);
        if (m[i][j-1] == 0)//����
            visit(i, j-1);
        if (m[i+1][j] == 0)//�Ʒ���
            visit(i+1, j);
        if (m[i-1][j] == 0)//����
            visit(i-1, j);
        sp--;//���ÿ��� �ϳ��M
        m[i][j] = 0;//�ٸ� ��� Ž���� ����
            return success;

    }