 #include<stdio.h>
 
 int main(void){
     int i,m;
     
     for(m=2;m<=500;m++){
     for(i=2;i<=m/2;i++){ 
         if(m % i==0)
         break;
     }    
         if(i>=m/2 && m!=1){
             printf("%5d",m);
         }
        
         
     }         
         
       return 0;  
 }     