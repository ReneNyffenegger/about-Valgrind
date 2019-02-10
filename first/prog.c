#include <stdlib.h>

int main() {

    char *mem_1 = malloc(100);
    char *mem_2 = malloc(200);

    free(mem_1); // Note: mem_1 is freed twice, but
    free(mem_1); // mem_2 is not freed at all.

}
