/*
 * Copyright(C) 2011-2016 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 *
 * This file is part of Nanvix.
 *
 * Nanvix is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Nanvix is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Nanvix. If not, see <http://www.gnu.org/licenses/>.
 */

#include <nanvix/const.h>
#include <nanvix/klib.h>
#include <nanvix/pm.h>
/*
 * Gets the process buffer.
 */
PUBLIC int sys_getprocess(pid_t pid, struct process_buf *buf)
{

    struct process processo

    for (processo = FIRST_PROC; i < LAST_PROC; processo++)
    {
        if (pid == processo->pid )
        {
            buf->pid = processo->pid;
            buf->user_time = processo->utime;
            buf->kernel_time = processo->ktime;
            buf->estado = processo->state;
            buf->prioridade = processo->priority;
            return 0;
        }
        
    }
    
    
	return -1;
}
