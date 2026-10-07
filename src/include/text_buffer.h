#ifndef PSO_TEXT_BUFFER_H
#define PSO_TEXT_BUFFER_H
/* Provisional 24-byte view from 0x8c01e2fc and 0x8c01e32c.
 * Buffer storage is external; the observed update also writes buffer[length]. */
typedef struct TextBuffer {
 signed char *buffer;
 int field04,field08,length,field10,field14;
} TextBuffer;
typedef char check_text_buffer_size[sizeof(TextBuffer)==24?1:-1];
typedef char check_text_buffer_buffer[((unsigned long)&((TextBuffer *)0)->buffer)==0?1:-1];
typedef char check_text_buffer_field04[((unsigned long)&((TextBuffer *)0)->field04)==4?1:-1];
typedef char check_text_buffer_field08[((unsigned long)&((TextBuffer *)0)->field08)==8?1:-1];
typedef char check_text_buffer_length[((unsigned long)&((TextBuffer *)0)->length)==12?1:-1];
typedef char check_text_buffer_field10[((unsigned long)&((TextBuffer *)0)->field10)==16?1:-1];
typedef char check_text_buffer_field14[((unsigned long)&((TextBuffer *)0)->field14)==20?1:-1];
#endif
