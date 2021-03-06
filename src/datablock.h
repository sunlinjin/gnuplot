/*
 * $Id: datablock.h,v 1.4 2017-06-05 21:32:50 sfeam Exp $
 */
void datablock_command __PROTO((void));
char **get_datablock __PROTO((char *name));
char *parse_datablock_name __PROTO((void));
void gpfree_datablock __PROTO((struct value *datablock_value));
void append_to_datablock __PROTO((struct value *datablock_value, const char * line));
int datablock_size __PROTO((struct value *datablock_value));
