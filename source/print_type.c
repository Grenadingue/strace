/*
** print_type.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 18:25:11 2014 Nicolas Chauvin
** Last update Wed Apr  8 20:25:41 2015 Nicolas Chauvin
*/

#include <stdbool.h>
#include "print_type.h"

const t_print_type	g_print_type[] =
  {
    &print_void,		/* void */
    &print_va_arg,		/* va_arg */
    &print_char,		/* char */
    &print_int,			/* int */
    &print_uint,		/* unsigned int */
    &print_uint32_t,		/* uint32_t */
    &print_uint64_t,		/* uint64_t */
    &print_long,		/* long */
    &print_ulong,		/* unsigned long */
    &print_size_t,		/* size_t */
    &print_ssize_t,		/* ssize_t */
    &print_int,			/* pid_t */
    &print_hexa,		/* off_t */
    &print_hexa,		/* key_t */
    &print_hexa,		/* mode_t */
    &print_hexa,		/* uid_t */
    &print_hexa,		/* gid_t */
    &print_hexa,		/* mqd_t */
    &print_hexa,		/* clock_t */
    &print_hexa,		/* clockid_t */
    &print_hexa,		/* dev_t */
    &print_hexa,		/* off64_t */
    &print_hexa,		/* sigset_t */
    &print_hexa,		/* socklen_t */
    &print_hexa,		/* time_t */
    &print_hexa,		/* cap_user_header_t */
    &print_hexa,		/* cap_user_data_t */
    &print_hexa,		/* aio_context_t */
    &print_hexa,		/* u64 */
    &print_hexa,		/* timer_t */
    &print_hexa,		/* key_serial_t */
    &print_hexa,		/* nfds_t */
    &print_hexa,		/* caddr_t */
    &print_hexa,		/* idtype_t */
    &print_hexa,		/* id_t */
    &print_hexa,		/* e_ptrace_req */
    &print_hexa,		/* s_file_handle */
    &print_hexa,		/* void* */
    &print_hexa,		/* void**, */
    &print_string,		/* char* */
    &print_hexa,		/* char** */
    &print_hexa,		/* u_char* */
    &print_hexa,		/* int* */
    &print_hexa,		/* int*[] */
    &print_hexa,		/* u_int* */
    &print_hexa,		/* u_long* */
    &print_hexa,		/* size_t* */
    &print_hexa,		/* off_t* */
    &print_hexa,		/* uid_t* */
    &print_hexa,		/* gid_t* */
    &print_hexa,		/* loff_t* */
    &print_hexa,		/* sigset_t* */
    &print_hexa,		/* fd_set* */
    &print_hexa,		/* socklen_t* */
    &print_hexa,		/* siginfo_t* */
    &print_hexa,		/* stack_t* */
    &print_hexa,		/* time_t* */
    &print_hexa,		/* timer_t* */
    &print_hexa,		/* cpu_set_t* */
    &print_hexa,		/* aio_context_t* */
    &print_hexa,		/* struct stat* */
    &print_hexa,		/* struct statfs* */
    &print_hexa,		/* struct pollfd* */
    &print_hexa,		/* struct sigaction* */
    &print_hexa,		/* struct iovec* */
    &print_hexa,		/* struct timeval* */
    &print_hexa,		/* struct timeval*[] */
    &print_hexa,		/* struct shmid_ds* */
    &print_hexa,		/* struct timespec* */
    &print_hexa,		/* struct timespec*[] */
    &print_hexa,		/* struct itimerval* */
    &print_hexa,		/* struct sockaddr* */
    &print_hexa,		/* struct msghdr* */
    &print_hexa,		/* struct rusage* */
    &print_hexa,		/* struct utsname* */
    &print_hexa,		/* struct sembuf* */
    &print_hexa,		/* struct msqid_ds* */
    &print_hexa,		/* struct linux_dirent* */
    &print_hexa,		/* struct timezone* */
    &print_hexa,		/* struct rlimit* */
    &print_hexa,		/* struct sysinfo* */
    &print_hexa,		/* struct tms* */
    &print_hexa,		/* struct utimbuf* */
    &print_hexa,		/* struct ustat* */
    &print_hexa,		/* struct sched_param* */
    &print_hexa,		/* struct sysctl_args* */
    &print_hexa,		/* struct timex* */
    &print_hexa,		/* struct kernel_sym* */
    &print_hexa,		/* struct nfsctl_arg* */
    &print_hexa,		/* union nfsctl_res* */
    &print_hexa,		/* struct strbuf* */
    &print_hexa,		/* struct user_desc* */
    &print_hexa,		/* struct io_event* */
    &print_hexa,		/* struct iocb* */
    &print_hexa,		/* struct iocb** */
    &print_hexa,		/* struct sigevent* */
    &print_hexa,		/* struct itimerspec* */
    &print_hexa,		/* struct epoll_event* */
    &print_hexa,		/* struct mq_attr* */
    &print_hexa,		/* struct kexec_segment* */
    &print_hexa,		/* struct robust_list_head* */
    &print_hexa,		/* struct robust_list_head** */
    &print_hexa,		/* struct perf_event_attr* */
    &print_hexa,		/* struct mmsghdr* */
    &print_hexa,		/* struct getcpu_cache* */
  };
