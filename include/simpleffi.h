
/* Only support argc<16 */
void *simpleffi_call(void *fn,int argc,void **argv);

typedef void *(*simpleffi_callback_handler4)(void *arg0,void *arg1,void *arg2,void *arg3,int cb_index);

void simpleffi_set_callback_handler(int index,simpleffi_callback_handler4 handler);

/* Only support index<32 */
void *simpleffi_get_callback(int index);
