// Definição de variáveis globais.
int ledAmarelo1 = 9;
int ledVermelho = 10;
int ledAmarelo2 = 11;

int brilho = 0;
int brilhoFixo = 136;
int brilhoAleatorio = 120;

int miliSegundos = 101;

// Configuração dos pinos de saída.
void setup(){
	pinMode(ledAmarelo1, OUTPUT);
	pinMode(ledVermelho, OUTPUT);
	pinMode(ledAmarelo2, OUTPUT);
}

// Função que define o brilho do LED aleatóriamente entre 136 e 255.
int brilhoLed(int brilhoFixo, int brilhoAleatorio){
	brilho = brilhoFixo + random(brilhoAleatorio);
	
	return brilho;
}

// Repete-se consecutivamente enquanto a placa estiver ligada.
void loop(){
	analogWrite(ledAmarelo1, brilhoLed(brilhoFixo, brilhoAleatorio));
	analogWrite(ledVermelho, brilhoLed(brilhoFixo, brilhoAleatorio));
	analogWrite(ledAmarelo2, brilhoLed(brilhoFixo, brilhoAleatorio));
	
	delay(random(miliSegundos));
}