#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct Name{
    char firstName[21];
    char lastName[21];
};

int main(){
    int n;
    scanf("%d",&n);

    struct Name people[n];

    for(int i=0;i<n;i++){
        scanf("%s %s",&people[i].firstName,&people[i].lastName);
    }
    bool isMem = false;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(people[i].firstName,people[j].firstName)== 0 && strcmp(people[i].lastName,people[j].lastName)== 0){
                isMem = true;
                break;
            }
        }
    }

    if(isMem){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
