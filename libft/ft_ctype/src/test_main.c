/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:47:27 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 15:54:02 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("=== Testing isalnum ===\n");
	for (size_t i = 0; i < 256; i++)
		if (isalnum((unsigned char)(i)))
			printf("isalnum(%3d '%c') = %d\n", (int)i, (char)i, isalnum((unsigned char)(i)));

	printf("\n=== Testing isalpha ===\n");
	for (size_t i = 0; i < 256; i++)
		if (isalpha((unsigned char)(i)))
			printf("isalpha(%3d '%c') = %d\n", (int)i, (char)i, isalpha((unsigned char)(i)));

	printf("\n=== Testing isdigit ===\n");
	for (size_t i = 0; i < 256; i++)
		if (isdigit((unsigned char)(i)))
			printf("isdigit(%3d '%c') = %d\n", (int)i, (char)i, isdigit((unsigned char)(i)));

	printf("\n=== Testing isspace ===\n");
	for (size_t i = 0; i < 256; i++)
		if (isspace((unsigned char)(i)))
			printf("isspace(%3d '%c') = %d\n", (int)i, (char)i, isspace((unsigned char)(i)));

	printf("\n=== Testing isupper ===\n");
	for (size_t i = 0; i < 256; i++)
		if (isupper((unsigned char)(i)))
			printf("isupper(%3d '%c') = %d\n", (int)i, (char)i, isupper((unsigned char)(i)));

	printf("\n=== Testing islower ===\n");
	for (size_t i = 0; i < 256; i++)
		if (islower((unsigned char)(i)))
			printf("islower(%3d '%c') = %d\n", (int)i, (char)i, islower((unsigned char)(i)));

	printf("\n=== Testing isprint ===\n");
	for (size_t i = 0; i < 256; i++)
		if (isprint((unsigned char)(i)))
			printf("isprint(%3d '%c') = %d\n", (int)i, (char)i, isprint((unsigned char)(i)));

	printf("\n=== Testing ispunct ===\n");
	for (size_t i = 0; i < 256; i++)
		if (ispunct((unsigned char)(i)))
			printf("ispunct(%3d '%c') = %d\n", (int)i, (char)i, ispunct((unsigned char)(i)));

	printf("\n=== Testing isxdigit ===\n");
	for (size_t i = 0; i < 256; i++)
		if (isxdigit((unsigned char)(i)))
			printf("isxdigit(%3d '%c') = %d\n", (int)i, (char)i, isxdigit((unsigned char)(i)));

	return 0;
}
