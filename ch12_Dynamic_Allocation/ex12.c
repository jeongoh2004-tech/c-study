    /*12장 동적 할당 실습 문제*/
    #define _CRT_SECURE_NO_WARNINGS 
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    int main(){
        int N;
        scanf("%d", &N);
        getchar();
        char tmp[101];
        char **ch=(char **)malloc(N*sizeof(char*));
        if(ch==NULL){
            printf("fail");
            return -1;
        }
        for(int i=0; i<N; i++){
            fgets(tmp, 101, stdin);
            if(strchr(tmp, '\n')!=NULL){
                tmp[strcspn(tmp, "\n")]='\0';
            }
            else{
                int c;
                while((c=getchar())!='\n' && c!=EOF);
            }
            int len=strlen(tmp);
            *(ch+i)=(char *)malloc((len+1)*sizeof(char));
            if(*(ch+i)==NULL){
                printf("fail");
                return -1;
            }
            strcpy(*(ch+i), tmp);
        }
        for(int i=0; i<N-1; i++){
            for(int j=0; j<N-1-i; j++){
                if(strcmp(*(ch+j), *(ch+j+1))>0){
                    char *index;
                    index=*(ch+j);
                    *(ch+j)=*(ch+j+1);
                    *(ch+j+1)=index;
                }
            }
        }
        for(int i=0; i<N; i++){
            printf("%s\n", *(ch+i));
        }
        for(int i=0; i<N; i++){
            free(*(ch+i));
        }
        free(ch);
        return 0;
    }