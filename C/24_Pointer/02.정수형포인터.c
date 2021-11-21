// pointer_integer.c 
main()
{
	int a = 20, b = 35, c = 0;
	int* pa, * pb, * pc;

	pa = &a;
	pb = &b;
	pc = &c;

	*pc = *pa + *pb;

	printf("%d + %d = %d\n", *pa, *pb, *pc);
}
