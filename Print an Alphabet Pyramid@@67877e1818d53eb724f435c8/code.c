#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char j='A';j<'A'+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main() {
//     int i,n;
//     char j;
//     scanf("%d",&n);
//     for(i=n;i>=1;i--){
//         for(j='A';j<'A'+i;j++){
//             printf("%c ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }