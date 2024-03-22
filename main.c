#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include"assert.h"

//λ��
struct BitF {
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

////memcpy -�ڴ濽�������ڿ�����������ص��ڴ��ĺ���
////��src�ڴ�λ�������count���ֽڵ����ݵ�dest�ڴ�λ�ã�������dest�׵�ַ
//void* my_memcpy(void* dest, const void* src, size_t count) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	while (count--) {
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//memmove -�ڴ濽������memcpy��ͬ���ǣ�memmove����Դ�ڴ����Ŀ���ڴ���ص���
void* my_memmove(void* dest, void* src, size_t count) {
	assert(dest != NULL);
	assert(src != NULL);
	void* ret = dest;
	if (dest < src) {
		while (count--) {
			
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else {
		while (count--) {
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}

//memcmp -�ڴ�Ƚϣ�vs����С�˴洢��ʽ����λ�ֽڴ洢����С��ַ��
//int memcmp(const void* buf1, const void* buf2, size_t count)
//��buf1����buf2������һ������0��������֮buf1С��buf2������С��0��������ͬ����0

//memset -�ڴ����ã����ڴ���ĳһ�������ó��ض����ַ�
//void* memset(void* dest, int c, size_t count)

int main() {
	//int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	//int arr2[10] = { 0 };
	////memcpy(arr1+2, arr1, 16);
	//my_memmove(arr1+2, arr1, 16);

	//int arr3[] = { 1,2,3,4 };
	//int arr4[] = { 1,2,4,4 };
	//int ret = memcmp(arr3, arr4, 9);
	//printf("ret = %d\n", ret);
	char arr[] = "hello world";
	memset(arr, '!', 5);



	return 0;
}