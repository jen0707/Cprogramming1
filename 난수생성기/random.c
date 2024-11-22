#define SEED 17
int MULT = 25173;
int INC = 13489;
int MOD = 65536;

static unsigned int seed = SEED; //���������õ尪

//�������������Լ�
unsigned random_i(void)
{
	seed = (MULT * seed + INC) % MOD;
	return seed;
}

//�Ǽ����������Լ�
double random_f(void)
{
	seed = (MULT * seed + INC) % MOD;
	return seed / (double)MOD;
}

