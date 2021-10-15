#include <stdio.h>

/**
 * Say hello to the given name!
 * 
 * @param name The name to say hello to.
 */
void say_hello(char *name)
{
    printf("Hello, %s!\n", name);
}

int main(void)
{
    char *name = "Jack";
    say_hello(name);

    return 0;
}
