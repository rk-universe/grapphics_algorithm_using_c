#include<stdio.h>  
#include<math.h>  
#define BIT 4  
void d_b(int dec_s, int bin[BIT]) //function to convert decimal(int type) to binary(array type) 
{  
 int carry,dec,i;  
 carry = 0;  
 dec = dec_s>0?dec_s:-dec_s; //checking if decimal is +ve or -ve  
 
 for(i=0; i<BIT;i++){  
 bin[i] = (dec%2); //store the remainder  
 dec/=2; //reduce the number by a factor of 2  
 }  
 if(dec_s>=0)  
 return;  
 else{  
 for(int j=0; j<BIT;j++){  
 bin[j] = bin[j]==0?1:0; //complementing the bits if decimal is found to be less than zero  
 }  
 if(bin[0]+1<=1){  
 bin[0]+=1;  
 return;  
 }  
 else{  
 carry =1; //if bit additon exceeds 1 then carry is generated   
 for (int i=0;i<BIT;i++)
 {  
 if(bin[i]+carry<=1) {  
 bin[i]+=carry;  
 carry =0;  
 return;  
 }  
 else{  
 bin[i] = (bin[i]+carry)%2;  
 }  
 }  
 }  
 }  
} 
int b_d(int a[BIT],int q[BIT]) //binary to decimal conversion  
{  
 int i=0;  
 int ans=0;  
 for(;i<BIT;i++){  
 ans+=q[i]*pow(2,i);  
 }  
 for(int k=0;k<BIT;k++,i++){  
 ans+=a[k]*pow(2,i);  
 }  
 return ans;  
}  
void twos (int m[BIT], int m2[BIT]) //calculating 2's complement 
{  
 for(int i=0; i<BIT;i++){  
 m2[i]=m[i]==0?1:0; //calculating 1's complement  
 }  
 int carry =1; //adding 1 to the above result  
 for (int i=0;i<BIT;i++){  
 if(m2[i]+carry<=1) {  
 m2[i]+=carry;  
 carry =0;  
 return;  
 }  
 else{  
 m2[i] = (m2[i]+carry)%2; //if result exceeds 1 then take the remainder  
 }  
 }  
} 
int add (int a[BIT], int m[BIT])  
{  
 int carry =0;  
 for (int i=0;i<BIT;i++){  
 carry += m[i];  
 if(a[i]+carry<=1) {  
 a[i]+=carry;  
 carry =0;  
 }  
 else{  
 a[i] = (a[i]+carry)%2;  
 carry = 1;  
 }  
 }  
 return carry;  
}  
int ashr(int a[BIT],int q[BIT],int q_1) //performing ASR b/w A Q and Q-1  
{  
 q_1 = q[0];  
 for(int i=1; i<BIT;i++ ) {  
 q[i-1]=q[i];  
 }  
 q[BIT-1]=a[0];  
 for(int i=1; i<BIT; i++){  
 a[i-1]=a[i];  
 }  
 return q_1;  
}  
int main() // main function to set the flow of the program 
{  
 int multiplicand, multiplier, q_1, count;  
 printf(" Enter the multiplicand: ");  
 scanf("%d", &multiplicand);  
 printf(" Enter the multiplier: ");  
 scanf("%d", &multiplier);  
 q_1 =0;  
 int a[BIT] = {0};  
 int m[BIT]={0};  
 int m2[BIT]={0};  
 int q[BIT]={0};  
 count = BIT;  
 d_b(multiplicand,m); //converting user input into the binary equivalent  
 d_b(multiplier,q);  
 twos(m,m2);  
 printf("\n Entered Multiplicand: ");  
 for(int k=BIT-1; k>=0;k--){  
 printf(" %d",m[k]);  
 }  
 printf("\n Entered Multiplier: ");  
 for(int k=BIT-1; k>=0;k--){  
 printf(" %d",q[k]);  
 }  
 printf("\n\n\t\tA\t Q\t\tQ-1\tOPERATION");  
 int a1=1;  
 for(int i=count;i!=0;i--){  
 printf("\n LOOP NO:%d ",a1);  
 a1++;  
 for(int k=BIT-1; k>=0;k--){  
 printf(" %d",a[k]); 
 }  
 printf("\t");  
 for(int k=BIT-1; k>=0;k--){   printf(" %d",q[k]);  
 }  
 printf("\t %d", q_1);  
 if(q[0]==1&&q_1==0) {   add(a,m2);  
 printf("\n ");  
 for(int k=BIT-1; k>=0;k--){   printf(" %d",a[k]);  
 }  
 printf("\t");  
 for(int k=BIT-1; k>=0;k--){   printf(" %d",q[k]);  
 }  
 printf("\t %d\t ADD M", q_1);   }  
 else if(q[0]==0&&q_1==1) {   add(a,m);  
 printf("\n ");  
 for(int k=BIT-1; k>=0;k--){   printf(" %d",a[k]);  
 }  
 printf("\t");  
 for(int k=BIT-1; k>=0;k--){   printf(" %d",q[k]);  
 }  
 printf("\t %d\t SUB M", q_1);   } 
 q_1 = ashr(a,q,q_1);  
 printf("\n ");  
 for(int k=BIT-1; k>=0;k--){  
 printf(" %d",a[k]);  
 }  
 printf("\t");  
 for(int k=BIT-1; k>=0;k--){  
 printf(" %d",q[k]);  
 }  
 printf("\t %d\t ASHR", q_1);   }  
 printf("\n\nFINAL RESULT: \n");   printf("\n The answer in binary form is:");   for(int k=BIT-1; k>=0;k--){  
 printf(" %d",a[k]);  
 }  
 for(int k=BIT-1; k>=0;k--){  
 printf(" %d",q[k]);  
 }  
 int sign = a[BIT-1];  
 if(sign) {  
 for(int k=BIT-1; k>=0;k--){  
 a[k] = a[k]==1?0:1;  
 q[k] = q[k]==1?0:1;  
 }  
 int one[BIT] = {0};  
 one[0]=1;  
 int carry=0;  
 carry = add(q,one);  
 if(carry) 
 carry = add(a,one);  
 }  
 int ans = b_d(a,q);  
 printf("\n The answer in decimal form is: ");  
 if(sign)  
 printf("-");  
 printf("%d \n",ans);  
} 
