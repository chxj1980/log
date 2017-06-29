#ifndef __LOG_H__
#define __LOG_H__

#include <stdio.h>
#include <syslog.h>

typedef enum LOG_TYPE
{
	SYSTEM_LOG = 0,	// ϵͳ����
	CONFIG_LOG,		// ���ò���
	ALARM_LOG,			// �����¼�
	RECORD_LOG,		// ¼�����
	USER_LOG,			// �û�����
}LOG_TYPE;

char *bmc_log_read(FILE *fp, char *buff, int buf_len);

FILE *bmc_log_read_start();

void bmc_log_read_stop(FILE *fp);

int bmc_log_write(int log_level, LOG_TYPE log_type, const char *fmt, ...);

int bmc_log_init();

void bmc_log_uninit();

void bmc_log_delete();



#endif

