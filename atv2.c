int main(){
	int x;
	int y;
	int z;
	//entrada
	printf("digite a velocidade do carro em km/h:");
	scanf("%d",&x);
	printf("digite a distancia a ser percorrida em km:");
	scanf("%d",&y);
	//processamento
	z = y / x;
	//saída
	printf("são %d h para percorrer a distancia",z);
	return 0;
}
