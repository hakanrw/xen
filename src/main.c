#include <stdio.h>
#include <xen.h>

int main(int argc, char** argv)
{
    printf("xen_multiply (2, 3) = %d\n", xen_multiply (2, 3));
    printf("xen_add      (2, 3) = %d\n", xen_add      (2, 3));
    printf("xen_substract(2, 3) = %d\n", xen_substract(2, 3));
    return 0;
}
