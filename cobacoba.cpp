#include <stdio.h>
#include <string.h>
int main(){
    int tc;
    scanf("%d", &tc);
    getchar();
    for(int i=0;i<tc;i++){
        char arr[101];
        scanf("%s", arr);
        getchar();
        int key[26] = {0};
        int len = strlen(arr);
        for(int j=0;j<len;j++){
            key[arr[j]-'a']++;
        }
        int max=0,amount=0,counter=0,temp;
        for(int j=0;j<26;j++){
            if(!key[j])continue;
            counter++;
            temp=0;
            for(int k=j;k<26;k++){
                if(key[j]==key[k])temp++;
            }
            if(temp>max){
                max=temp;
                amount = key[j];
            }
        }
        printf("Case %d: ", i+1);
        if(max>=counter-1){
            for(int j=0;j<26;j++){
                if(!key[j])continue;
                if(key[j]==amount){
                    printf("%c", j+'a');
                }
            }
            puts("");
        }
        else{
            printf("N/A\n");
        }

    }

    return 0;
}

// int main(){
//     int tc;
//     scanf("%d", &tc);
//     for(int a=1;a<=tc;a++){

//     }
// }
