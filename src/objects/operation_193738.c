/* Provisional address-based name; preserve resource state, call ordering and signed dispatch conditions. */
extern void *shared_buffer;
extern int shared_state;
extern void *allocate_at(int);
void operation_193738(void){
    shared_buffer=allocate_at(0x3000);
    shared_state=0;
}
