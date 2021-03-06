#include <seccomp.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>

void install_filters()
{
            scmp_filter_ctx context;

            context = seccomp_init(SCMP_ACT_KILL);

            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(exit_group), 0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(read), 0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(write), 0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(fstat),0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(brk),0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(lseek),0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(writev),0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(mmap),0);
            seccomp_rule_add(context, SCMP_ACT_ALLOW, SCMP_SYS(munmap),0);

            seccomp_load(context);
}