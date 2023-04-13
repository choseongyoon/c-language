// BMI 계산기
// 만든이 조성윤
// 몸무게(kg), 키(m)
#include <stdio.h>
int main()
{
	float weight;
	float height;
	printf("정확한 키를 입력하세요 : ");
	scanf("%f", &weight);
	printf("정확한 몸무게를 입력하세요 : ");
	scanf("%f", &height);
	printf("%.2f\n", height * height / weight );
	return 0;
}