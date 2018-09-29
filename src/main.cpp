
int main() {
	char ch1 = 65;
	printf("ch1 %c %d \n",ch1,ch1);

	for(int i=0;i<256;i++){
		unsigned char ch2 = i;
		printf("ch1 %c %d %x\n",ch2,ch2,ch2);
	}

	char* input ="ffff";
	printf("%ld\n", strtol(input, NULL, 16) );
/*
	unsigned char* s1;
	s1[0]='a';
	s1[1]='k';
	s1[2]='1';
	s1[3]=0;

	char s2[6+1];
	char s3[3+1];

	Str2Hex(s1,3,s2);
	printf("s2: %s \n",s2);

	Hex2Str(s2,6,s3);
	printf("s3: %s \n",s3);
*/
	unsigned char ss1[3+1];
	char ss2[6+1];
	unsigned char ss3[3+1];
	char ss4[6+1];

	ss1[0]=65;
	ss1[1]=200;
	ss1[2]=228;
	ss1[3]=0;

	Hex2Str(ss1,3,ss2);
	printf("ss2: %s \n",ss2);

	Str2Hex(ss2,6,ss3);
	printf("ss3: %s \n",ss3);
	for(int i=0;i<3;i++){printf("%X",ss3[i]);}
	printf("\n");

	Hex2Str(ss3,3,ss4);
	printf("ss4: %s \n",ss4);

}

