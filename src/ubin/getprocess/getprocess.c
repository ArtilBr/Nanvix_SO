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

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/* Software versioning. */
#define VERSION_MAJOR 1 /* Major version. */
#define VERSION_MINOR 0 /* Minor version. */

/*
 * Get_Process arguments.
 */
int main(int argc, char *const argv[])
{
	((void)argc);
    ((void)argv);

    int pid_process;
    struct process_buf *buf;
    

    for (int i = 1; i < argc; i++)
    {
        pid_process = atoi(argv[i]);
    }
    
    if resultado = 0{
    int result = getprocess(pid_process, &process_buf);
    printf("ID PROCESS: %u\n")buf.pid;
    printf("STATE PROCESS: %u\n")buf.state;
    printf("PRIORITY PROCESS: %u\n")buf.priority;
    printf("USER TIME: %u\n")buf.utime;
    printf("KERNEL TIME: %u\n")buf.ktime;
    }
    else printf("Processo não encontrado\n");

	return (EXIT_SUCCESS);
}
