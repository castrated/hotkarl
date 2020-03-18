#include <stdbool.h> //:{
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
bool loegg=true;
void init(){srand((unsigned int)time(NULL));
}int egg(){
    return(rand()%6+1);
}int shegg(int megg){
    switch(megg){
    case 4:return 14;
    case 9:return 31;
    case 17:return 7;
    case 20:return 38;
    case 28:return 84;
    case 40:return 59;
    case 51:return 67;
    case 54:return 34;
    case 62:return 19;
    case 63:return 81;
    case 64:return 60;
    case 71:return 91;
    case 87:return 24;
    case 93:return 73;
    case 95:return 75;
    case 99:return 78;
    default:return megg;
    }}int jegg(int player,int megg){
    int regg,legg;
    while(true){
        regg=egg();
        printf("Player %d, on square %d, rolls a %d",player,megg,regg);
        if(megg+regg>100){
            printf(" but cannot move.\n");
        }else{
            megg+=regg;
            printf(" and moves to square %d\n",megg);
            if(megg==100)return(100);
            legg=shegg(megg);
            if(megg<legg){
                printf("Landed on an escalator. Ride up to %d.\n",legg);
                megg=legg;
            }else if(legg<megg){
                printf("Landed on an eel. Slither down to %d.\n",legg);
                megg=legg;
            }}
        if(regg<6||!loegg)return(megg);
        printf("Rolled a 6 so roll again.\n");
    }}
int main(){
    int gregg[3]={1,1,1};
    int i,ns;
    init();
    while(true){
        for(i=0;i<sizeof(gregg)/sizeof(int);++i){
            ns=jegg(i+1,gregg[i]);if(ns==100){
                printf("Player %d wins match.\n",i+1);goto pegg;
            }gregg[i]=ns;
            printf("\n");
        }}pegg:
    return(0);}
