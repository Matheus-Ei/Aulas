#include <bits/stdc++.h>

void get_hour(int *point, int *point_day) {
    int ano1, ano2, mes1, mes2, dia1, dia2, data1, data2, dif;
    printf("Passe um Input no Seguinte Formato --> Ano Mes Dia")
    scanf("%d %d %d", &ano1, &mes1, &dia1);
    scanf("%d %d %d", &ano2, &mes2, &dia2);
    
    data1 = (ano1*365*24) + (mes1*30*24) + (dia1*24);
    data2 = (ano2*365*24) + (mes2*30*24) + (dia2*24);
    
    if(data2>data1){
        dif = data2-data1;
    }
    else{
        dif = data1-data2;
    }
    
    *point = dif;
    *point_day = (dif/24);
}

int main(){
    int var, var_day;
    get_hour(&var, &var_day);
    
    printf("Horas: %d \n", var);
    printf("Dias: %d", var_day);
    return 0;
}
