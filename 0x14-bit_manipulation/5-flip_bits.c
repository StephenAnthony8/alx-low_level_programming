#include "main.h"
/**
 * flip_bits - counts the number of bit flipping  to get to m
 * @n: initial number
 * @m: conversion number
 * Return: number of flips(?)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int shift, xor_val, b_mask, count;

	if (n == m)
		return (0);

	xor_val = n ^ m;
	count = 0;
	b_mask = shift = 1;
	while (xor_val >= b_mask)
	{
		if (xor_val == (xor_val | b_mask))
			count++;
		b_mask = 1 << shift;
		shift++;
	}
	return (count);


}
