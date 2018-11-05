/*
 * HC595.c
 *
 * Created: 30-Oct-18 12:55:39 PM
 *  Author: Hao
 */ 

#include "HC595.h"


#define Size_Of_String	5		

#define Num_Row_String	Size_Of_String*6


/*****************************************/

uint8_t a[6]={0b00000010  , 0b00010101  , 0b00010101  , 0b00010101  , 0b00001111 , 0 };
uint8_t b[6]={0b01111111  , 0b00001001  , 0b00010001  , 0b00010001  , 0b00001110 , 0 };
uint8_t c[6]={0b00001110  , 0b00010001  , 0b00010001  , 0b00010001  , 0b00000010 , 0 };
uint8_t d[6]={0b00001110  , 0b00010001  , 0b00010001  , 0b00001001  , 0b01111111 , 0 };
uint8_t e[6]={0b00001110  , 0b00010101  , 0b00010101  , 0b00010101  , 0b00001100 , 0 };
uint8_t f[6]={0b00001000  , 0b00111111  , 0b01001000  , 0b01000000  , 0b00100000 , 0 };
uint8_t g[6]={0b00001000  , 0b00010101  , 0b00010101  , 0b00010101  , 0b00011110 , 0 };
uint8_t h[6]={0b01111111  , 0b00001000  , 0b00010000  , 0b00010000  , 0b00001111 , 0 };
uint8_t ii[6]={0  , 0b00001001  , 0b01011111  , 0b00000001  , 0 , 0 };
uint8_t j[6]={0b00000010  , 0b00000001  , 0b00010001  , 0b01011110  , 0 , 0 };
uint8_t k[6]={0  , 0b01111111  , 0b00000100  , 0b00001010  , 0b00010001 , 0 };
uint8_t l[6]={0  , 0b01000001  , 0b01111111  , 0b00000001  , 0 , 0 };
uint8_t m[6]={0b00011111  , 0b00010000  , 0b00001111  , 0b00010000  , 0b00001111 , 0 };
uint8_t n[6]={0b00011111  , 0b00001000  , 0b00010000  , 0b00010000  , 0b00001111 , 0 };
uint8_t o[6]={0b00001110  , 0b00001001  , 0b00001001  , 0b00001001  , 0b00001110 , 0 };
uint8_t p[6]={0b00011111  , 0b00010100  , 0b00010100  , 0b00010100  , 0b00001000 , 0 };
uint8_t q[6]={0b00001000  , 0b00010100  , 0b00010100  , 0b00010100  , 0b00011111 , 0 };
uint8_t r[6]={0  , 0b00011111  , 0b00001000  , 0b00010000  , 0b00010000 , 0 };
uint8_t s[6]={0b00001001  , 0b00010101  , 0b00010101  , 0b00010101  , 0b00010010 , 0 };
uint8_t t[6]={0  , 0b00010000  , 0b00111110  , 0b00010001  , 0b00000010 , 0 };
uint8_t u[6]={0b00011110  , 0b00000001  , 0b00000001  , 0b00000010  , 0b00011111 , 0 };
uint8_t v[6]={0b00011100  , 0b00000010  , 0b00000001  , 0b00000010  , 0b00011100 , 0 };
uint8_t w[6]={0b00011110  , 0b00000001  , 0b00000110  , 0b00000001  , 0b00011110 , 0 };
uint8_t x[6]={0b00010001  , 0b00010010  , 0b00001110  , 0b00001001  , 0b00010001 , 0 };
uint8_t y[6]={0b00010001  , 0b00001001  , 0b00000110  , 0b00000100  , 0b00011000 , 0 };
uint8_t z[6]={0b00010001  , 0b00010011  , 0b00010101  , 0b00011001  , 0b00010001 , 0 };

uint8_t Rong[6]={0 , 0 , 0 , 0 , 0, 0};

uint8_t Mot[6]={0b00010001  , 0b00100001  , 0b01111111  , 0b00000001  , 0b00000001 , 0 };
uint8_t Hai[6]={0b00100001  , 0b01000011  , 0b01000101  , 0b01001001  , 0b00110001 , 0 };
uint8_t Ba[6]={0b00100010  , 0b01000001  , 0b01001001  , 0b01001001  , 0b00110110 , 0 };
uint8_t Bon[6]={0b00001100  , 0b00010100  , 0b00100100  , 0b01111111  , 0b00000100 , 0 };
uint8_t Nam[6]={0b01110010  , 0b01010001  , 0b01010001  , 0b01010001  , 0b01001110 , 0 };
uint8_t Sau[6]={0b00111110  , 0b01001001  , 0b01001001  , 0b01001001  , 0b00100110 , 0 };
uint8_t Bay[6]={0b01000000  , 0b01000111  , 0b01001000  , 0b01010000  , 0b01100000 , 0 };
uint8_t Tam[6]={0b00110110  , 0b01001001  , 0b01001001  , 0b01001001  , 0b00110110 , 0 };
uint8_t Chin[6]={0b00110010  , 0b01001001  , 0b01001001  , 0b01001001  , 0b00111110 , 0 };
uint8_t Khong[6]={0b00111110  , 0b01000101  , 0b01001001  , 0b01010001  , 0b00111110 , 0 };


uint8_t HaiCham[6]={0  , 0  , 0b00010100  , 0  , 0 , 0 };
uint8_t Xuyet[6] ={2,4,8,16,32,0};
uint8_t GachNgang[6] ={8,8,8,8,8,0};

uint8_t A[6]={0b00011111  , 0b00100100  , 0b01000100  , 0b01000100  , 0b01111111 , 0 };
uint8_t B[6]={0b01111111  , 0b01001001  , 0b01001001  , 0b01001001  , 0b00110110 , 0 };
uint8_t C[6]={0b00111110  , 0b01000001  , 0b01000001  , 0b01000001  , 0b00100010 , 0 };
uint8_t D[6]={0b01111111  , 0b01000001  , 0b01000001  , 0b01000001  , 0b00111110 , 0 };
uint8_t E[6]={0b01111111  , 0b01001001  , 0b01001001  , 0b01001001  , 0b01000001 , 0 };
uint8_t F[6]={0b01111111  , 0b01001000  , 0b01001000  , 0b01001000  , 0b01000000 , 0 };
uint8_t G[6]={0b00111110  , 0b01000001  , 0b01000001  , 0b01000101  , 0b00100110 , 0 };
uint8_t H[6]={0b01111111  , 0b00001000  , 0b00001000  , 0b00001000  , 0b01111111 , 0 };
uint8_t I[6]={0b00000000  , 0b01000001  , 0b01111111  , 0b01000001  , 0b00000000 , 0 };
uint8_t J[6]={0b00000000  , 0b00000010  , 0b01000001  , 0b01000001  , 0b01111110 , 0 };
uint8_t K[6]={0b01111111  , 0b00001000  , 0b00010100  , 0b00100010  , 0b01000001 , 0 };
uint8_t L[6]={0b01111111  , 0b00000001  , 0b00000001  , 0b00000001  , 0b00000001 , 0 };
uint8_t M[6]={0b01111111  , 0b00100000  , 0b00011000  , 0b00100000  , 0b01111111 , 0 };
uint8_t N[6]={0b01111111  , 0b00010000  , 0b00001000  , 0b00000100  , 0b01111111 , 0 };
uint8_t O[6]={0b00111110  , 0b01000001  , 0b01000001  , 0b01000001  , 0b00111110 , 0 };
uint8_t P[6]={0b01111111  , 0b01001000  , 0b01001000  , 0b01001000  , 0b00110000 , 0 };
uint8_t Q[6]={0b00111100  , 0b01000010  , 0b01000010  , 0b01000010  , 0b00111101 , 0 };
uint8_t R[6]={0b01111111  , 0b01001000  , 0b01001100  , 0b01001010  , 0b00110001 , 0 };
uint8_t S[6]={0b00110010  , 0b01001001  , 0b01001001  , 0b01001001  , 0b00100110 , 0 };
uint8_t T[6]={0b01000000  , 0b01000000  , 0b01111111  , 0b01000000  , 0b01000000 , 0 };
uint8_t U[6]={0b01111110  , 0b00000001  , 0b00000001  , 0b00000001  , 0b01111110 , 0 };
uint8_t V[6]={0b01111100  , 0b00000010  , 0b00000001  , 0b00000010  , 0b01111100 , 0 };
uint8_t W[6]={0b01111110  , 0b00000001  , 0b00000110  , 0b00000001  , 0b01111110 , 0 };
uint8_t X[6]={0b01100011  , 0b00010100  , 0b00001000  , 0b00010100  , 0b01100011 , 0 };
uint8_t Y[6]={0b01110000  , 0b00001000  , 0b00001111  , 0b00001000  , 0b01110000 , 0 };
uint8_t Z[6]={0b01000011  , 0b01000101  , 0b01001001  , 0b01010001  , 0b01000011 , 0 };


void HC595_Init(void){
	sbi(DDR_595_R,SHCP_R);
	sbi(DDR_595_R,DS_R);
	sbi(DDR_595_R,RST_R);
	
	sbi(DDR_595_C,SHCP_C);
	sbi(DDR_595_C,DS_C);
	sbi(DDR_595_C,RST_C);
	
	sbi(DDR_595_R,STCP);
	cbi(PORT_595_R,STCP);
		
	cbi(PORT_595_R,SHCP_R);
	cbi(PORT_595_R,DS_R);
	sbi(PORT_595_R,RST_R);
	
	cbi(PORT_595_C,SHCP_C);
	cbi(PORT_595_C,DS_C);
	sbi(PORT_595_C,RST_C);
}

void Shift_Bit_C(uint8_t Bit){
	if(!Bit){
		sbi ( PORT_595_C , DS_C );
	} 
	else {
		cbi ( PORT_595_C , DS_C );
	}
	sbi ( PORT_595_C , SHCP_C );
	cbi ( PORT_595_C , SHCP_C );
}
void Shift_Bit_R(uint8_t Bit){
	if(Bit){
		sbi ( PORT_595_R , DS_R );
	} 
	else {
		cbi ( PORT_595_R , DS_R );
	}
	sbi ( PORT_595_R , SHCP_R );
	cbi ( PORT_595_R , SHCP_R );
}


void HC595_Output(){
	sbi(PORT_595_R,STCP);
	cbi(PORT_595_R,STCP);
}

void HC595_Reset_C(){
	cbi(PORT_595_C,RST_C);
	sbi(PORT_595_C,RST_C);
}
void HC595_Reset_R(){
	cbi(PORT_595_R,RST_R);
	sbi(PORT_595_R,RST_R);
}
void HC595_Reset_All(){
	HC595_Reset_C();
	HC595_Reset_R();
	HC595_Output();
}
uint8_t Check_Bit(uint8_t Data, uint8_t Addr){
	uint8_t Temp = Data << (7-Addr);
	Temp = Temp >> 7;
	return Temp;
}
void Shift_Data_C(uint8_t Data ){
	for(int i=0; i<8; i++){
		Shift_Bit_C( Check_Bit ( Data,i ) );
	}
}
void Shift_Data_R(uint8_t Data){
	for(int i=0; i<8; i++){
		Shift_Bit_R( Check_Bit ( Data,i ) );
	}
}
void Output_Data(uint8_t Payload[]){
	HC595_Reset_All();
	uint8_t Stt= 1;
	for(int i=0; i< Num_Row; i++){
		if(Stt == 1){
			Shift_Bit_R(1);
			Shift_Data_C(Payload[i]);
			HC595_Output();
			_delay_us(Time_Delay);
			Stt= 0;
		}
		else{
			Shift_Bit_R(0);
			Shift_Data_C(Payload[i]);
			HC595_Output();
			_delay_us(Time_Delay);
		}
	}
}

//void Shift_Data(uint8_t Payload[]){
	//for(int i=0; i<2;i++){
		//Shift_Data_C(Payload[i]);
		//HC595_Output();
		//_delay_us(Time_Delay);
	//}
//}

void Add( uint8_t Char[6] ,uint8_t Payload[], uint8_t Addr){
	for (int i=0; i<6;i++){
		Payload[Addr+i]= Char[i];
	}
}

void Load_Data(char Data [], uint8_t Payload[]){
	for(int i=0; i<Size_Of_String; i++){
		switch (Data[i]){
			case 'A': Add(A,Payload,6*i); break;
			case 'B': Add(B,Payload,6*i); break;
			case 'C': Add(C,Payload,6*i); break;
			case 'D': Add(D,Payload,6*i); break;
			case 'E': Add(E,Payload,6*i); break;
			case 'F': Add(F,Payload,6*i); break;
			case 'G': Add(G,Payload,6*i); break;
			case 'H': Add(H,Payload,6*i); break;
			case 'I': Add(I,Payload,6*i); break;			
			case 'J': Add(J,Payload,6*i); break;
			case 'K': Add(K,Payload,6*i); break;
			case 'L': Add(L,Payload,6*i); break;
			case 'M': Add(M,Payload,6*i); break;
			case 'N': Add(N,Payload,6*i); break;
			case 'O': Add(O,Payload,6*i); break;
			case 'P': Add(P,Payload,6*i); break;
			case 'Q': Add(Q,Payload,6*i); break;
			case 'R': Add(R,Payload,6*i); break;
			case 'S': Add(S,Payload,6*i); break;
			case 'T': Add(T,Payload,6*i); break;
			case 'U': Add(U,Payload,6*i); break;
			case 'V': Add(V,Payload,6*i); break;
			case 'W': Add(W,Payload,6*i); break;
			case 'X': Add(X,Payload,6*i); break;
			case 'Y': Add(Y,Payload,6*i); break;
			case 'Z': Add(Z,Payload,6*i); break;
			
			case 'a': Add(a,Payload,6*i); break;
			case 'b': Add(b,Payload,6*i); break;
			case 'c': Add(c,Payload,6*i); break;
			case 'd': Add(d,Payload,6*i); break;
			case 'e': Add(e,Payload,6*i); break;
			case 'f': Add(f,Payload,6*i); break;
			case 'g': Add(g,Payload,6*i); break;
			case 'h': Add(h,Payload,6*i); break;
			case 'i': Add(ii,Payload,6*i); break;
			case 'j': Add(j,Payload,6*i); break;
			case 'k': Add(k,Payload,6*i); break;
			case 'l': Add(l,Payload,6*i); break;
			case 'm': Add(m,Payload,6*i); break;
			case 'n': Add(n,Payload,6*i); break;
			case 'o': Add(o,Payload,6*i); break;
			case 'p': Add(p,Payload,6*i); break;
			case 'q': Add(q,Payload,6*i); break;
			case 'r': Add(r,Payload,6*i); break;
			case 's': Add(s,Payload,6*i); break;
			case 't': Add(t,Payload,6*i); break;
			case 'u': Add(u,Payload,6*i); break;
			case 'v': Add(v,Payload,6*i); break;
			case 'w': Add(w,Payload,6*i); break;
			case 'x': Add(x,Payload,6*i); break;
			case 'y': Add(y,Payload,6*i); break;
			case 'z': Add(z,Payload,6*i); break;

			/*             */
			default: break;
		}
	}
}

