#include <stdlib.h>
#define SIZE 16
int main(){
    char* ptr = (char*)malloc (SIZE);
    if (1) {
        free(ptr);
        ptr = NULL;
    }
    free(ptr);
    return 0;
}
