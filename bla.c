#include<stdio.h>
#include<math.h>

struct abonent {
char name[10];
char lost_name[10];
char tel[10];
};

int main(){
char f[10];
int vsr=0;
int pls;
int r,i,s;
struct abonent a[10];

for(i=0;i<10;i++){
for(r=0;r<10;r++){
a[i].name[r]=0;
}
}
while(vsr==0){
printf("\n" "1.Add Ab");
printf("\n" "2.List Ab");
printf("\n" "3.Quit" "\n");

int s;
scanf("%d", &s);

if ( s == 1){

int i;
for(i=0;i<1;i++){
printf("\n" "vvedite name");
scanf("%s", a[i].name);

printf("\n" "vvedite lost_name");
scanf("%s", a[i].lost_name);

printf("\n" "vvedite tel");
scanf("%s", a[i].tel);
}
pls++;
continue;
}

int i;
if(s==2){
if (pls==0){
printf("\n" "pls not");

continue;
}
else{
for (i=0; i<pls; i++){
printf("name = %s, lost_name = %s, tel = %s", a[i].name, a[i].lost_name, a[i].tel);
}
continue;
}
}
if (s==3)
{vsr=1;}
}

if (s == 4){

if ( pls == 0){
printf("\n", "pls not");
}

else{
for(i=0;i<10;i++){
f[i]=0;}

printf("\n", "vvedite name");
scanf("%s",f);
for(i=0;i<10;i++){
 for(r=0;r<10;r++){
  if (a[i].name[r] == f[r];){
printf("\n", a[i].name[r];)
}
 }
  }

else{
 scanf("\n", "pls not")
}
 }
}








return 0;
}