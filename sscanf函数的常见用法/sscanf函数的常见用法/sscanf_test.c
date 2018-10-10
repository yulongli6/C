#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static void sscanf_test(void)
{
	int ret;
	char *string;
	int  digit;
	char buf1[255];
	char buf2[255];
	char buf3[255];
	char buf4[255];

	//1.��򵥵��÷�
	string = "china beijing 123";
	ret = sscanf(string, "%s %s %d", buf1, buf2, &digit);
	printf("1.string=%s\n", string);
	printf("1.ret=%d, buf1=%s, buf2=%s, digit=%d\n\n", ret, buf1, buf2, digit);
	//
	//ִ�н��:
	//1.string=china beijing 123
	//1.ret=3, buf1=china, buf2=beijing, digit=123
	//���Կ���,sscanf�ķ���ֵ�Ƕ�ȡ�Ĳ�������
	//	

	//2.ȡָ�����ȵ��ַ���
	string = "123456789";
	sscanf(string, "%5s", buf1);//���ַ���string��ȡ��λ��������buf1��
	printf("2.string=%s\n", string);
	printf("2.buf1=%s\n\n", buf1);
	//
	//ִ�н��:
	//2.string=123456789
	//2.buf1=12345
	//	

	//3.ȡ��ָ���ַ�Ϊֹ���ַ���
	string = "123456";
	sscanf(string, "%[^4]", buf1);
	printf("3.string=%s\n", string);
	printf("3.buf1=%s\n\n", buf1);
	//
	//ִ�н��:
	//3.string=123456
	//3.buf1=123
	//	

	//4.ȡ��ָ���ַ���Ϊֹ���ַ���
	string = "123abcABC";
	sscanf(string, "%[^A-Z]", buf1);
	printf("4.string=%s\n", string);
	printf("4.buf1=%s\n\n", buf1);
	//
	//ִ�н��:
	//4.string=123abcABC
	//4.buf1=123abc
	//	

	//5.ȡ������ָ���ַ������ַ���
	string = "0123abcABC";
	sscanf(string, "%[0-9]%[a-z]%[A-Z]", buf1, buf2, buf3);
	printf("5.string=%s\n", string);
	printf("5.buf1=%s, buf2=%s, buf3=%s\n\n", buf1, buf2, buf3);
	//
	//ִ�н��:
	//5.string=012abcABC
	//5.buf1=123, buf2=abc, buf3=ABC
	//	

	//6.��ȡָ���ַ��м���ַ���
	string = "ios<android>wp7";
	sscanf(string, "%*[^<]<%[^>]", buf1);
	printf("6.string=%s\n", string);
	printf("6.buf1=%s\n\n", buf1);
	//
	//ִ�н��:
	//6.string=ios<android>wp7
	//6.buf1=android
	//	

	//7.ָ��Ҫ�������ַ���
	string = "iosANDandroid";
	sscanf(string, "%[a-z]AND%[a-z]", buf1, buf2);
	printf("7.string=%s\n", string);
	printf("7.buf1=%s, buf2=%s\n\n", buf1, buf2);
	//
	//ִ�н��:
	//7.string=iosANDandroid
	//7.buf1=ios, buf2=android
	//	

	//8.�ָ���ĳ�ַ��������ַ���
	string = "android-iphone-wp7";
	//
	//�ַ���ȡ��'-'Ϊֹ,���滹��Ҫ���ŷָ���'-',
	//�𵽹�������,�е������ڵ�7��
	//	
	sscanf(string, "%[^-]-%[^-]-%[^-]", buf1, buf2, buf3);
	printf("8.string=%s\n", string);
	printf("8.buf1=%s, buf2=%s, buf3=%s\n\n", buf1, buf2, buf3);
	//
	//ִ�н��:
	//8.string=android-iphone-wp7
	//8.buf1=android, buf2=iphone, buf3=wp7
	//	

	//9.��ȡ�����ַ
	string = "Email:beijing@sina.com.cn";
	sscanf(string, "%[^:]:%[^@]@%[^.].%s", buf1, buf2, buf3, buf4);
	printf("9.string=%s\n", string);
	printf("9.buf1=%s, buf2=%s, buf3=%s, buf4=%s\n\n", buf1, buf2, buf3, buf4);
	//
	//ִ�н��:
	//9.string = Email:beijing@sina.com.cn
	//9.buf1=Email, buf2=beijing, buf3=sina, buf4=com.cn
	//	

	//10.���˵������ȡ����Ҫ���ַ���--����,
	//��%�ź����һ*��,�����������ַ���,����ȡ
	//	
	string = "android iphone wp7";
	sscanf(string, "%s %*s %s", buf1, buf2);
	printf("10.string=%s\n", string);
	printf("10.buf1=%s, buf2=%s\n\n", buf1, buf2);
	//
	//ִ�н��:
	//10.string=android iphone wp7
	//10.buf1=android, buf2=wp7
	//	
}

int main()
{
	sscanf_test();
	return 0;
}

