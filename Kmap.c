#include<stdio.h>

void main()
{
 int i,j,a[4],m[4]={0,0,0,0},n,c=0,d,k[8]={0,0,0,0,0,0,0,0},e,f=0,g,l[8]={0,0,0,0,0,0,0,0},
y[13]={0,0,0,0,0,0,0,0,0,0,0,0,0},o[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
p[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},b=0,h[64];
 int s,t,u,v,q,z;

 for(i=0;i<64;i++)
 {
 h[i]=0;
 } 
 printf("designed by SOURADEEP MUKHOPADHYAY\n");
 printf("how many variable kmap you want to solve (2,3,4):");
 scanf("%d",&d);
 if(d==2)
 {
printf("enter how many minterms you want to enter:");
scanf("%d",&n);

if(n>4)
{
   printf("you have entered wrong minterms because maximum minterm in 2 variable k-map is 4:");
   goto l;
}

z:

for(i=0;i<n;i++)
{
       printf("%d""th minterm:",i);
       scanf("%d",&a[i]);
}
printf("\nEntered minterms are : ");

for(i=0;i<=3;i++)
{
 printf("%d",a[i]);
}
printf("\n if emtered minterms are correct press 1 or press 0 to go back:");
scanf("%d",&q);
if(q==0)
{
goto z;
}
if(q==1)
{


printf("\n The matrix is");
for(i=0;i<=3;i++)
{
 for(j=0;j<=3;j++)
 {
       if(a[i]-j==0)
       {
    m[j]=1;

       }
 }
}
printf("\n");
for(i=0;i<=3;i++)
{
 printf("%d",m[i]);
}
printf("\n");
printf("the ans is:");
for(i=0;i<=3;i++)
{              if(m[i]==1)
      {
      c++;
      }
}
if(c==4)
{
 printf("y=1");
}

else
{
 printf("y=");
if(m[0]==1&&m[1]==1)
{
 printf("!A+");
}
if(m[0]==1&&m[2]==1)
{
 printf("!B+");
}
if(m[1]==1&&m[3]==1)
{
 printf("B+");
}
if(m[2]==1&&m[3]==1)
{
 printf("A+");
}
if(m[1]==0&&m[2]==0&&m[0]==1)
{
    printf("!A!B+");
}
if(m[1]==1&&m[3]==0&&m[0]==0)
{
    printf("!AB+");
}
if(m[0]==0&&m[2]==1&&m[3]==0)
{
 printf("A!B+");
}
if(m[1]==0&&m[2]==0&&m[3]==1)
{
    printf("AB");
}

}
getch();
}
}
if(d==3)
{
printf("enter how many minterms you want to enter:");
scanf("%d",&e);

if(e>8)
{
   printf("you have entered wrong minterms because maximum minterm in 3 variable is 8:");
   goto l;
}

t:
for(i=0;i<e;i++)
{
       printf("%d""th minterm:",i);
       scanf("%d",&k[i]);
}

printf("\n entered minterms are");
for(i=0;i<=7;i++)
{
 printf("%d",k[i]);
}

printf("\n if entered minterms are correct press 1 or press 0 to go back:");
scanf("%d",&s);
if(s==0)
{
goto t;
}
if(s==1)
{
printf("\n Final matrix");
for(i=0;i<=7;i++)
{
 for(j=0;j<=7;j++)
 {
       if(k[i]-j==0)
       {
    l[j]=1;

       }
 }
}
printf("\n");
for(i=0;i<=7;i++)
{
 printf("%d",l[i]);
}
printf("\n");
printf("the ans is:");
for(i=0;i<=7;i++)
{              if(l[i]==1)
      {
      f++;
      }
}
if(f==8)
{
 printf("x=1");
}
else
{
 printf("x=");

       if(l[0]==1&&l[1]==1&&l[4]==1&&l[5]==1)
       {
  y[0]=1;
  printf("!B+");
       }
       if(l[2]==1&&l[3]==1&&l[6]==1&&l[7]==1)
       {
  y[1]=2;

  printf("B+");
       }

       if(l[0]==1&&l[1]==1&&l[2]==1&&l[3]==1)
       {
  y[2]=3;

  printf("!A+");
       }
       if(l[4]==1&&l[5]==1&&l[6]==1&&l[7]==1)
       {
  y[3]=4;

  printf("A+");
       }
       if(l[0]==1&&l[2]==1&&l[4]==1&&l[6]==1)
       {
  y[4]=5;
  printf("!C+");
       }
       if(l[1]==1&&l[3]==1&&l[7]==1&&l[5]==1)
       {
  y[5]=6;

  printf("C+");
       }
       if(y[4]!=5&&y[0]!=1&&l[0]==1&&l[4]==1)
       {
  y[6]=7;
  printf("!B!C+");
       }
       if(y[0]!=1&&l[1]==1&&l[5]==1&&y[5]!=6)
       {
  y[7]=8;
  printf("!BC+");
       }
       if(y[5]!=6&&y[1]!=2&&l[3]==1&&l[7]==1)
       {
  y[8]=9;
  printf("BC+");
       }

       if(y[4]!=5&&y[1]!=2&&l[2]==1&&l[6]==1)
       {
  y[9]=10;
  printf("B!C+");
       }


       if(y[0]!=1&&l[0]==1&&l[1]==1&&y[2]!=3)
       {
  y[10]=11;
  printf("!B!A+");
       }
       if(y[1]!=2&&l[3]==1&&l[2]==1&&y[2]!=3)
       {
  y[11]=12;
  printf("!AB+");
       }
       if(y[1]!=2&&l[7]==1&&l[6]==1&&y[3]!=4)
       {
  y[12]=13;
  printf("AB+");
       }
       if(y[0]!=1&&l[4]==1&&l[5]==1&&y[3]!=4)
       {
  y[13]=14;
  printf("!BA+");
       }


       if(y[5]!=6&&l[3]==1&&l[1]==1&&y[2]!=3)
       {

  printf("!AC+");
       }
       if(y[5]!=6&&l[5]==1&&l[7]==1&&y[3]!=4)
       {

  printf("AC+");
       }
       if(y[2]!=3&&y[4]!=5&&l[0]==1&&l[2]==1)
       {
  printf("!A!C+");
       }
       if(y[4]!=5&&l[4]==1&&l[6]==1&&y[3]!=4)
       {

  printf("A!C+");
       }
       if(l[1]==0&&l[4]==0&&l[0]==1&&l[2]==0)
       {

  printf("!A!B!C+");
       }
       if(l[0]==0&&l[5]==0&&l[1]==1&&l[3]==0)
       {
  printf("!A!BC+");
       }
       if(l[1]==0&&l[2]==0&&l[3]==1&&l[7]==0)
       {
  printf("!ABC+");
       }
       if(l[3]==0&&l[6]==0&&l[0]==0&&l[2]==1)
       {
  printf("!AB!C+");
       }
       if(l[0]==0&&l[4]==1&&l[6]==0&&l[5]==0)
       {
  printf("A!B!C+");
       }
       if(l[1]==0&&l[4]==0&&l[5]==1&&l[7]==0)
       {
  printf("A!BC+");
       }
       if(l[3]==0&&l[5]==0&&l[6]==0&&l[7]==1)
       {
  printf("ABC+");
       }
       if(l[2]==0&&l[4]==0&&l[6]==1&&l[7]==0)
       {
  printf("AB!C+");
       }



}
getch();
}
}

if(d==4)
{
printf("enter how many minterms you want to enter:");
scanf("%d",&g);

if(g>16)
{
   printf("you have entered wrong minterms because maximum minterm in 4 variable is 16:");
   goto l;
}
v:
for(i=0;i<g;i++)
{
       printf("%d""th minterm:",i);
       scanf("%d",&o[i]);
}

printf("\n entered minterms are");
for(i=0;i<g;i++)
{
 printf("%d",o[i]);
}

printf("\n if minterms are  correct press 1 or press 0 to go back:");
scanf("%d",&u);
if(u==0)
{
goto v;
}
if(u==1)
{
printf("\n Final matrix is:");
for(i=0;i<g;i++)
{
 for(j=0;j<=15;j++)
 {
       if(o[i]-j==0)
       {
    p[j]=1;

       }
 }
}
printf("\n");
for(i=0;i<=15;i++)
{
 printf("%d",p[i]);
}
printf("\n");
printf("the ans is:");
for(i=0;i<=15;i++)
{              if(p[i]==1)
      {
      b++;
      }
}
if(b==16)
{
 printf("x=1");
}
else
{
 printf("x=");

       if(p[0]==1&&p[1]==1&&p[2]==1&&p[3]==1&&p[4]==1&&p[5]==1&&p[6]==1&&p[7]==1)
       {
  h[0]=1;
  printf("!A+");
       }
       if(p[8]==1&&p[9]==1&&p[10]==1&&p[11]==1&&p[12]==1&&p[13]==1&&p[14]==1&&p[15]==1)
       {
  h[1]=1;
  printf("A+");
       }
       if(p[0]==1&&p[1]==1&&p[2]==1&&p[3]==1&&p[8]==1&&p[9]==1&&p[10]==1&&p[11]==1)
       {
  h[2]=1;
  printf("!B+");
       }
       if(p[4]==1&&p[5]==1&&p[6]==1&&p[7]==1&&p[12]==1&&p[13]==1&&p[14]==1&&p[15]==1)
       {
  h[3]=1;
  printf("B+");
       }
       if(p[0]==1&&p[1]==1&&p[4]==1&&p[5]==1&&p[12]==1&&p[13]==1&&p[8]==1&&p[9]==1)
       {
  h[4]=1;
  printf("!C+");
       }
       if(p[2]==1&&p[3]==1&&p[6]==1&&p[7]==1&&p[10]==1&&p[11]==1&&p[14]==1&&p[15]==1)
       {
  h[5]=1;
  printf("C+");
       }
       if(p[0]==1&&p[2]==1&&p[4]==1&&p[6]==1&&p[8]==1&&p[10]==1&&p[12]==1&&p[14]==1)
       {
  h[6]=1;
  printf("!D+");
       }
       if(p[1]==1&&p[3]==1&&p[5]==1&&p[7]==1&&p[9]==1&&p[11]==1&&p[13]==1&&p[15]==1)
       {
  h[7]=1;
  printf("D+");
       }


       if(p[0]==1&&p[1]==1&&p[2]==1&&p[3]==1&&h[0]!=1&&h[2]!=1)
       {
  h[8]=1;
  printf("!A!B+");
       }
       if(p[4]==1&&p[5]==1&&p[6]==1&&p[7]==1&&h[0]!=1&&h[3]!=1)
       {
  h[9]=1;
  printf("!AB+");
       }
       if(p[12]==1&&p[13]==1&&p[14]==1&&p[15]==1&&h[1]!=1&&h[3]!=1)
       {
  h[10]=1;
  printf("AB+");
       }
       if(p[8]==1&&p[9]==1&&p[10]==1&&p[11]==1&&h[1]!=1&&h[2]!=1)
       {
  h[11]=1;
  printf("A!B+");
       }
       if(p[0]==1&&p[4]==1&&p[8]==1&&p[12]==1&&h[4]!=1&&h[6]!=1)
       {
  h[12]=1;
  printf("!C!D+");
       }
       if(p[1]==1&&p[5]==1&&p[9]==1&&p[13]==1&&h[4]!=1&&h[7]!=1)
       {
  h[13]=1;
  printf("!CD+");
       }
       if(p[3]==1&&p[7]==1&&p[11]==1&&p[15]==1&&h[7]!=1&&h[5]!=1)
       {
  h[14]=1;
  printf("CD+");
       }
       if(p[2]==1&&p[6]==1&&p[10]==1&&p[14]==1&&h[5]!=1&&h[6]!=1)
       {
  h[15]=1;
  printf("C!D+");
       }
       if(p[0]==1&&p[1]==1&&p[4]==1&&p[5]==1&&h[0]!=1&&h[4]!=1)
       {
  h[16]=1;
  printf("!A!C+");
       }
       if(p[1]==1&&p[3]==1&&p[5]==1&&p[7]==1&&h[0]!=1&&h[7]!=1)
       {
  h[17]=1;
  printf("!AD+");
       }
       if(p[2]==1&&p[3]==1&&p[6]==1&&p[7]==1&&h[0]!=1&&h[5]!=1)
       {
  h[18]=1;
  printf("!AC+");
       }
       if(p[0]==1&&p[2]==1&&p[4]==1&&p[6]==1&&h[0]!=1&&h[6]!=1)
       {
  h[19]=1;
  printf("!A!D+");
       }
       if(p[4]==1&&p[5]==1&&p[12]==1&&p[13]==1&&h[3]!=1&&h[4]!=1)
       {
  h[20]=1;
  printf("B!C+");
       }
       if(p[5]==1&&p[7]==1&&p[13]==1&&p[15]==1&&h[3]!=1&&h[7]!=1)
       {
  h[21]=1;
  printf("BD+");
       }
       if(p[6]==1&&p[7]==1&&p[14]==1&&p[15]==1&&h[3]!=1&&h[5]!=1)
       {
  h[22]=1;
  printf("BC+");
       }
       if(p[4]==1&&p[6]==1&&p[12]==1&&p[14]==1&&h[3]!=1&&h[6]!=1)
       {
  h[23]=1;
  printf("B!D+");
       }
       if(p[8]==1&&p[9]==1&&p[12]==1&&p[13]==1&&h[1]!=1&&h[4]!=1)
       {
  h[24]=1;
  printf("A!C+");
       }
       if(p[9]==1&&p[11]==1&&p[13]==1&&p[15]==1&&h[1]!=1&&h[7]!=1)
       {
  h[25]=1;
  printf("AD+");
       }
       if(p[10]==1&&p[11]==1&&p[14]==1&&p[15]==1&&h[1]!=1&&h[5]!=1)
       {
  h[26]=1;
  printf("AC+");
       }
       if(p[8]==1&&p[10]==1&&p[12]==1&&p[14]==1&&h[1]!=1&&h[6]!=1)
       {
  h[27]=1;
  printf("A!D+");
       }
       if(p[0]==1&&p[1]==1&&p[8]==1&&p[9]==1&&h[2]!=1&&h[4]!=1)
       {
  h[28]=1;
  printf("!B!C+");
       }
       if(p[1]==1&&p[3]==1&&p[9]==1&&p[11]==1&&h[2]!=1&&h[7]!=1)
       {
  h[29]=1;
  printf("!BD+");
       }
       if(p[2]==1&&p[3]==1&&p[10]==1&&p[11]==1&&h[2]!=1&&h[5]!=1)
       {
  h[30]=1;
  printf("!BC+");
       }
       if(p[0]==1&&p[2]==1&&p[8]==1&&p[10]==1&&h[2]!=1&&h[6]!=1)
       {
  h[31]=1;
  printf("!B!D+");
       }
       if(p[0]==1&&p[1]==1&&h[8]!=1&&h[16]!=1&&h[28]!=1&&h[0]!=1&&h[2]!=1&&h[4]!=1)
       {
  h[32]=1;
  printf("!A!B!C+");
       }
       if(p[1]==1&&p[3]==1&&h[8]!=1&&h[17]!=1&&h[29]!=1&&h[0]!=1&&h[2]!=1&&h[7]!=1)
       {
  h[33]=1;
  printf("!A!BD+");
       }
       if(p[2]==1&&p[3]==1&&h[8]!=1&&h[18]!=1&&h[30]!=1&&h[0]!=1&&h[2]!=1&&h[5]!=1)
       {
  h[34]=1;
  printf("!A!BC+");
       }
       if(p[0]==1&&p[2]==1&&h[8]!=1&&h[19]!=1&&h[31]!=1&&h[0]!=1&&h[2]!=1&&h[6]!=1)
       {
  h[35]=1;
  printf("!A!B!D+");
       }
       if(p[4]==1&&p[5]==1&&h[9]!=1&&h[16]!=1&&h[20]!=1&&h[0]!=1&&h[3]!=1&&h[4]!=1)
       {
  h[36]=1;
  printf("!AB!C+");
       }
       if(p[5]==1&&p[7]==1&&h[9]!=1&&h[17]!=1&&h[21]!=1&&h[0]!=1&&h[3]!=1&&h[7]!=1)
       {
  h[37]=1;
  printf("!ABD+");
       }
       if(p[6]==1&&p[7]==1&&h[9]!=1&&h[18]!=1&&h[22]!=1&&h[0]!=1&&h[3]!=1&&h[5]!=1)
       {
  h[38]=1;
  printf("!ABC+");
       }
       if(p[4]==1&&p[6]==1&&h[9]!=1&&h[19]!=1&&h[23]!=1&&h[0]!=1&&h[3]!=1&&h[6]!=1)
       {
  h[39]=1;
  printf("!AB!D+");
       }
       if(p[12]==1&&p[13]==1&&h[10]!=1&&h[20]!=1&&h[24]!=1&&h[1]!=1&&h[3]!=1&&h[4]!=1)
       {
  h[40]=1;
  printf("AB!C+");
       }
       if(p[13]==1&&p[15]==1&&h[10]!=1&&h[21]!=1&&h[25]!=1&&h[1]!=1&&h[3]!=1&&h[7]!=1)
       {
  h[41]=1;
  printf("!A!BD+");
       }
       if(p[14]==1&&p[15]==1&&h[10]!=1&&h[22]!=1&&h[26]!=1&&h[5]!=1&&h[3]!=1&&h[1]!=1)
       {
  h[42]=1;
  printf("!A!BC+");
       }
       if(p[12]==1&&p[14]==1&&h[10]!=1&&h[23]!=1&&h[27]!=1&&h[1]!=1&&h[6]!=1&&h[3]!=1)
       {
  h[43]=1;
  printf("!A!B!D+");
       }
       if(p[8]==1&&p[9]==1&&h[11]!=1&&h[24]!=1&&h[28]!=1&&h[1]!=1&&h[2]!=1&&h[4]!=1)
       {
  h[44]=1;
  printf("A!B!C+");
       }
       if(p[9]==1&&p[11]==1&&h[11]!=1&&h[25]!=1&&h[29]!=1&&h[7]!=1&&h[2]!=1&&h[1]!=1)
       {
  h[45]=1;
  printf("A!BD+");
       }
       if(p[10]==1&&p[11]==1&&h[11]!=1&&h[26]!=1&&h[30]!=1&&h[1]!=1&&h[2]!=1&&h[5]!=1)
       {
  h[46]=1;
  printf("A!BC+");
       }
       if(p[8]==1&&p[10]==1&&h[11]!=1&&h[27]!=1&&h[31]!=1&&h[6]!=1&&h[2]!=1&&h[1]!=1)
       {
  h[47]=1;
  printf("A!B!D+");
       }
       if(p[0]==1&&p[4]==1&&h[12]!=1&&h[16]!=1&&h[19]!=1&&h[0]!=1&&h[6]!=1&&h[4]!=1)
       {
  h[48]=1;
  printf("!A!C!D+");
       }
       if(p[4]==1&&p[12]==1&&h[12]!=1&&h[20]!=1&&h[23]!=1&&h[3]!=1&&h[6]!=1&&h[4]!=1)
       {
  h[49]=1;
  printf("B!C!D+");
       }
       if(p[8]==1&&p[12]==1&&h[12]!=1&&h[24]!=1&&h[27]!=1&&h[1]!=1&&h[6]!=1&&h[4]!=1)
       {
  h[50]=1;
  printf("A!C!D+");
       }
       if(p[0]==1&&p[8]==1&&h[12]!=1&&h[28]!=1&&h[31]!=1&&h[6]!=1&&h[2]!=1&&h[4]!=1)
       {
  h[51]=1;
  printf("!B!C!D+");
       }
       if(p[1]==1&&p[5]==1&&h[13]!=1&&h[16]!=1&&h[17]!=1&&h[0]!=1&&h[7]!=1&&h[4]!=1)
       {
  h[52]=1;
  printf("!A!CD+");
       }
       if(p[5]==1&&p[13]==1&&h[13]!=1&&h[20]!=1&&h[21]!=1&&h[3]!=1&&h[7]!=1&&h[4]!=1)
       {
  h[53]=1;
  printf("B!CD+");
       }
       if(p[9]==1&&p[13]==1&&h[13]!=1&&h[24]!=1&&h[25]!=1&&h[1]!=1&&h[7]!=1&&h[4]!=1)
       {
  h[54]=1;
  printf("A!CD+");
       }
       if(p[1]==1&&p[9]==1&&h[13]!=1&&h[28]!=1&&h[29]!=1&&h[7]!=1&&h[2]!=1&&h[4]!=1)
       {
  h[55]=1;
  printf("!B!CD+");
       }
       if(p[3]==1&&p[7]==1&&h[14]!=1&&h[17]!=1&&h[18]!=1&&h[5]!=1&&h[7]!=1&&h[0]!=1)
       {
  h[56]=1;
  printf("!ACD+");
       }
       if(p[7]==1&&p[15]==1&&h[14]!=1&&h[21]!=1&&h[22]!=1&&h[5]!=1&&h[7]!=1&&h[3]!=1)
       {
  h[57]=1;
  printf("BCD+");
       }
       if(p[11]==1&&p[15]==1&&h[14]!=1&&h[25]!=1&&h[26]!=1&&h[5]!=1&&h[7]!=1&&h[1]!=1)
       {
  h[58]=1;
  printf("ACD+");
       }
       if(p[3]==1&&p[11]==1&&h[14]!=1&&h[29]!=1&&h[30]!=1&&h[5]!=1&&h[2]!=1&&h[7]!=1)
       {
  h[59]=1;
  printf("!BCD+");
       }
       if(p[2]==1&&p[6]==1&&h[15]!=1&&h[18]!=1&&h[19]!=1&&h[0]!=1&&h[6]!=1&&h[5]!=1)
       {
  h[60]=1;
  printf("!AC!D+");
       }
       if(p[6]==1&&p[14]==1&&h[15]!=1&&h[22]!=1&&h[23]!=1&&h[5]!=1&&h[6]!=1&&h[3]!=1)
       {
  h[61]=1;
  printf("BC!D+");
       }
       if(p[10]==1&&p[14]==1&&h[15]!=1&&h[26]!=1&&h[27]!=1&&h[1]!=1&&h[6]!=1&&h[5]!=1)
       {
  h[62]=1;
  printf("AC!D+");
       }
       if(p[2]==1&&p[10]==1&&h[15]!=1&&h[30]!=1&&h[31]!=1&&h[5]!=1&&h[2]!=1&&h[6]!=1)
       {
  h[63]=1;
  printf("!BC!D+");
       }
       if(p[0]==1&&p[1]==0&&p[2]==0&&p[4]==0&&p[8]==0)
       {
  printf("!A!B!C!D+");
       }
       if(p[1]==1&&p[0]==0&&p[3]==0&&p[5]==0&&p[9]==0)
       {
  printf("!A!B!CD+");
       }
       if(p[2]==1&&p[0]==0&&p[3]==0&&p[6]==0&&p[10]==0)
       {
  printf("!A!BC!D+");
       }
       if(p[3]==1&&p[1]==0&&p[2]==0&&p[7]==0&&p[11]==0)
       {
  printf("!A!BCD+");
       }
       if(p[4]==1&&p[0]==0&&p[5]==0&&p[6]==0&&p[12]==0)
       {
  printf("!AB!C!D+");
       }
       if(p[5]==1&&p[1]==0&&p[4]==0&&p[7]==0&&p[13]==0)
       {
  printf("!AB!CD+");
       }
       if(p[6]==1&&p[2]==0&&p[4]==0&&p[7]==0&&p[14]==0)
       {
  printf("!ABC!D+");
       }
       if(p[7]==1&&p[3]==0&&p[5]==0&&p[6]==0&&p[15]==0)
       {
  printf("!ABCD+");
       }
       if(p[8]==1&&p[0]==0&&p[9]==0&&p[10]==0&&p[12]==0)
       {
  printf("A!B!C!D+");
       }
       if(p[9]==1&&p[1]==0&&p[8]==0&&p[11]==0&&p[13]==0)
       {
  printf("A!B!CD+");
       }
       if(p[10]==1&&p[2]==0&&p[8]==0&&p[11]==0&&p[14]==0)
       {
  printf("A!BC!D+");
       }
       if(p[11]==1&&p[3]==0&&p[9]==0&&p[10]==0&&p[15]==0)
       {
  printf("A!BCD+");
       }
       if(p[12]==1&&p[4]==0&&p[8]==0&&p[13]==0&&p[14]==0)
       {
  printf("AB!C!D+");
       }
       if(p[13]==1&&p[5]==0&&p[9]==0&&p[12]==0&&p[15]==0)
       {
  printf("AB!CD+");
       }
       if(p[14]==1&&p[6]==0&&p[10]==0&&p[12]==0&&p[15]==0)
       {
  printf("ABC!D+");
       }
       if(p[15]==1&&p[7]==0&&p[11]==0&&p[13]==0&&p[14]==0)
       {
  printf("ABCD+");
       }

}
l:

getch();
}
}
}
