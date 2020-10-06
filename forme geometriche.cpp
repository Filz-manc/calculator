#include <stdio.h>
#include <stdlib.h>


int main (void)
{	
	//cono
	int raggio_base_cono;
	int altezza_cono;
	int apotema_cono;
	int circonferenza_base_cono;
	int area_base_cono;
	int area_laterale_cono;
	int area_totale_cono;
	int volume_cono;
	//parallelepipedo
	int altezza_parallelepipedo;
	int lato1_parallelepipedo;
	int lato2_parallelepipedo;
	int area_base_parallelepipedo;
	int area_totale_parallelepipedo;
	int area_laterale_parallelepipedo;
	int volume_parallelepipedo;
	int perimetro_base_parallelepipedo;
	//prisma a base quadrata
	int apotema_prisma;
	int altezza_prisma;
	int lato_base_prisma;
	int perimetro_base_prisma;
	int area_base_prisma;
	int area_laterale_prisma;
	int area_totale_prisma;
	int volume_prisma;
	//cubo
	int area_laterale_cubo;
	int lato_cubo;
	int area_base_cubo;
	int area_totale_cubo;
	int volume_cubo;
	int perimetro_base_cubo;
	//pentagono regolare
	int lato_pentagono;
	int apotema_pentagono;
	int perimetro_pentagono;
	int area_pentagono;
	//cerchio
	int  area_cerchio;
	int  circonferenza_cerchio;
	int  raggio_cerchio;
	//triangolo
	int altezza_triangolo;
	int lato_triangolo;
	int perimetro_triangolo;
	int area_triangolo;
	//rettangolo
	int altezza_rettangolo;
	int base_rettangolo;
	int perimetro_rettangolo;
	int area_rettangolo;
	//quadrato
	int quadrato;
	int lunghezza_lato;
	int perimetro_quadrato;
	int area_quadrato;

	

	printf("CALCOLATRICE GEOMETRICA ");
	printf("\nInserire solo numeri interi ");
	printf("\nCodici forme: 1 quadrato, 2 rettangolo, 3 triangolo, 4 cerchio, 5 pentagono regolare, 6 cubo, 7 parallelepipedo, 8 piramide a base quadrata ");
	printf("\nInserire il codice per la forma: ");
	scanf("%d",&quadrato);
	
	//quadrato
	if (quadrato==1)
	{
	printf("\nHai scelto: quadrato ");
	printf("\ninserire la lunghezza del lato: ");    	
    scanf("%d",&lunghezza_lato);
    perimetro_quadrato= lunghezza_lato* 4;
	area_quadrato= lunghezza_lato* lunghezza_lato;	
    printf("\nIl perimetro e': %d\n",perimetro_quadrato);
	printf("\nL'area e': %d\n",area_quadrato);
	}	
		
	//rettangolo
	if (quadrato==2)
	{
	printf("\nHai scelto: rettangolo ");
	printf("\ninserire la lunghezza della base: ");    	
    scanf("%d",&base_rettangolo);
	printf("\ninserire la lunghezza dell'altezza: ");
	scanf("%d",&altezza_rettangolo);
    perimetro_rettangolo= base_rettangolo+ base_rettangolo+ altezza_rettangolo+ altezza_rettangolo;
	area_rettangolo= base_rettangolo* altezza_rettangolo;
    printf("\nIl perimetro e': %d\n",perimetro_rettangolo);
	printf("\nL'area e': %d\n<",area_rettangolo);
	}
	
	//triangolo equilatero
	if (quadrato==3)
	{
	printf("\nHai scelto: triangolo equilatero ");
	printf("\ninserire la lunghezza del lato: ");    	
    scanf("%d",&lato_triangolo);
	printf("\ninserire la lunghezza dell'altezza: ");
	scanf("%d",&altezza_triangolo);
    perimetro_triangolo= lato_triangolo* 3;
	area_triangolo= lato_triangolo* altezza_triangolo/ 2;
	printf("\nIl perimetro e': %d\n",perimetro_triangolo);
	printf("\nL'area e': %d\n",area_triangolo);
	}  
	
	//cerchio
	if (quadrato==4)
	{
	printf("\nHai scelto: cerchio ");
	printf("\ninserire la lunghezza del raggio: ");    	
    scanf("%d",&raggio_cerchio);
    circonferenza_cerchio= raggio_cerchio* 314/ 100* 2;
	area_cerchio= raggio_cerchio* raggio_cerchio* 314/ 100;
	printf("\nLa circonferenza e' (approssimativamente) : %d\n",circonferenza_cerchio);
	printf("\nL'area e' (approssimativamente): %d\n",area_cerchio);
	}  
	
	//pentagono regolare
	if (quadrato==5)
	{
	printf("\nHai scelto: pentagono regolare ");
	printf("\ninserire la lunghezza del lato: ");    	
    scanf("%d",&lato_pentagono);
	printf("\ninserire la lunghezza dell'apotema: ");
	scanf("%d",&apotema_pentagono);
    perimetro_pentagono= lato_pentagono* 5;
	area_pentagono= lato_pentagono* apotema_pentagono/ 2;
	printf("\nIl perimetro e': %d\n",perimetro_pentagono);
	printf("\nL'area e': %d\n",area_pentagono);
	}
	
	//cubo
	if (quadrato==6)
	{
	printf("\nHai scelto: cubo ");
	printf("\ninserire la lunghezza del lato: ");    	
    scanf("%d",&lato_cubo);
    area_base_cubo= lato_cubo* lato_cubo;
	perimetro_base_cubo= lato_cubo* 4;
	area_totale_cubo= area_base_cubo* 6;
	area_laterale_cubo= area_base_cubo* 4;
	volume_cubo= lato_cubo* lato_cubo* lato_cubo;
	printf("\nIl perimetro di base e': %d\n",perimetro_base_cubo);
	printf("\nL'area di base e': %d\n",area_base_cubo);
	printf("\nL'area totale e': %d\n",area_totale_cubo);
	printf("\nl'area laterale e': %d\n",area_laterale_cubo);
	printf("\nIl volume e': %d\n",volume_cubo);
	}
	
	//parallelepipedo
	if (quadrato==7)
	{
	printf("\nHai scelto: parallelepipedo ");
	printf("\ninserire la larghezza della base: ");
	scanf("%d",&lato1_parallelepipedo);
	printf("\ninserire la profondita' della base: ");
	scanf("%d",&lato2_parallelepipedo);
	printf("\ninserire la altezza: ");
	scanf("%d",&altezza_parallelepipedo);
	area_base_parallelepipedo= lato1_parallelepipedo* lato2_parallelepipedo;
	area_totale_parallelepipedo= lato1_parallelepipedo* lato2_parallelepipedo*2 +lato2_parallelepipedo* altezza_parallelepipedo*2+ lato1_parallelepipedo*altezza_parallelepipedo*2;
	area_laterale_parallelepipedo= lato1_parallelepipedo* altezza_parallelepipedo* 2+ lato2_parallelepipedo* altezza_parallelepipedo*2;
	volume_parallelepipedo= lato1_parallelepipedo* lato2_parallelepipedo* altezza_parallelepipedo;
	perimetro_base_parallelepipedo= lato1_parallelepipedo* 2+ lato2_parallelepipedo* 2;
	printf("\nIl perimetro di base e': %d\n",perimetro_base_parallelepipedo);
	printf("\nL'area di base e': %d\n",area_base_parallelepipedo);
	printf("\nL'area laterale e': %d\n",area_laterale_parallelepipedo);
	printf("\nL'area totale e': %d\n",area_totale_parallelepipedo);
	printf("\nIl volume e': %d\n",volume_parallelepipedo);
	}
	
	//prisma a base quadrata
	if (quadrato==8)
	{
	printf("\nHai scelto: prisma a base quadrata ");
	printf("\ninserire la lunghezza del lato di base: ");
	scanf("%d",&lato_base_prisma);
	printf("\ninserire la lunghezza dell'altezza: ");    	
    scanf("%d",&altezza_prisma);
    printf("\ninserire la lunghezza dell'apotema: ");
	scanf("%d",&apotema_prisma);
	area_base_prisma= lato_base_prisma* lato_base_prisma;
	perimetro_base_prisma= lato_base_prisma* 4;
	area_totale_prisma= perimetro_base_prisma* apotema_prisma+ area_base_prisma;
	volume_prisma= area_base_prisma* altezza_prisma/ 2;
	area_laterale_prisma= perimetro_base_prisma* apotema_prisma;
	printf("\nIl perimetro di base e': %d\n",perimetro_base_prisma);
	printf("\nL'area di base e': %d\n",area_base_prisma);
	printf("\nL'area laterale e': %d\n",area_laterale_prisma);
	printf("\nL'area totale e': %d\n",area_totale_prisma);
	printf("\nIl volume e': %d\n",volume_prisma);
	}	
	
	system("pause");

}
