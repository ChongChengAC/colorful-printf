#ifndef COLORFUL_PRINTF
#define COLORFUL_PRINTF

#define RED "\x1B[1;31m"
#define YELLOW "\x1B[1;33m"
#define BLUE "\x1B[1;34m"
#define GREEN "\x1B[1;32m"
#define CYAN "\x1B[1;36m"
#define STDOUT_RESET "\x1B[0m"

void error(const char info[]);

void warning(const char info[]);

void debug(const char info[]);

#endif
