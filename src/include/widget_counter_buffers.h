#ifndef PSO_WIDGET_COUNTER_BUFFERS_H
#define PSO_WIDGET_COUNTER_BUFFERS_H
/* Provisional paired buffers: twelve 32-bit counters in each allocation. */
typedef unsigned int WidgetCounterBuffer[12];
typedef char check_WidgetCounterBuffer_word[sizeof(unsigned int) == 4 ? 1 : -1];
typedef char check_WidgetCounterBuffer_size[sizeof(WidgetCounterBuffer) == 48 ? 1 : -1];
typedef char check_WidgetCounterBuffer_index[sizeof(unsigned short) == 2 ? 1 : -1];
extern WidgetCounterBuffer *first_buffer;
extern WidgetCounterBuffer *second_buffer;
extern int first_state;
extern int second_state;
#endif
