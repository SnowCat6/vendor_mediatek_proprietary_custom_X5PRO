#ifndef _CFG_CUSTOM1_FILE_H
#define _CFG_CUSTOM1_FILE_H

typedef struct
{
	unsigned char Array[6];
}File_Custom1_Struct;

#define CFG_FILE_CUSTOM1_REC_SIZE    sizeof(File_Custom1_Struct)
#define CFG_FILE_CUSTOM1_REC_TOTAL   1

#endif
