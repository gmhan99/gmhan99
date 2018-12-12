#include <stdio.h>
#include <string.h>
//src 를 기준으로 dest 를 나눈다 
void *m_strtok(char *dest, char *src){
	int idx = 0;
	int temp = 0;
	int len_dest = strlen(dest) - 1;//최대길이 체크를 위한 변수 
	for(int i = 0; i <= len_dest; i++){ //최대길이 체크 
		if(dest[idx] == *src){//하나씩 체크하면서 기준과 동일하면 
			dest[idx] = '\0';//\0으로 바꾸고 
//			printf("done");
			printf("%s\n", dest[temp]);//그때까지 출력하고
//			printf("done");
			idx++;//기준 하나 뒤로 이동	
//			printf("done");
			temp = idx;//기준점을 땅겨준다 
//			printf("done");			
		}
		else idx++;//아닐때도 하나씩 뒤로 이동 
//		printf("%d\n", idx);//제대로 실행되는지 체크용 
	}
	if(idx == len_dest - 1) printf("%s\n", dest[temp]);//실행 다 하고 없으면 
}	
int main(){
	char dest[100];
	char src[100];
	scanf("%[^\n]s", dest); // 나누는 문자열 
	scanf("%s", src); // 나눌 기준 
	m_strtok(dest, src);
}

//aaa aaaa aaaaa
