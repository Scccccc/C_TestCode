#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = div(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//int remainder(int a, int b)
//{
//	return a % b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = remainder(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	double a = 0.0;
//	scanf("%lf", &a);
//	printf("%d\n", ((int)a % 10));
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	while(scanf("%d", &y) != EOF)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("yes\n");
//		}
//		else
//			printf("no\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	
//		if (isalpha(ch))
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//	
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n % 10);
//}

//int main()
//{
//	int w = 0;
//	float h = 0.0;
//	scanf("%d %f", &w, &h);
//	float bmi = w / (h * h);
//	if (bmi >= 18.5 && bmi <= 23.9)
//		printf("Normal\n");
//	else
//		printf("Abnormal\n");
//
//	return 0;
//}

//计算一元二次方程

//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//    {
//        double delta = b * b - 4 * a * c;
//
//        if (a != 0.0)
//        {
//            if (delta > 0.0)
//            {
//                printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
//            }
//            else if (delta < 0.0)
//            {
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", (-b) / (2 * a), sqrt(-delta) / (2 * a),
//                    (-b) / (2 * a), sqrt(-delta) / (2 * a)
//                );
//            }
//            else if (delta == 0)
//            {
//                if (b == 0 && c == 0)
//                {
//                    printf("x1=x2=0.00\n");
//                }
//                else
//                {
//                    printf("x1=x2=%.2lf\n", -b / (2 * a));
//                }
//            }
//        }
//        else
//            printf("Not quadratic equation\n");
//    }
//
//    return 0;


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}


