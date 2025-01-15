
#include <stdio.h>

int main()
{

	int arr[3] = { 1, 2, 3 };

	int* ptr = &arr[0];


	printf("Pointer to First Element: %p\n", ptr);

	printf("Arran Name: %p", arr);

	return 0;
}
