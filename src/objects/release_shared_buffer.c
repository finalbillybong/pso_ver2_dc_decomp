#define release_at ((void (*)(void *))0x8c36cde4)
void release_shared_buffer(void) { release_at(*(void **)0x8c44f8e0); }
