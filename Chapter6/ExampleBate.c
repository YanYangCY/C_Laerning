#define _CRT_SECURE_NO_WARNINGS  // ���ð�ȫ����
#include <stdio.h>
#include <string.h>

void main()
{
    char a[10] = { 'c','q','y','c','q','\0' };  // Now a has space for 10 chars
    char b[] = { 'c','q','\0' };
    printf("%s", strcat(a, b));  // Now this is safe
}