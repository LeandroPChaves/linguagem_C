# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

int main(void)
{
    
    candidate candidates[3];

    candidates[0].name = "Alice";
    candidates[0].votes = 0;

    candidates[1].name = "Bob";
    candidates[1].votes = 0;
    
    candidates[2].name = "Charlie";
    candidates[2].votes = 0;
    
    int eleitores = get_int("Digite a quantidade de eleitores: ");
    int voto;
    int votovencedor = -1;
    string nomevencedor;

    while (eleitores > 9 || eleitores < 1 ){
    eleitores = get_int("Informe a quantidade de eleitores entre 1 a 9.");
    }
    
    for (int i = 0; i < eleitores; i++){
       voto = get_int ("Digite: 1 para votar em Alice, 2 para votar em Bob ou 3 para votar em Charlie. ");
       
       while (voto != 1 && voto != 2 && voto !=3){
         voto = get_int("Voto inválido, digite: 1 para votar em Alice, 2 para votar em Bob ou 3 para votar em Charlie. ");
       }
     
         if (voto == 1){
             candidates[voto - 1].votes++;
         } 
         else if (voto == 2){
            candidates[voto - 1].votes++;
         }
           else {
           candidates[voto - 1].votes++;
         }
    }
    
     if   (candidates[0].votes == candidates[1].votes && candidates[0].votes == candidates[2].votes && candidates[1].votes == candidates[2].votes) {
           printf ("Houve empate entre todos os candidatos\n");
           return 1;
     }

     for (int i = 0; i < 3; i++){
         
       if (candidates[i].votes > votovencedor){
          votovencedor = candidates[i].votes;
          nomevencedor = candidates[i].name;
       }
       
      else if (candidates[i].votes == votovencedor ){
          printf ("Houve igualdade entre 2 candidatos");
          return 1;
      }
       
     }
   
   printf ("%i é o total de votos do vencedor \n ", votovencedor);
   printf ("%s é o nome do(a) vencedor(a). \n ", nomevencedor);
   
}








// # include <stdio.h>
// # include <cs50.h>
// # include <string.h>

// typedef struct
// {
//     string name;
//     int votes;
// }
// candidate;

// int main(void)
// {
//     int eleitores = get_int("Digite a quantidade de eleitores: ");
//     const string CANDIDATO1 = "Alice";
//     const string CANDIDATO2 = "Bob";
//     const string CANDIDATO3 = "Charlie";
//     int votosAlice = 0;
//     int votosBob = 0;
//     int votosCharlie = 0;
//     int voto;
    
//     while (eleitores > 9 || eleitores < 1 ){
//     eleitores = get_int("Informe a quantidade de eleitores entre 1 a 9.");
//     }
    
//     for (int i = 0; i < eleitores; i++){
//     voto = get_int ("Digite: 1 para votar em Alice, 2 para votar em Bob ou 3 para votar em Charlie. ");

//     while (voto != 1 && voto != 2 && voto !=3){
//         voto = get_int("Voto inválido, digite: 1 para votar em Alice, 2 para votar em Bob ou 3 para votar em Charlie");
//     }                        
                            
//     if (voto == 1){
//         votosAlice++;
//     } 
//     else if (voto == 2){
//         votosBob++;
//     } 
//     else {
//       votosCharlie++;
//     }
// }

// if (votosAlice > votosBob && votosAlice > votosCharlie){
//     printf("O (a) canditado vitorioso é: Alice");
// }  
// else if (votosBob > votosAlice && votosBob > votosCharlie){
//      printf("O (a) canditado vitorioso é: Bob");
// } 
// else if (votosCharlie > votosAlice && votosCharlie > votosBob){
//      printf("O (a) canditado vitorioso é: Charlie");
// }  
// else {
//     printf ("Houve empate");
// }
// }