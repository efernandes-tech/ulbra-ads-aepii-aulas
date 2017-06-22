// ===== Funcao para validar datas =====
// Parametros: dia, mes, ano
//			   todos do tipo inteiro
// Retorno: 0 ou 1 (tipo inteiro)
//			0 quando a data for invalida
// 			1 quando a data for valida
//======================================
int valida_data(int d, int m, int a) {
	int eh_valida;

	if(a > 0)
		if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d>=1 && d<=31)
			eh_valida=1; // data correta
		else
			if((m==4 || m==6 || m==9 || m==11) && d>=1 && d<=30)
				eh_valida=1; // data correta
			else
				if(m==2 && d>=1 && d<=28)
					eh_valida=1; // data correta
				else
					if(m==2 && a%4==0 && d>=1 && d<=29)
						eh_valida=1; // data correta
					else
						eh_valida=0; // data incorreta
	else
		eh_valida=0; // data incorreta

	return eh_valida;
}

// ====================== Funcao para desenhar bordas ======================
// Parametros: coluna inicial, coluna final, linha inicial, linha final, cor
//			   todos do tipo inteiro
// Retorno: sem retorno
//==========================================================================
void desenha_bordas(int ci, int cf, int li, int lf, int cor) {
	int c,l;
	
	textcolor(cor);
	
	for(c=ci;c<cf;c++) {
		gotoxy(c,li); printf("%c",205); // imprime o caracter 205 da tabela ascii
		gotoxy(c,lf); printf("%c",205);
	}
	
	for(l=li;l<lf;l++) {
		gotoxy(ci,l); printf("%c",186); // imprime o caracter 205 da tabela ascii
		gotoxy(cf,l); printf("%c",186);
	}
	
	gotoxy(ci,li); printf("%c",201); // canto superior esquerdo
	gotoxy(cf,li); printf("%c",187); // canto superior direito
	gotoxy(ci,lf); printf("%c",200); // canto inferior esquerdo
	gotoxy(cf,lf); printf("%c",188); // canto inferior direito
	
	textcolor(15);
}
