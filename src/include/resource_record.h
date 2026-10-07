#ifndef PSO_RESOURCE_RECORD_H
#define PSO_RESOURCE_RECORD_H
/* Provisional sixty-byte view cleared by the initializer; field meanings unconfirmed. */
typedef struct ResourceRecordView { short field_00; unsigned short field_02,field_04; unsigned char unknown_06[54]; } ResourceRecordView;
typedef char check_record_size[sizeof(ResourceRecordView)==60?1:-1];
typedef char check_record_0[((unsigned long)&((ResourceRecordView *)0)->field_00)==0?1:-1];
typedef char check_record_2[((unsigned long)&((ResourceRecordView *)0)->field_02)==2?1:-1];
typedef char check_record_4[((unsigned long)&((ResourceRecordView *)0)->field_04)==4?1:-1];
#endif
