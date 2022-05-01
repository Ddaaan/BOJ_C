#include <stdio.h>
int main() {
	long long int fixed_cost, variable_cost, computer_cost, break_point = 1;
	scanf("%lld %lld %lld", &fixed_cost, &variable_cost, &computer_cost);
	if (variable_cost >= computer_cost) {
		printf("-1");
		return 0;
	}
	break_point = fixed_cost / (computer_cost - variable_cost) + 1;
	printf("%d", break_point);
	return 0;
}