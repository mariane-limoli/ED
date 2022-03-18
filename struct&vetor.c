#include<stdio.h>

struct horario
    {
        int hora;
        int min;
        int seg;
    };

int main(void){ //Estrutura de dados

    void LeStruct(struct horario x[2]);
    void RetStruct(struct horario x[2]);
    void AltTime(struct horario x[2]);

    struct horario time[2];

    LeStruct(time);
    RetStruct(time);

    AltTime(time);
}

 void LeStruct(struct horario x[2]){ //algoritmo

    for(int i=0; i<2;i++)
    {
        printf("Digite o horario [%i]: ", i+1);
        scanf("%i:%i:%i", &x[i].hora,
                          &x[i].min,
                          &x[i].seg);
    }

 }

void RetStruct(struct horario x[2]){

    for(int i=0; i<2;i++)
    {
        printf("O horario [%i]: %i:%i:%i \n",i+1,
                                             x[i].hora,
                                             x[i].min,
                                             x[i].seg);
    }
};

void AltTime(struct horario x[2]){

    for(int i=0; i<2;i++)
    {
        printf("Adicionando 3h no horario %i -> %i:%i:%i\n", i+1,
                                                          x[i].hora+3,
                                                          x[i].min,
                                                          x[i].seg);
    }


};
