#include "util.hpp"

#define MOVE_DISK(disk, from, to) std::cout << "Move disk " << disk << " from plate " << from << " to plate " << to << std::endl

void move_items(int n, char src, char dest, char aux) {
    if (n == 1) {
        MOVE_DISK(n, src, dest);
        return;
    }

    move_items(n - 1, src, aux, dest);

    MOVE_DISK(n, src, dest);

    move_items(n - 1, aux, dest, src);
}

void move_items(int n, char src, char dest) {
    move_items(n, src, dest, 'X');
}
