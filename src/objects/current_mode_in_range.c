typedef struct Entry { int mode; char unknown4[8]; } Entry;
typedef char check_entry[sizeof(Entry)==12?1:-1];
extern int remapped,current_mode;
extern Entry mode_entries[];
static inline int read_mode(void) { if(remapped) return mode_entries[current_mode].mode; return current_mode; }
int current_mode_in_range(void) { return (unsigned int)read_mode()-11u<=3u; }
