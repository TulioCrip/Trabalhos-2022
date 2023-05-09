#include <stdio.h>
#include <stdlib.h>

main(void){
	int codigoPagto;
	float valorCompra;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valorCompra);
	printf("Digite o codigo do pagamento: ");
	scanf("%f", &codigoPagto);
	
		if (codigoPagto = 1){
			valorCompra = valorCompra - (valorCompra *0.05);
	}
	printf("Valor da compra: R$ %4.2f", valorCompra);
}