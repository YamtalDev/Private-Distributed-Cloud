#ifndef __BUSE_LOGGER_H__
#define __BUSE_LOGGER_H__

#ifdef __cplusplus
extern "C" {
#endif

void NbdClearLog(void);
void NbdPrintLog(void);
void NbdLog(const char *msg, int data);
int NbdCreateLog(const char *log_name);

#ifdef __cplusplus
}
#endif

#endif /* __BUSE_H__*/
