/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_experiment.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:02:34 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/05/16 22:57:49 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdarg.h>

// int main(void)
// {

// }
// printf("[3]に関して\n");
// printf("%3i\n", 42);
// printf("%3d\n", 42);
// printf("%3u\n", 42);
// printf("%3x\n", 42);
// printf("%3X\n", 42);

// printf("[-3]に関して\n");
// printf("%-3i\n", 42);
// printf("%-3d\n", 42);
// printf("%-3u\n", 42);
// printf("%-3x\n", 42);
// printf("%-3X\n", 42);

// printf("[3-]に関して\n");
// printf("%3-i\n", 42);
// printf("%3-d\n", 42);
// printf("%3-u\n", 42);
// printf("%3-x\n", 42);
// printf("%3-X\n", 42);
// /* フィールド幅は識別子の前。
// フラグ→フィールド幅→識別子の順番 */

// printf("[3.4]に関して\n");
// printf("%3.4i\n", -42);
// printf("%3.4d\n", 42);
// printf("%3.4u\n", 42);
// printf("%3.4x\n", 42);
// printf("%3.4X\n", 42);

// printf("[.-4]に関して\n");
// printf("%.-4i\n", -42);
// printf("%.-4d\n", 42);
// printf("%.-4u\n", 42);
// printf("%.-4x\n", 42);
// printf("%.-4X\n", 42);

// printf("[9.4]に関して\n");
// printf("%9.4i\n", -42);
// printf("%9.4d\n", 42);
// printf("%9.4u\n", 42);
// printf("%9.4x\n", 42);
// printf("%9.4X\n", 42);

// printf("[03]に関して\n");
// printf("%03i\n", 42);
// printf("%03d\n", 42);
// printf("%03u\n", 42);
// printf("%03x\n", 42);
// printf("%03X\n", 42);

// printf("[-03]に関して\n");
// printf("%-03i\n", 42);
// printf("%-03d\n", 42);
// printf("%-03u\n", 42);
// printf("%-03x\n", 42);
// printf("%-03X\n", 42);

// printf("[.]に関して\n");
// printf("%.i\n", 42);
// printf("%.d\n", 42);
// printf("%.u\n", 42);
// printf("%.x\n", 42);
// printf("%.X\n", 42);

// printf("[.0]に関して\n");
// printf("%.0i\n", 42);
// printf("%.0d\n", 42);
// printf("%.0u\n", 42);
// printf("%.0x\n", 42);
// printf("%.0X\n", 42);

// printf("[.4]に関して\n");
// printf("%.4i\n", 42);
// printf("%.4d\n", 42);
// printf("%.4u\n", 42);
// printf("%.4x\n", 42);
// printf("%.4X\n", 42);

// printf("[+]に関して\n");
// printf("%+i\n", -42);
// printf("%+d\n", 42);
// printf("%+u\n", 42);
// printf("%+x\n", 42);
// printf("%+X\n", 42);

// printf("[ ]に関して\n");
// printf("% i\n", -42);
// printf("% d\n", 42);
// printf("% u\n", 42);
// printf("% x\n", 42);
// printf("% X\n", 42);

// printf("[#]に関して\n");
// printf("%#i\n", -42);
// printf("%#d\n", 42);
// printf("%#u\n", 42);
// printf("%#x\n", 42);
// printf("%#X\n", 42);

// printf("[+ ]に関して\n");
// printf("%+ i\n", -42);
// printf("%+ d\n", 42);
// printf("%+ u\n", 42);
// printf("%+ x\n", 42);
// printf("%+ X\n", 42);

// printf("[ +]に関して\n");
// printf("% +i\n", -42);
// printf("% +d\n", 42);
// printf("% +u\n", 42);
// printf("% +x\n", 42);
// printf("% +X\n", 42);

// printf("[# ]に関して\n");
// printf("%# i\n", -42);
// printf("%# d\n", 42);
// printf("%# u\n", 42);
// printf("%# x\n", 42);
// printf("%# X\n", 42);

// printf("[ #]に関して\n");
// printf("% #i\n", -42);
// printf("% #d\n", 42);
// printf("% #u\n", 42);
// printf("% #x\n", 42);
// printf("% #X\n", 42);

// printf("[#+]に関して\n");
// printf("%#+i\n", -42);
// printf("%#+d\n", 42);
// printf("%#+u\n", 42);
// printf("%#+x\n", 42);
// printf("%#+X\n", 42);

// printf("[+######]に関して\n");
// printf("%+######i\n", -42);
// printf("%+######d\n", 42);
// printf("%+######u\n", 42);
// printf("%+######x\n", 42);
// printf("%+######X\n", 42);

// printf("[12.5]に関して\n");
// printf("%12.5i\n", -42);
// printf("%12.5d\n", 42);
// printf("% 12.5u\n", 42);
// printf("%#12.5x\n", 42);
// printf("%#12.5X\n", 42);

// printf("[]に関して\n");
// printf("%i\n", -42);
// printf("%d\n", 42);
// printf("%u\n", 42);
// printf("%x\n", 42);
// printf("%X\n", 42);

// /* 	+はdとiにだけ作用。
// 	#はx Xにだけ作用。 */

/* flag == 'c' について調べる。 */
	// printf("flag == 'c' について。\n");
	// for (int i = -258; i < 258; i++)
	// {
	// 	printf("%d", printf("%c\n"));
	// }
	// return (0);

/* flag == 's'について調べる。 */
// printf("%-10s\n", "42Tokyo");
// printf("%10s\n", "42Tokyo");
// printf("%7s\n", "42Tokyo");
// printf("%4s\n", "42Tokyo");
// printf("%1s\n", "42Tokyo");
// printf("%0s\n", "42Tokyo");
// printf("%-10s\n", "42Tokyo");
// printf("%010s\n", "42Tokyo");

// printf("%.s\n", "42Tokyo");
// printf("%.10s\n", "42Tokyo");
// printf("%.7s\n", "42Tokyo");
// printf("%.4s\n", "42Tokyo");
// printf("%.1s, %s\n", "42Tokyo", "24Kyoto");
// printf("%.0s, %s\n", "42Tokyo", "24Kyoto");
// printf("%.s, %s\n", "42Tokyo", "24Kyoto");
// printf("%-+.-10s\n", "42Tokyo");
// printf("%-+-.-010s, %s\n", "42Tokyo", "aaa", "bbb");
// printf("%5.3s, %s\n", "42Tokyo");
// printf("%3.5s, %s\n", "42Tokyo");
// printf("\nstart : %%d\n");
// printf("%10.5s, %s\n", "42Tokyo");
// printf("%5.10s, %s\n", "42Tokyo");
// printf("%10.15s, %s\n", "42Tokyo");
// printf("%15.10s, %s\n", "42Tokyo");

// /* digit type を調べる。 */
// printf("% d\n", 2025);

// printf("%1d\n", 2025);
// printf("% 1d\n", 2025);
// printf("\nstart : %%d\n");
// printf("%-1d\n", 2025);
// printf("%- 1d\n", 2025);
// printf("%+1d\n", 2025);
// printf("%-01d\n", 2025);
// printf("%+01d\n", 2025);

// printf("\nstart : %%d\n");
// printf("%2d\n", 2025);
// printf("% 2d\n", 2025);
// printf("%-2d\n", 2025);
// printf("%- 2d\n", 2025);
// printf("%+2d\n", 2025);
// printf("%-02d\n", 2025);
// printf("%+02d\n", 2025);

// printf("\nstart : %%d\n");
// printf("%3d\n", 2025);
// printf("% 3d\n", 2025);
// printf("%-3d\n", 2025);
// printf("%- 3d\n", 2025);
// printf("%+3d\n", 2025);
// printf("%-03d\n", 2025);
// printf("%+03d\n", 2025);

// printf("\nstart : %%d\n");
// printf("%4d\n", 2025);
// printf("% 4d\n", 2025);
// printf("%-4d\n", 2025);
// printf("%- 4d\n", 2025);
// printf("%+4d\n", 2025);
// printf("%-04d\n", 2025);
// printf("%+04d\n", 2025);

// printf("\nstart : %%d\n");
// printf("%5d\n", 2025);
// printf("% 5d\n", 2025);
// printf("%-5d\n", 2025);
// printf("%- 5d\n", 2025);
// printf("%+5d\n", 2025);
// printf("%-05d\n", 2025);
// printf("%+05d\n", 2025);

// printf("\nstart : %%d\n");
// printf("%6d\n", 2025);
// printf("% 6d\n", 2025);
// printf("%-6d\n", 2025);
// printf("%- 6d\n", 2025);
// printf("%+6d\n", 2025);
// printf("%-06d\n", 2025);
// printf("%+06d\n", 2025);
// printf("% 06d\n", 2025);

// printf("%.0d\n", 0);
// printf("% +07d\n", 2025);
// printf("% -07d\n", 2025);
// printf("%+-0 7d\n", 2025);
// printf("% 7d\n", 2025);
// printf("%-7d\n", 2025);
// printf("%- 7d\n", 2025);
// printf("%+7d\n", 2025);
// printf("%-07d\n", 2025);
// printf("% 07d\n", 2025);

// printf("% .d\n", 2025);
// printf("% .10d\n", 2025);
// printf("% .7d\n", 2025);
// printf("% .4d\n", 2025);
// printf("% .1d, % d\n", 2025, -42);
// printf("% .0d, % d\n", 2025, -42);
// printf("% .d, % d\n", 2025, -42);
// printf("% -+.-10d\n", 2025);
// printf("% -+-.-010d, % d\n", 2025, -42);

// printf("% 5.3d, % d\n", 1234567890);
// printf("% 3.5d, % d\n", 1234567890);
// printf("% 10.5d, % d\n", 1234567);
// printf("% 5.10d, % d\n", 1234567);
// printf("% 10.15d, % d\n", 1234567);
// printf("% 15.10d, % d\n", 1234567);

/* # と precision field width の関係を調べる。 */
// printf("%#x\n", 2025);
// printf("%#10x\n", 2025);
// printf("%#7x\n", 2025);
// printf("%#4x\n", 2025);
// printf("%#1x\n", 2025);
// printf("%#0x\n", 2025);
// printf("%#-10x\n", 2025);
// printf("%#010x\n", 2025);

// printf("%#.x\n", 2025);
// printf("%#.10x\n", 2025);
// printf("%#.7x\n", 2025);
// printf("%#.4x\n", 2025);
// printf("%#.1x, %#x\n", 2025, -42);
// printf("%#.0x, %#x\n", 2025, -42);
// printf("%#.x, %#x\n", 2025, -42);
// printf("%#-+.-10x\n", 2025);
// printf("%#-+-.-010x, %#x\n", 2025, -42);

// printf("%#5.3x, %#x\n", 1234567890);
// printf("%#3.5x, %#x\n", 1234567890);
// printf("%#10.5x, %#x\n", 1234567);
// printf("%#5.10x, %#x\n", 1234567);
// printf("%#10.15x, %#x\n", 1234567);
// printf("%#15.10x, %#x\n", 1234567);

/* 0 # と precision field width の関係を調べる。 */
// printf("%0#x\n", 2025);
// printf("%0#10x\n", 2025);
// printf("%0#7x\n", 2025);
// printf("%0#4x\n", 2025);
// printf("%0#1x\n", 2025);
// printf("%0#0x\n", 2025);
// printf("%0#-10x\n", 2025);
// printf("%0#010x\n", 2025);

// printf("%0#.x\n", 2025);
// printf("%0#.10x\n", 2025);
// printf("%0#.7x\n", 2025);
// printf("%0#.4x\n", 2025);
// printf("%0#.1x, %#x\n", 2025, -42);
// printf("%0#.0x, %#x\n", 2025, -42);
// printf("%0#.x, %#x\n", 2025, -42);
// printf("%0#-+.-10x\n", 2025);
// printf("%0#-+-.-010x, %#x\n", 2025, -42);

// printf("%0#5.3x, %#x\n", 1234567890);
// printf("%0#3.5x, %#x\n", 1234567890);
// printf("%0#10.5x, %#x\n", 1234567);
// printf("%0#5.10x, %#x\n", 1234567);
// printf("%0#10.15x, %#x\n", 1234567);
// printf("%0#15.10x, %#x\n", 1234567);

/* ptrとフラグの関係を調べる。 */
// void *ptr = malloc(1);
// printf("%p\n", ptr);
// printf("%-20.100p\n", ptr);
// printf("%p\n", ptr);
// }
