#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("���̸� �Է��ϼ���!\r\n");
	scanf("%d", &age);

	if(age >= 20)									// if�� ����
		printf("�����Դϴ�.");
	else if(age >= 12)
		printf("û�ҳ��Դϴ�.");
	else
		printf("�Ƶ��Դϴ�.");	// if�� ��
}
