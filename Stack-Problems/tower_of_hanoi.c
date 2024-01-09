#include <stdio.h>

void towerOfHanoi(int no_of_disks, char source, char auxiliary, char destination)
{
    if (no_of_disks == 1)
    {
        printf("\nMove disk 1 from tower %c to tower %c\n", source, destination);
        return;
    }

    towerOfHanoi(no_of_disks - 1, source, destination, auxiliary);
    printf("\nMove disk %d from tower %c to tower %c\n", no_of_disks, source, destination);
    towerOfHanoi(no_of_disks - 1, auxiliary, source, destination);
}

int main()
{
    int no_of_disks;
    char source = 'A', auxiliary = 'B', destination = 'C';

    printf("\nEnter Number of Disks for movement : ");
    scanf("%d", &no_of_disks);

    towerOfHanoi(no_of_disks, source, auxiliary, destination);

    return 0;
}