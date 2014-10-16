dnl Process this file with autoconf to produce a configure script.
AC_INIT(ufo.c)

dnl Checks for programs.
AC_PROG_CC

dnl Checks for libraries.
dnl Replace `main' with a function in -lncurses:
AC_CHECK_LIB(ncurses, main)

dnl Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS(sys/time.h unistd.h)

dnl Checks for typedefs, structures, and compiler characteristics.

dnl Checks for library functions.
AC_TYPE_SIGNAL

AC_OUTPUT(Makefile)
