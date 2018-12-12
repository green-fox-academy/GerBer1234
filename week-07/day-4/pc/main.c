#include <stdio.h>
#include <stdint.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer comp;
    comp.cpu_speed_GHz = 2.4;
    comp.ram_size_GB = 4;
    comp.bits = 32;
    Notebook note;
    note.cpu_speed_GHz = 3.1;
    note.ram_size_GB = 16;
    note.bits = 64;
    printf("Computer: %.1lfGHz %dGB %dbit\n",comp.cpu_speed_GHz,comp.ram_size_GB,comp.bits);
    printf("Notebook: %.1lfGHz %dGB %dbit",note.cpu_speed_GHz,note.ram_size_GB,note.bits);
    return 0;
}