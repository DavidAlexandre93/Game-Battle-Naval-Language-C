#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	int linha,coluna;
	int jog1,jog2;
	int jogcol,joglin;
	int jog2col,jog2lin, tentativa;
	
	
	//ESTRUTURA DO PRIMEIRO JOGADOR
	printf("Jogador 1 \n\n");
	printf("linha de localizacao:");
	scanf("%d",&joglin);
	
	printf("coluna de localizacao:");
	scanf("%d",&jogcol);
	
	
    for(linha=1;linha<=5;linha++){
    	for(coluna=1;coluna<=10;coluna++){			
			if(linha==joglin && coluna==jogcol){
				printf("B");
			}else{
		   		printf("~");
		  	}  
    		
    	}
    	
    	printf("\n");
	}
	system("cls");
	
	//ESTRUTURA DO SEGUNDO JOGADOR
	for(tentativa=1;tentativa<= 3;tentativa++)	{
		
	    printf("Jogador 2 \n\n tentativa: %d\n\n",tentativa);
		printf("linha de localizacao:");
		scanf("%d",&jog2lin);
		
		printf("coluna de localizacao:");
		scanf("%d",&jog2col);
		
		for(linha=1;linha<=5;linha++){
			for(coluna=1;coluna<=10;coluna++){			
				if(linha==jog2lin && coluna==jog2col){		
					if(jog2lin == joglin && jog2col == jogcol){
						printf("B");	
					}else{
						printf("#");	
					}
				}else{
			   		printf("~");
			  	}
			}
		    printf("\n");
		}    
	    if(jog2lin == joglin && jog2col == jogcol){
			printf("Voce ganhou!\n\n");
			break;
		}
	
	//DICAS PARA O JOGO
	if(tentativa==2&&joglin==1&&jogcol==2 || joglin==2&&jogcol==4){
		
		printf("Mais para cima \n\n");
		
	}else{
		
	tentativa==3&&joglin==3&&jogcol==5 || joglin==4&&jogcol==7 || joglin==5&&jogcol==9;
		
		printf("Mais para baixo \n\n");
		
	}
		
	
}
	// MENSAGEM FINAL DO GAME
	system("cls");	
		
	if(tentativa==4){
		
	printf("INFELIZMENTE VOCE PERDEU \n\n");
	
    }else{
    	
    	printf("Obrigado por jogar");
	}

   system("pause");


}
