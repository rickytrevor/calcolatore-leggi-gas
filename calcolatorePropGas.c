#include <stdlib.h> 
#include <stdio.h> 

float P1=0,V1=0,P2=0,V2=0,T1=0,T2=0,risplegge=0,provaint=0,celsius=0,kelvin=0,kpa=0,pascal1=0,atm=0,pascal=0;
int op=0,ch1=0,ch2=0,rispconv=0,legge=0,jtms=0;

void
read_data (char *text, float *f)
{
 printf("\n%s",text);
 scanf("%f", f);
 printf("\n\n");
}

int main(){
    
    while (1) {
    
    printf("ciao, se hai già le unità di misura in kelvin e pascal \n\
    digita 0, per i convertitori\n\
    digita 1 se hai le misure convertite in Kelvin, Pascal \n"); 
    
    scanf("%d",&ch1); 
    
   
        if(ch1 == 0)
    {
        printf("\n dimmi cosa devi convertire");
        printf("\n 1) Celsius a Kelvin ");
        printf("\n 2) kpa a pascal ");
        printf("\n 3) atm a pascal ");
        printf("\n : ");
        scanf("%d",&ch2);
        
        if (ch2 == 1)
        {
            read_data("dammi i celsius che devi convertire in kelvin (al posto delle virgole usa i .)", &celsius);
            rispconv= celsius + 273;
            printf("%f C = %5d Kelvin\n",celsius, rispconv);
        }
        if (ch2 == 2)
        {
            read_data("\n dammi i kpa da convertire in pascal (al posto delle virgole usa i .)", &kpa);
           
            rispconv= kpa * 1000;
            printf("%f kPa = %5d Pa\n",kpa, rispconv);
        }
        if (ch2 == 3)
        {
            read_data("\n dammi le atm da convertire in pa (al posto delle virgole usa i .)", &atm);
            
            rispconv= atm * 101325;
            printf("%f atm = %5d pa \n",atm, rispconv);
        }

    }
    if(ch1 == 1)
    {
        printf("\n dimmi con chi devi lavorare ");
        printf("\n 1) Legge di Boyle (Temperatura costante) ");
        printf("\n 2) Legge di Charles (Pressione costante) ");
        printf("\n 3) Legge di Gay-Lussac (Volume costante) ");
        printf("\n : ");
        scanf("%d",&legge);
        
        printf("le x vanno indicate come degli 0 (al posto delle virgole usa i . ) ");
        printf("\n ");
        printf("\n ");
    
    if(legge == 1)
    {
        read_data("\n dammi il P1 ", &P1);
        read_data("\n dammi il V1 ", &V1);
        read_data("\n dammi il P2 ", &P2);       
        read_data("\n dammi il V2 ", &V2);

         if (P1 == 0)
        {
        risplegge= (V2*P2)/V1;
       
        } 
        if (V1 == 0)
        {
        risplegge= (P2*V2)/P1;
        } 
        if (P2 == 0)
        {
        risplegge= (P1*V1)/V2;
        } 
        if (V2 == 0)
        {
        risplegge= (V1*P1)/P2;
        } 
         printf("L'incognita è %f",risplegge);
      
    }
    //legge di charles
    if (legge == 2)
    {
        read_data("\n dammi il T1 ", &T1);
        read_data("\n dammi il V1 ", &V1);
        read_data("\n dammi il T2 ", &T2);       
        read_data("\n dammi il V2 ", &V2);
        printf("le x vanno indicate come degli 0 (al posto delle virgole usa i . ) ");
        printf("\n ");
        printf("\n ");
        if (T1 == 0)
        {
        risplegge= (V1*T2)/V2;

        } 
        if (V1 == 0)
        {
        risplegge= (V2*T1)/T2;
       
        } 
        if (T2 == 0)
        {
        risplegge= (V2*T1)/V1;
      
        } 
        if (V2 == 0)
        {
        risplegge= (V1*T2)/T1;
       
        } 
        printf("L'incognita è %f",risplegge);
      }
// gay-lussac
    if (legge == 3) 
    {
        
        read_data("\n dammi il T1 ", &T1);
        read_data("\n dammi il P1 ", &P1);
        read_data("\n dammi il T2 ", &T2);       
        read_data("\n dammi il P2 ", &P2);

        if (P1 == 0)
        {
        risplegge= (T1*P2)/T2;
       
        } 
        if (T1 == 0)
        {
        risplegge= (P1*T2)/P2;
        } 
        if (P2 == 0)
        {
        risplegge= (P1*T2)/T1;
        } 
        if (T2 == 0)
        {
        risplegge= (P2*T1)/P1;
        } 
         printf("L'incognita è %f",risplegge);
        
    }

    }
    
    printf("\n");
    }
}
