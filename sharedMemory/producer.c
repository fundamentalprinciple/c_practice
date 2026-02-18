#include "buffer.c"

item nextProduced;

item makeNewItem(int val) {
    struct item ye;
    ye.value = val;
    return ye;
}

int val = 0;
while(true) {
    val++;
    nextProduced = makeNewItem(val);
    
}
