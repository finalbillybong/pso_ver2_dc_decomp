typedef struct Task { int state, identifier; char name[32]; void *destination; int size, sectors; int *done; struct Task *next; void *buffer; void (*callback)(void *); char callback_data[32]; void *context; } Task;
typedef char check_layout[sizeof(Task) == 104 && (unsigned long)&((Task *)0)->name == 8 && (unsigned long)&((Task *)0)->destination == 40 && (unsigned long)&((Task *)0)->size == 44 && (unsigned long)&((Task *)0)->sectors == 48 && (unsigned long)&((Task *)0)->done == 52 && (unsigned long)&((Task *)0)->next == 56 && (unsigned long)&((Task *)0)->callback == 64 ? 1 : -1];
extern void *heap;
extern Task *first, *last;
extern int next_identifier, count;
extern void *open_at(const char *, int), *heap_alloc_8c122700(void *, unsigned int);
extern void strncpy_8c12b154(char *, const char *, unsigned int), close_at(void *);
extern void bytes_at(void *, const void *, unsigned int), free_at(void *, void *), reset_at(void);
extern int busy;
extern int ADXF_GetFsizeByte_8c34d9d4(void *), ADXF_GetFsizeSct_8c34d9b8(void *);
typedef char check_new_fields[(unsigned long)&((Task *)0)->buffer == 60 && (unsigned long)&((Task *)0)->callback_data == 68 && (unsigned long)&((Task *)0)->context == 100 ? 1 : -1];

extern void *active_handle, *scratch_buffer, *large_buffer;
extern char buffer_pool[];
extern void start_at(void), stop_at(void), cancel_at(void), remove_at(void), complete_at(void), tick_at(void), loading_wait_frame_8c104c60(void), process_at(void);
extern void *game_malloc_buffer_8c011e9c(unsigned int), *heap_at(unsigned int), *large_at(void *);
extern void init_heap_at(void *, unsigned int, unsigned int), destroy_heap_at(void *, int), game_free_8c011ec0(void *), release_large_at(void *), ADXF_ReadNw32_8c34d6ae(void *, int, void *);
extern int ADXF_GetStat_8c34da3c(void *), named_at(void *, const char *);
extern void copy_words_at(void *, void *, int), copy_shorts_at(void *, void *, int), copy_bytes_at(void *, void *, int), decode_at(void *, void *);
void process_file_task_queue(void) {
    switch (busy) {
    case 0:
        if (!first) break;
        if (first->state & 512) { remove_at(); break; }
        first->state |= 256;
        if (first->state & 2) {
            large_buffer = large_at(buffer_pool + 12);
            if (!large_buffer) break;
            active_handle = open_at(first->name, 0);
            ADXF_ReadNw32_8c34d6ae(active_handle, first->sectors, large_buffer);
            busy = 3;
            break;
        }
        if (first->state & 4) { busy = 4; break; }
        active_handle = open_at(first->name, 0);
        if (!active_handle) break;
        if (first->sectors > 1) {
            ADXF_ReadNw32_8c34d6ae(active_handle, first->sectors - 1, first->destination);
            busy = 1;
        } else {
            ADXF_ReadNw32_8c34d6ae(active_handle, 1, scratch_buffer);
            busy = 2;
        }
        break;
    case 1:
        if (first->state & 512) {
            close_at(active_handle);
            active_handle = 0;
            remove_at();
            busy = 0;
            break;
        }
        if (ADXF_GetStat_8c34da3c(active_handle) != 3) break;
        ADXF_ReadNw32_8c34d6ae(active_handle, 1, scratch_buffer);
        busy = 2;
        break;
    case 2:
        if (first->state & 512) {
            close_at(active_handle);
            active_handle = 0;
            remove_at();
            busy = 0;
            break;
        }
        if (ADXF_GetStat_8c34da3c(active_handle) != 3) break;
        {
            char *destination = (char *)first->destination + ((unsigned int)(first->sectors - 1) << 11);
            int size = first->size % 2048;
            if (!size) size = 2048;
            switch (size & 3) {
            case 0: copy_words_at(destination, scratch_buffer, size / 4); break;
            case 2: copy_shorts_at(destination, scratch_buffer, size / 2); break;
            default: copy_bytes_at(destination, scratch_buffer, size); break;
            }
        }
        close_at(active_handle);
        active_handle = 0;
        complete_at();
        break;
    case 3:
        if (first->state & 512) {
            close_at(active_handle);
            active_handle = 0;
            remove_at();
            busy = 0;
            break;
        }
        if (ADXF_GetStat_8c34da3c(active_handle) == 3) {
            decode_at(large_buffer, first->buffer);
            release_large_at(buffer_pool + 12);
            complete_at();
        }
        break;
    case 4:
        if (named_at(first->context, first->name)) {
            remove_at();
            busy = 0;
        }
        break;
    }
    tick_at();
}
