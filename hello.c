#include <stdio.h>

int main()
{
    printf("Hello OI..\n");
    return 0;
}

// $ sudo port install git

// $ sudo port install automake  --> makeFiles

// $ sudo port install autoconf

// $ sudo port install libtool
// $ sudo port install gcc11

// $ sudo port select --list gcc
// Available versions for gcc:
//     mp-gcc11
//     none (active)

// $ sudo port select gcc mp-gcc11
// Selecting 'mp-gcc11’ for 'gcc' succeeded. 'mp-gcc11’ is now active.

// $ sudo port select --list gcc
// Available versions for gcc:
//     mp-gcc11(active)
//     none
// Do the same to install MPI library MPICH

// $ sudo port install mpich-gcc8

// $ sudo port select --list mpi
// Available versions for mpi:
//     mpich-gcc8-fortran
//     none (active)

// $ sudo port select mpi mpich-gcc6-fortran
// Selecting 'mpich-gcc8-fortran' for 'mpi' succeeded. 'mpich-gcc8-fortran' is now active.

// $ sudo port select --list mpi
// Available versions for mpi:
//     mpich-gcc8-fortran (active)
//     none