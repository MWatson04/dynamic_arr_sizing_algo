#include <stdio.h>
#include <stdlib.h>

struct Test {
	int *a;
};

void changeArr(struct Test *t1) {
	for (int i = 0; i < 22; i++) {
		t1->a[i]++;
	}
}

int main() {
	int const initial_size = 5;
	int current_size = initial_size;
	int length = 0;

	struct Test t;
	t.a = (int *)malloc(initial_size * sizeof(int));
	
	for (int i = 0; i < 22; i++) {
		t.a[i] = i + 1;
		printf("%d\n", t.a[i]);

		length++;

		if (length == current_size) {
			current_size *= 2;
			t.a = (int*)realloc(t.a, current_size * sizeof(int));
		} 
	}

	changeArr(&t);

	for (int i = 0; i < 22; i++) {
		printf("%d\n", t.a[i]);
	}

	free(t.a);
}
