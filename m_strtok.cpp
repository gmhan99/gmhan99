#include <stdio.h>
#include <string.h>
//src �� �������� dest �� ������ 
void *m_strtok(char *dest, char *src){
	int idx = 0;
	int temp = 0;
	int len_dest = strlen(dest) - 1;//�ִ���� üũ�� ���� ���� 
	for(int i = 0; i <= len_dest; i++){ //�ִ���� üũ 
		if(dest[idx] == *src){//�ϳ��� üũ�ϸ鼭 ���ذ� �����ϸ� 
			dest[idx] = '\0';//\0���� �ٲٰ� 
//			printf("done");
			printf("%s\n", dest[temp]);//�׶����� ����ϰ�
//			printf("done");
			idx++;//���� �ϳ� �ڷ� �̵�	
//			printf("done");
			temp = idx;//�������� �����ش� 
//			printf("done");			
		}
		else idx++;//�ƴҶ��� �ϳ��� �ڷ� �̵� 
//		printf("%d\n", idx);//����� ����Ǵ��� üũ�� 
	}
	if(idx == len_dest - 1) printf("%s\n", dest[temp]);//���� �� �ϰ� ������ 
}	
int main(){
	char dest[100];
	char src[100];
	scanf("%[^\n]s", dest); // ������ ���ڿ� 
	scanf("%s", src); // ���� ���� 
	m_strtok(dest, src);
}

//aaa aaaa aaaaa
