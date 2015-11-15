/**
 * AS - the open source Automotive Software on https://github.com/parai
 *
 * Copyright (C) 2015  AS <parai@foxmail.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */
#ifndef COM_AS_APPLICATION_COMMON_CONFIG_RPMSG_CFG_H_
#define COM_AS_APPLICATION_COMMON_CONFIG_RPMSG_CFG_H_
/* ============================ [ INCLUDES  ] ====================================================== */

/* ============================ [ MACROS    ] ====================================================== */
#define RPMSG_PORT_DEFAULT	0
#define RPMSG_PORT_NUM 	1


#ifdef USE_SHELL
#define RPMSG_CHL_SHELL	0
#define RPMSG_CHL_CAN	1
#define RPMSG_CHL_NUM 	2
#else
#define RPMSG_CHL_CAN	0
#define RPMSG_CHL_NUM 	1
#endif
/* ============================ [ TYPES     ] ====================================================== */
/* ============================ [ DECLARES  ] ====================================================== */
/* ============================ [ DATAS     ] ====================================================== */
extern const RPmsg_ConfigType RPmsg_Config;
/* ============================ [ LOCALS    ] ====================================================== */
/* ============================ [ FUNCTIONS ] ====================================================== */

#endif /* COM_AS_APPLICATION_COMMON_CONFIG_RPMSG_CFG_H_ */
