#include "fillit.h"

void dynamic_array_print(char **A, size_t N, size_t M)
{
	for(size_t i = 0; i < N; i++) {
		for(size_t j = 0; j < M; j++) {
		printf("%*d", 5, A[i][j]);
	}
		printf("\n");
	}
}

char ** dynamic_array_alloc(size_t N, size_t M)
{
	char **A = (char **)malloc(N*sizeof(char *));
	for(size_t i = 0; i < N; i++) {
		A[i] = (char *)malloc(M*sizeof(char));
	}
	return A;
}

void dynamic_array_free(char **A, size_t N)
{
	for(size_t i = 0; i < N; i++) {
		free(A[i]);
	}
	free(A);
}

char** dynamic_array_test(size_t N, size_t M)
{
	char **A = dynamic_array_alloc(N, M);
	for(size_t i = 0; i < N; i++) {
		for(size_t j = 0; j < M; j++) {
			A[i][j] = '.';
		}
	}
	return (A);
}

/*int main()
{
	int matrix_height = 4;
	int matrix_width = 5;
	char **array = dynamic_array_test(matrix_height, matrix_width);
	return 0;
}*/
