/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    int row,col;
    printf("Enter Number of rows:");
    scanf("%d",&row);
    printf("Enter Number of cols:");
    scanf("%d",&col);
    char longest_name[50];
    int name_from_vowel=0;
    char name[row][col][50];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Name at (%d,%d): ",i,j);
            scanf("%s",name[i][j]);
            if(strlen(name[i][j])>strlen(longest_name)){
                strcpy(longest_name,name[i][j]);
            }
            if(name[i][j][0]=='A' || name[i][j][0]=='E' || name[i][j][0]=='I' || name[i][j][0]=='O' || name[i][j][0]=='U'){
                name_from_vowel++;
            }
        
            
        }
    }
    printf("The 2D array of names is:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%s\t",name[i][j]);
        }
        printf("\n");
    }
    printf("Number of names starting with vowels :%d\n",name_from_vowel);
    printf("The longest name: %s\n",longest_name);
    
    

    return 0;
}
