#pragma once

typedef struct
{
	unsigned long long checksum;
	unsigned long long counter;
	char name[16];
} crc64_vector_item;

typedef struct
{
	crc64_vector_item *items;
	unsigned int capacity;
	unsigned int count;
} crc64_vector;

int createVector(crc64_vector **vector, unsigned int capacity);
int destroyVector(crc64_vector *vector);
int vectorAdd(crc64_vector **vector, const char *address);
int vectorCompare(const void * a, const void * b);
int vectorContains(crc64_vector *vector, const char *address, crc64_vector_item **found);
int vectorJoin(crc64_vector *v1, crc64_vector *v2, crc64_vector **vout);
int vectorIncrement(crc64_vector **vector, char *address);
int vectorIsItemBlocked(crc64_vector *vector, char *address);
int vectorPrint(crc64_vector *vector);
int vectorReset(crc64_vector *vector);
int vectorSort(crc64_vector *vector);