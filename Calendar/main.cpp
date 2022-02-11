#include <iostream>

using namespace std;


/* This functions returns the days of the month*/

 int getMonthDays (int ano, int mes){

   if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        return 31;
   }else if(mes == 2){
        if ((ano%4==0)&&(ano%100!=0)||(ano%400==0)){return 29;
        }else return 28;
   }
   return 30;
 }


/* Zeller function to get the first day of the month*/

int zeller (int ano, int mes){

    int a = (14 - mes) / 12;
    int y = ano - a;
    int m = mes + 12 * a - 2;
    int zel = (1 + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;

    if (zel == 0){zel = 6;
    }else zel --;

    return zel;
}


/* Prints the calendar*/

void printFecha (int mes, int ano){

    int z = zeller(ano, mes);
    int diasMes = getMonthDays(ano, mes);

    if (mes==1){printf("ENERO     ");
    }else if(mes==2){printf("FEBRERO   ");
    }else if(mes==3){printf("MARZO     ");
    }else if(mes==4){printf("ABRIL     ");
    }else if(mes==5){printf("MAYO      ");
    }else if(mes==6){printf("JUNIO     ");
    }else if(mes==7){printf("JULIO     ");
    }else if(mes==8){printf("AGOSTO    ");
    }else if(mes==9){printf("SEPTIEMBRE");
    }else if(mes==10){printf("OCTUBRE   ");
    }else if(mes==11){printf("NOVIEMBRE ");
    }else if(mes==12)printf("DICIEMBRE ");


    printf("             %d\n", ano);
    printf("===========================\n");
    printf("LU  MA  MI  JU  VI | SA  DO\n");
    printf("===========================\n");

    for(int i = 0; i < z; i++){
        if( i % 7 == 4){printf (" . | ");
        }else if( i % 7 == 5){printf (" .  ");
        }else printf(" .  ");
    }

    for (int i=1; i<=diasMes; i++){

        printf("%2d ",i);
        z ++;

        if(z % 7 == 0) printf("\n");
        if(z % 7 == 5 ) printf ("| ");
        if(z % 7 != 0 && z % 7 != 5 ) printf (" ");
    }

    if ( z % 7 == 1){printf(" .   .   .   . |  .   .");
    }else if(z % 7 ==2){printf(" .   .   . |  .   .");
    }else if(z % 7 ==3){printf(" .   . |  .   .");
    }else if(z % 7 ==4){printf(" . |  .   .");
    }else if(z % 7 ==5){printf(" .   .");
    }else if(z % 7 ==6)printf(" .");

}


int main(){

    int mes, ano;

    cout<< "Select month (1...12): ", cin>>mes;
    cout<< "Select year (1601...3000): ", cin>>ano;
    cout<<endl;

    if(((mes>=1)&&(mes<=12))&&((ano>=1601)&&(ano<=3000))){printFecha(mes, ano);
    }else cout<< "Wrong input!"<<endl;

}
