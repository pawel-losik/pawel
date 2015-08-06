#include <pthread.h>

int pthread_create(pthread_t *thread, pthread_attr_t *attr, void*
(*start_routine) (void*),void *arg)

void *fork(void *arg) 
