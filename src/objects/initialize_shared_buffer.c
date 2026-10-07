extern void *allocate_at(int);
void initialize_shared_buffer(void) {
 *(void **)0x8c44f8e0=allocate_at(0x1800);
}
