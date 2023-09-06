/******************************************************************************

    Writer: Tal Aharon

    Reviewer: Itamar.

    Date: 28.08.2023

*******************************************************************************

                          Description:

  This code defines a simple logger for the NBD server in C. It includes functions 
  to create, log messages to, clear, and print logs from a specified log file. 
  The NbdCreateLog function creates or overwrites the log file, NbdLog logs messages 
  with optional data to the file, NbdClearLog clears the log file, and NbdPrintLog 
  prints the contents of the log file to the console.

******************************************************************************/
#include <string.h>      /* strlen, memcpy              */
#include <stdio.h>       /* fopen, FILE. fclose, remove */
#include "buse_logger.h" /* Internal API                */
/*****************************************************************************/
static FILE *fd = NULL;
static char file_name[BUFSIZ] = {0};
/******************************************************************************
* @brief Creates or overwrites the log file with the given name.
* @param log_name The name of the log file to create or overwrite.
* @return Returns 0 on success, -1 on failure.
******************************************************************************/
int NbdCreateLog(const char *log_name)
{
    size_t size = strlen(log_name) + 1;
    fd = fopen(log_name, "w");
    if(NULL == fd)
    {
        return -1;
    }

    memcpy(file_name, log_name, size);
    file_name[size] = '\0';
    fclose(fd);
    return 0;
}
/******************************************************************************
* @brief Logs a message with optional data to the specified log file.
* @param msg The message to log.
* @param data Optional integer data to include in the log.
******************************************************************************/
void NbdLog(const char *msg, int data)
{
    fd = fopen(file_name, "a+");
    if(fd)
    {
        if(data)
            fprintf(fd, "%s %d\n", msg, data);
        else
            fprintf(fd, "%s\n", msg);
        fclose(fd);
    }
}
/******************************************************************************
* @brief Clears the content of the log file.
******************************************************************************/
void NbdClearLog(void)
{
    fd = fopen(file_name, "w");
    if(fd)
    {
        fclose(fd);
    }
}
/******************************************************************************
* @brief Prints the contents of the log file to the console.
******************************************************************************/
void NbdPrintLog(void)
{
    char buffer[BUFSIZ] = {0};
    fd = fopen(file_name, "r");
    if(fd)
    {
        while(NULL != fgets(buffer, sizeof(buffer), fd))
        {
            fputs(buffer, stdout);
        }

        fclose(fd);
    }
}
/*****************************************************************************/