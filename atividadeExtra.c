#include <stdio.h>
#include <locale.h>

void selectionSort(int vet[], int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[5] = {9,8,7,6,5}, vet1[5] = {8,6,5,4,3}, vet2[5] = {5,4,3,2,1};
	int op, i;
	
	
	
	do{
		printf("Informe o metodo de Ordenação: \n");
	    printf("1-Selection Sort\n2-Bubble Sort\n3-Insertion Sort\n4-Sair\n\nOPIÇÃO: ");
	    scanf("%d", &op);
	
		switch(op){
		    case 1:
		    	/* int vet[5] = {9,8,7,6,5} */
			    printf("\nVetor desordenado:\n");
			    for(i=0; i<5; i++){
		            printf("%d ", vet[i]);
	            }
			    printf("\n\n");
			
			    selectionSort(vet, 5);
			
			    printf("Vetor ordenado:\n");
	
	            for(i=0; i<5; i++){
		            printf("%d ", vet[i]);
	            }
	
	            printf("\n");
	            printf("\n\n\n");
	            printf("Pressione qualquer tecla para sair...\n");
	            getch();
	            system("cls");
			    break;
			
		    case 2:
		    	/* int vet1[5] = {8,6,5,4,3} */
		    	
			    printf("\nVetor desordenado:\n");
			    for(i=0; i<5; i++){
		            printf("%d ", vet1[i]);
	            }
			    printf("\n\n");
			
			    bubbleSort(vet1, 5);
			
			    printf("Vetor ordenado:\n");
	
	            for(i=0; i<5; i++){
		            printf("%d ", vet1[i]);
	            }
	
	            printf("\n");
	            printf("\n\n\n");
	            printf("Pressione qualquer tecla para sair...\n");
	            getch();
	            system("cls");
			    break;
			
		    case 3: 
		    	/* int vet2[5] = {5,4,3,2,1} */
		    	
			    printf("\nVetor desordenado:\n");
			    for(i=0; i<5; i++){
		            printf("%d ", vet2[i]);
	            }
			    printf("\n\n");
			
			    insertionSort(vet2, 5);
			
			    printf("Vetor ordenado:\n");
	
	            for(i=0; i<5; i++){
		            printf("%d ", vet2[i]);
	            }
	
	            printf("\n");
	            printf("\n\n\n");
	            printf("Pressione qualquer tecla para sair...\n");
	            getch();	            
	            system("cls");
			    break;
			   
			case 4:
		    	printf("\n\n\n\n");
		    	printf("            ¦¦¦¦¦¦¦ ¦¦ ¦¦¦    ¦¦  ¦¦¦¦¦  ¦¦      ¦¦ ¦¦¦¦¦¦¦  ¦¦¦¦¦  ¦¦¦    ¦¦ ¦¦¦¦¦¦   ¦¦¦¦¦¦ \n");
                printf("            ¦¦      ¦¦ ¦¦¦¦   ¦¦ ¦¦   ¦¦ ¦¦      ¦¦    ¦¦¦  ¦¦   ¦¦ ¦¦¦¦   ¦¦ ¦¦   ¦¦ ¦¦    ¦¦\n");
                printf("            ¦¦¦¦¦   ¦¦ ¦¦ ¦¦  ¦¦ ¦¦¦¦¦¦¦ ¦¦      ¦¦   ¦¦¦   ¦¦¦¦¦¦¦ ¦¦ ¦¦  ¦¦ ¦¦   ¦¦ ¦¦    ¦¦\n");
                printf("            ¦¦      ¦¦ ¦¦  ¦¦ ¦¦ ¦¦   ¦¦ ¦¦      ¦¦  ¦¦¦    ¦¦   ¦¦ ¦¦  ¦¦ ¦¦ ¦¦   ¦¦ ¦¦    ¦¦\n");
                printf("            ¦¦      ¦¦ ¦¦   ¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦ ¦¦¦¦¦¦¦ ¦¦   ¦¦ ¦¦   ¦¦¦¦ ¦¦¦¦¦¦   ¦¦¦¦¦¦\n");
                printf("            +-+     +-++-+  +---++-+  +-++------++-++------++-+  +-++-+  +---++-----+  +-----+ \n"); 
			    break;
			    
		    default:
			    printf("Opção inválida.\n");
			    printf("\n\n\n");
	            printf("Pressione qualquer tecla para sair...\n");
	            getch();
	    }
	}while(op != 4);
	
	
}

/*Procedimento usado para o método Selection Sort */
void selectionSort(int vet[], int n){
	int i, y, tmp;
	/*a variável 'tmp' foi usada para armazenar os valores para a troca 
	as variaveis 'Y' e 'I' foram usadas para percorer os índices do vetor
	
	1 loop: percorre cada posição do vetor, exceto a útima.*/
	for(i=0; i<n-1; i++){
		/*2 loop percorre os elementos à direita de I*/
		for(y=i+1; y<n; y++){
			/*verifica se o elemento na posição y é menor do que o da posição I
			se sim e realizado a troca para alocar o menor valor na posição I*/
			if(vet[y]< vet[i]){
				tmp = vet[i];
				vet[i] = vet[y];
				vet[y] = tmp;
			}
		}
	}
}

/*Procedimento usado para o método Bubble Sort*/
void bubbleSort(int vet1[], int n){
	int i, y, tmp;
	/*a variável 'tmp' foi usada para armazenar os valores para a troca 
	as variaveis 'Y' e 'I' foram usadas para percorer os índices do vetor*/
	
	/*1 loop: percorre cada posição do vetor, exceto a útima.*/
	for(i=0; i<n-1; i++){
		/*2 Loop  percorre o vetor comparando elementos adjacentes.
		 O limite 'n-i-1' reduz a área a ser verificada, pois os maiores valores já
        estão posicionados corretamente no final após cada iteração.*/
		for(y=0; y< n-i-1; y++){
			/*Verifica qual elemento é maior e vai jogando para o final do vetor */
			if(vet1[y]> vet1[y+1]){
				tmp = vet1[y];
				vet1[y] = vet1[y+1];
				vet1[y+1] = tmp;
			}
		}
	}
}

/*Procedimento usado para o método Insertion Sort*/
void insertionSort(int vet2[], int n){
	int y, i, tmp;
	/*a variável 'tmp' foi usada para armazenar os valores para a troca 
	 'i' é usada para controlar a posição atual do elemento a ser inserido.
     'y' é usada para percorrer o vetor para comparar e reposicionar os elementos.*/
    
    /*1 Loop percorre cada elemento do vetor a partir do segundo elemento.*/
	for(i=1; i < n; i++){
		/* 'y' é inicializado como o índice atual do elemento que será inserido.*/
		y=i;
		
		/*2 Loop move o elemento 'vet2[y]' para sua posição correta na parte ordenada do vetor.*/
		while(y > 0 && vet2[y] < vet2[y-1]){
			tmp = vet2[y];
			vet2[y] = vet2[y-1];
			vet2[y-1] = tmp;
			/* Atualiza o índice 'y' para continuar comparando com os elementos anteriores.*/
			y--;
			
		}
	}
}
