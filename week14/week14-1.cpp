///�Ʋ�:����ܼƪ��ŧi int a; a�O��ƪ��Ϊ�
///�Ʋ�:��ƪ��ŧi(�������Ϊ�)
///int sum( int a,int b ); �ŧi�����Ϊ�

#include <stdio.h>

int sum( int a, int b );

int main()
{///�b�Τ��e�A�n���ŧideclare�Ωw�qdefine
    int ans = sum(2, 3); ///�ϥ� �I�s
    printf("ans: %d\n", ans);
}
int sum( int a, int b )///�w�q define
{
    return a + b;
}///�^�� �^�ФH�a
