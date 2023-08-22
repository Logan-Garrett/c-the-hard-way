#include <stdio.h>

int get_size_of_int_array(int inputs, char *data_array[]);

int main(int argc, char *argv[]) {

	int numbers[] = { 1, 3, 5, 8, 11 };

	// Array of numbers
	printf("The Numbers in the array are %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
		
	printf("The length of the number array is: %ld\n", sizeof(numbers) / sizeof(int));
	
	get_size_of_int_array(argc, argv);

	return 0;
}

int get_size_of_int_array(int inputs, char *data_array[]) {
	
	int i;
	
	printf("inputs length: %d\n", inputs);	

	for (i = 0; i < inputs; i++) {
		printf("%s ", data_array[i]);
	}
	printf("\n");	
	
	return 0;
}
