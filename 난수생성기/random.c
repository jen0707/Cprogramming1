#define SEED 17
int MULT = 25173;
int INC = 13489;
int MOD = 65536;

static unsigned int seed = SEED; //난수생성시드값

//정수난수생성함수
unsigned random_i(void)
{
	seed = (MULT * seed + INC) % MOD;
	return seed;
}

//실수난수생성함수
double random_f(void)
{
	seed = (MULT * seed + INC) % MOD;
	return seed / (double)MOD;
}

