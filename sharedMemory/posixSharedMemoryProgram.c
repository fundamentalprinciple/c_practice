#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main() {
    int segment_id;
    char* shared_memory;
    const int size = 4096;
    
    segment_id = shmget(IPC_PRIVATE, size, S_IRUSR | S_IWUSR);
    printf("segment_id: %d\n", segment_id);
    
    return 0;
}
