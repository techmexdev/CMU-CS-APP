#include <stdio.h>
/* The API to implement. Like an interface in Go */
struct greet_api {
  char name;
  int (*say_hello)(char *name);
  int (*say_goodbye)(void);
};

/* Our implementation of the hello function */
int say_hello_fn(char *name) {
  printf("Hello %s\n", name);
  return 0;
}

/* Our implementation of the goodbye function */
int say_goodbye_fn(void) {
  printf("Goodbye\n");
  return 0;
}

/* A struct implementing the API */
struct greet_api greet = {
  .say_hello = say_hello_fn, /* name of function is a function pointer. fn = &fn */
  .say_goodbye = &say_goodbye_fn
};

/* main() doesn't need to know anything about how the say_hello/goodbye works */
int main(int argc, char *argv[]) {
  greet.say_hello(argv[1]);
  greet.say_goodbye();

  /* our struct is calling the implementation function under the hood */
  printf("%p, %p, %p\n", greet.say_hello, say_hello_fn, &say_hello_fn); 

  return 0;
}
