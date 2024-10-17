#include "libft.h"

int	main()
{
	char	c;
	char	*s;
	char	*sempty;
	char	*snul;
	int		i;
	int		i16;
	int		imin;
	int		imax;
	int		showft;
	int		showpf;
	unsigned int umax;

	c = 'C';
	s = "cadena S";
	sempty = "";
	snul = NULL;
	i = -2348167;
	i16 = 16;
	imin = -2147483648;
	imax = 2147483647;
	umax = 4294967295;

	showft = ft_printf("probamos texto sin más\n");
	showpf = printf("probamos texto sin más\n");
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos el porcentaje: %%\n");
	showpf = printf("probamos el porcentaje: %%\n");
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la c: %c\n", c);
	showpf = printf("probamos la c: %c\n", c);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la s: %s\n", s);
	showpf = printf("probamos la s: %s\n", s);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la s(empty): %s\n", sempty);
	showpf = printf("probamos la s(empty): %s\n", sempty);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la s(NULL): %s\n", snul);
	showpf = printf("probamos la s(NULL): %s\n", snul);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la p: %p\n", s);
	showpf = printf("probamos la p: %p\n", s);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la p(empty): %p\n", sempty);
	showpf = printf("probamos la p(empty): %p\n", sempty);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la p(NULL): %p\n", NULL);
	showpf = printf("probamos la p(NULL): %p\n", NULL);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la d: %d\n", i);
	showpf = printf("probamos la d: %d\n", i);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la d(min): %d\n", imin);
	showpf = printf("probamos la d(min): %d\n", imin);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la d con 16: %d\n", i16);
	showpf = printf("probamos la d con 16: %d\n", i16);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la i: %i\n", i);
	showpf = printf("probamos la i: %i\n", i);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la i(min): %i\n", imin);
	showpf = printf("probamos la i(min): %i\n", imin);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la i con 16: %i\n", i16);
	showpf = printf("probamos la i con 16: %i\n", i16);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la u: %u\n", i);
	showpf = printf("probamos la u: %u\n", i);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la u(min): %u\n", imin);
	showpf = printf("probamos la u(min): %u\n", imin);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la u con 16: %u\n", i16);
	showpf = printf("probamos la u con 16: %u\n", i16);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la u(max): %u\n", umax);
	showpf = printf("probamos la u(max): %u\n", umax);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la x: %x\n", i);
	showpf = printf("probamos la x: %x\n", i);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la x(min): %x\n", imin);
	showpf = printf("probamos la x(min): %x\n", imin);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la x con 16: %x\n", i16);
	showpf = printf("probamos la x con 16: %x\n", i16);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la x con u(max): %x\n", umax);
	showpf = printf("probamos la x con u(max): %x\n", umax);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la X: %X\n", i);
	showpf = printf("probamos la X: %X\n", i);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la X(min): %X\n", imin);
	showpf = printf("probamos la X(min): %X\n", imin);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la X con 16: %X\n", i16);
	showpf = printf("probamos la X con 16: %X\n", i16);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos la X con u(max): %X\n", umax);
	showpf = printf("probamos la X con u(max): %X\n", umax);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos combinaciones csp: %c %s %p\n", c, s, s);
	showpf = printf("probamos combinaciones csp: %c %s %p\n", c, s, s);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos combinaciones diu: %d %i %u\n", i, i, i);
	showpf = printf("probamos combinaciones diu: %d %i %u\n", i, i, i);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);

	showft = ft_printf("probamos combinaciones xXporc: %x %X %%\n", i, i);
	showpf = printf("probamos combinaciones xXporc: %x %X %%\n", i, i);
	ft_printf("%d\n", showft);
	printf("%d\n", showpf);
}
