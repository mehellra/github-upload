
void Str2Hex( char *in, int len, unsigned char * out)	{
	int i,j;
	char temp[3];
	for (i = 0, j=0; i < len; i+=2, j++){
		temp[0]=in[i];
		temp[1]=in[i+1];
		temp[2]=0;
		out[j] = strtol(temp, NULL, 16);
		printf("%c %d %x \n", out[j], out[j], out[j]);
	}
	out[j]=0;
}

void Hex2Str( unsigned char *in, int length, char *out)	{
	int i;
	for (i = 0; i < length; i++) {
		if ((in[i] >> 4) > 9)
			out[i * 2] =  ((in[i] >> 4) + 'A' - 10);
		else
			out[i * 2] =  ((in[i] >> 4) + '0');

		if ((in[i] & 0x0f) > 9)
			out[i * 2 + 1] = ((in[i] & 0x0f) + 'A' - 10);
		else
			out[i * 2 + 1] = ((in[i] & 0x0f) + '0');

	}
	out[i * 2] = 0;
}

