#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include"assert.h"

//位段
struct BitF {
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

////memcpy -内存拷贝，用于拷贝两个不相关的内存块的函数
////从src内存位置向后复制count个字节的数据到dest内存位置，并返回dest首地址
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

//memmove -内存拷贝，与memcpy不同的是，memmove允许源内存块与目标内存块重叠。
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

//memcmp -内存比较，vs采用小端存储方式，低位字节存储在最小地址处
//int memcmp(const void* buf1, const void* buf2, size_t count)
//当buf1大于buf2，返回一个大于0的数，反之buf1小于buf2，返回小于0的数，相同返回0

//memset -内存设置，将内存块的某一部分设置成特定的字符
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