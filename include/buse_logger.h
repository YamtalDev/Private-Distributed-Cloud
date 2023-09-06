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
#ifndef __BUSE_LOGGER_H__
#define __BUSE_LOGGER_H__
/******************************************************************************
* @brief Clears the content of the log file.
******************************************************************************/
void NbdClearLog(void);
/******************************************************************************
* @brief Prints the contents of the log file to the console.
******************************************************************************/
void NbdPrintLog(void);
/******************************************************************************
* @brief Logs a message with optional data to the specified log file.
* @param msg The message to log.
* @param data Optional integer data to include in the log.
******************************************************************************/
void NbdLog(const char *msg, int data);
/******************************************************************************
* @brief Creates or overwrites the log file with the given name.
* @param log_name The name of the log file to create or overwrite.
* @return Returns 0 on success, -1 on failure.
******************************************************************************/
int NbdCreateLog(const char *log_name);

#endif /* __BUSE_H__*/
